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

  DEBUG_PRINT(("\n***********To Demo Shared Memory IPC ************\n"));

  printf(" the size of the page : %d \n",getpagesize());

  /* allocate the shared memory segment */
  segment_id = shmget(SHARED_MEMORY_KEY,shared_segment_size,IPC_EXCL | S_IRUSR | S_IWUSR | S_IROTH | S_IWOTH);



  return 0;
}
