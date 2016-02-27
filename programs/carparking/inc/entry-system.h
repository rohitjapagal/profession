/**
 * \file   entry-system.h
 * \author Rangarajan R 
 * \date   January, 2016
 * \brief  
 *   This file contains the entry process and entry threads.
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


#ifndef __ENTRY_SYSTEM_H__
#define __ENTRY_SYSTEM_H__

/* Defines */
#define STRING_MAX 100 /* Maximum length of the string */
#define MAX_CAR 5 /* parking system can accomodate at max 100 cars*/

/* Thread Data*/
struct parking_details {
    char car_number[STRING_MAX];
    int token_id;
    time_t entry_time;

    /*
     * driver name and mother name are not shared with
     * the exit process and will be shared only on request
     */
    char driver_name[STRING_MAX];
    char driver_mother_name[STRING_MAX];
    /* for debugging purpose to show which thread is using the parking details*/
    int thread_instance;
};

   
     
#endif /* __ENTRY_SYSTEM_H__ */

#ifdef __cplusplus
}
#endif
