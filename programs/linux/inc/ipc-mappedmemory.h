/**
 * \file   ipc-mappedmemory.h
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

#include <stdio.h>
#include <stdlib.h>

/* File foo.  */
#ifndef __IPC_MAPPEDMEMORY_H__
#define __IPC_MAPPEDMEMORY_H__

#ifdef DEBUG
# define DEBUG_PRINT(x) printf x
#else
# define DEBUG_PRINT(x) do {} while (0)
#endif
     
#endif /* __IPC_MAPPEDMEMORY_H__ */

#ifdef __cplusplus
}
#endif
