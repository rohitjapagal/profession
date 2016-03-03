#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>

#include <sys/shm.h>
#include <sys/stat.h>

/* custom header file include */
#include "../inc/ipc-sharedmemory.h"

/*Thread data structure*/
struct threadData {
 char name[20];
 int id;
};

/*This is thread 01*/
void* func1(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 1\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);

 temp->id += 10;
 
 printf("End Thread 1\n");

 return (void *)temp;
}

/*This is thread 02*/
void* func2(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 2\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);

 temp->id += 10;
 
 printf("End Thread 2\n");
 
 return (void *)temp;
}

/*This is thread 03*/
void* func3(void* param)
{
 struct threadData *temp;
 
 temp = (struct threadData *)param;
 
 printf("Start Thread 3\n");
 
 printf("thread name : %s\n",temp->name);
 printf("thread id : %d\n",temp->id);
 
 temp->id += 10;

 printf("End Thread 3\n");
 
 return (void *)temp;
}

int main() {
 pthread_t thread_id1, thread_id2, thread_id3;
 struct threadData thread_arg1, thread_arg2, thread_arg3;
 struct threadData *pthread_arg1, *pthread_arg2, *pthread_arg3;

 int segment_id;
 char* shared_memory;
 struct shmid_ds shmbuffer;
 int segment_size;
 const int shared_segment_size = getpagesize();

 /* Allocate a shared memory segment. */
 segment_id = shmget (SHARED_MEMORY_KEY, shared_segment_size,IPC_CREAT | S_IRUSR | S_IWUSR);
 printf("main segment id : %d \n",segment_id);
 /* Attach the shared memory segment. */
 shared_memory = (char*) shmat (segment_id, 0, 0);
 printf ("shared memory attached at address %p\n", shared_memory);
 /* Determine the segment's size. */
 shmctl (segment_id, IPC_STAT, &shmbuffer);
 segment_size = shmbuffer.shm_segsz;
 printf ("segment size: %d\n", segment_size);

 printf("Process 1 reading shared mem data : %s\n",shared_memory);
 
 /* Write a string to the shared memory segment. */
 sprintf (shared_memory, "This is written in process 1");
 /* Detach the shared memory segment. */
 shmdt (shared_memory);

  
 printf("Start of Process 01 \n");
 printf("The process id of parent Process 01 is %d\n",(int)getppid());
 printf("The process id of Process 01 is %d\n",(int)getpid());
 
 strcpy(thread_arg1.name,"Thread 01");
 thread_arg1.id   = 01;

 strcpy(thread_arg2.name,"Thread 02");
 thread_arg2.id   = 02;
 
 strcpy(thread_arg3.name,"Thread 03");
 thread_arg3.id   = 03;
 
 pthread_arg1 = &thread_arg1;
 pthread_arg2 = &thread_arg2;
 pthread_arg3 = &thread_arg3;

 pthread_create(&thread_id1,NULL,&func1,&thread_arg1);
 pthread_create(&thread_id2,NULL,&func2,&thread_arg2);
 pthread_create(&thread_id3,NULL,&func3,&thread_arg3);

 pthread_join(thread_id1,(void*)&pthread_arg1);
 pthread_join(thread_id2,(void*)&pthread_arg2);
 pthread_join(thread_id3,(void*)&pthread_arg3);

 printf("The return value of thread 1 : %d\n",thread_arg1.id);
 printf("The return value of thread 2 : %d\n",thread_arg2.id);
 printf("The return value of thread 3 : %d\n",thread_arg3.id);
 printf("End of Proicess 01 \n");

 return 0;
}
