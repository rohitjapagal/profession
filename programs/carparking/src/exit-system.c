/**
 * \file   exit-system.c
 * \author Rangarajan R 
 * \date   January, 2016
 * \brief  
 *   Brief description of file.
 *
 * \details 
 *   Detailed description of file.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   No part of this should be published in any form without the author permission
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>
#include <time.h>
#include "../inc/main.h"
#include "../inc/entry-system.h"
#include "../inc/exit-system.h"

/*
 * mutex for allowing the user to enter the data in CLI 
 * if this mutex is not used then the CLI keeps switching between two threads so
 * fast and user will not be able to enter the data in the CLI
 */
pthread_mutex_t entry_mutex = PTHREAD_MUTEX_INITIALIZER;


void* thread_func(void *data) {
//  time_t clk = time(NULL);
  struct parking_details *pdata = (struct parking_details *)data;

    /* lock this thread to allow the user to enter data in CLI*/
    pthread_mutex_lock(&entry_mutex);

    printf("\n enter the car details thread : %d",pdata->thread_instance);
    printf("\n car number  :");
    scanf("%s",pdata->car_number);
    printf("\n token id  : ");
    scanf("%d",&pdata->token_id);
//    pdata->entry_time =  ctime(&clk);
//    printf("\n entry time : %s",pdata->entry_time);
    printf("driver name :");
    scanf("%s",pdata->driver_name);
    printf("driver mother name :");
    scanf("%s",pdata->driver_mother_name);
    /* unlocking the mutex to allow the other thread*/
    pthread_mutex_unlock(&entry_mutex);
    return 0;

}


int main (int argc,char* argv[]) {

    pthread_t thread1_id, thread2_id,thread3_id;
    time_t clk = time(NULL);
    struct parking_details car[MAX_CAR];

int segment_id;
char* shared_memory;
struct shmid_ds shmbuffer;
int segment_size;
const int shared_segment_size = 0x64;
/* Allocate a shared memory segment. */
segment_id = shmget (SHMEM_KEY, shared_segment_size,IPC_CREAT | S_IRUSR | S_IWUSR);
printf("exit segment id : %d \n",segment_id);
/* Attach the shared memory segment. */
shared_memory = (char*) shmat (segment_id, 0, 0);
printf ("shared memory attached at address %p\n", shared_memory);
/* Determine the segment's size. */
shmctl (segment_id, IPC_STAT, &shmbuffer);
segment_size = shmbuffer.shm_segsz;
printf ("segment size: %d\n", segment_size);
/* Write a string to the shared memory segment. */
printf ("string : %s\n",shared_memory);


    printf(" Current timing of the process is %s \n",ctime(&clk));

    printf("Inside Exit system process \n");
    
    car[0].thread_instance = 1;
    pthread_create(&thread1_id,NULL,&thread_func,(void *)&car[0]);

    car[1].thread_instance = 2;
    pthread_create(&thread2_id,NULL,&thread_func,(void *)&car[1]);
     
    car[2].thread_instance = 3;
    pthread_create(&thread3_id,NULL,&thread_func,(void *)&car[2]);

    pthread_join(thread1_id,NULL);
    pthread_join(thread2_id,NULL);
    pthread_join(thread3_id,NULL);

/* Detach the shared memory segment. */
shmdt (shared_memory);

    return 0;
}
