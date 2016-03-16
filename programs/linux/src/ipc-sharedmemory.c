/**
 * \file   ipc-sharedmemory.c
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
#include <sys/shm.h>
#include <sys/stat.h>

/* custom header file include */
#include "../inc/ipc-sharedmemory.h"

int main (int argc, char* argv[]) {

  int segment_id;
  char *shared_memory;
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
  printf("shared memory segment size : %d\n",segment_size);

  DEBUG_PRINT(("\n***********To Demo Shared Memory IPC ************\n"));

  printf(" the size of the page : %d \n",getpagesize());

  /* allocate the shared memory segment */
  segment_id = shmget(SHARED_MEMORY_KEY,shared_segment_size,IPC_EXCL | S_IRUSR | S_IWUSR | S_IROTH | S_IWOTH);

 /* Deallocate the shared memory segment. */
//  shmctl (segment_id, IPC_RMID, 0);

  return 0;
}
