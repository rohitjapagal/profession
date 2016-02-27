/**
 * \file   main.h
 * \author Rangarajan R 
 * \date   January, 2016
 * \brief  
 *   This file contains the main process.
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

#ifdef __cplusplus
extern "C" {
#endif


#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdio.h>
#include <sys/shm.h>
#include <sys/stat.h>

#define SHMEM_KEY 12345


struct state {
 int segment_id;
 char *shared_memory;
 struct shmid_ds shmbuffer;
 int segment_size;
 int shared_segment_size;
};
   
     
#endif /* __MAIN_H__ */

#ifdef __cplusplus
}
#endif
