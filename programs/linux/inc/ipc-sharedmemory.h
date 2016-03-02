/**
 * \file   ipc-sharedmemory.h
 * \author Rangarajan R 
 * \date   March,2016
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
 
 #ifdef __cplusplus
extern "C" {
#endif

/* File foo.  */
#ifndef __IPC_SHAREDMEMORY_H__
#define __IPC_SHAREDMEMORY_H__

#include <stdio.h>
#include <stdlib.h>

#ifdef DEBUG
    #define DEBUG_PRINT(x) printf x
#else
    #define DEBUG_PRINT(x) do {} while (0)
#endif

#define SHARED_MEMORY_KEY 6789


#endif /* __IPC_SHAREDMEMORY_H__ */

#ifdef __cplusplus
}
#endif
