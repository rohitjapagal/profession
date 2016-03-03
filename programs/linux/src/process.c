/**
 * \file   main-process.c
 * \author Rangarajan R 
 * \date   March, 2016
 * \brief  
 *   The main process for spawning tasks.
 *
 * \details 
 *   this process spawn two child process.
 *
 * \note
 *   The notes for this file.
 *
 * \copyright
 *   No part of this should be published in any form without the author 
 *   permission
 */
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<sys/resource.h>

int start_process = 1;
int which = PRIO_PROCESS;


int spawn(char* program,char** arg_list)
{
 pid_t child_pid;
 child_pid = fork();

 /* Parent Process */
 if(child_pid != 0){
     return child_pid;
 }
 else {
  /* Child Process */
  execvp(program,arg_list);
  fprintf(stderr,"an error occured in execvp\n");
  abort();
 } 
}

int main(int argc, char *argv[]) {
 pid_t child_status;
 char* arg_list1[] = {"./program-01",NULL};
 char* arg_list2[] = {"./program-02",NULL};
 char* arg_list_sharedmemory[] = {"./ipc-sharedmemory",NULL};
 char* arg_list_pipes[] = {"./ipc-pipes",NULL};
 char* arg_list_mappedmemory[] = {"./ipc-mappedmemory",NULL};
 char* arg_list_semaphore[] = {"./ipc-semaphore",NULL};
 char* arg_list_socket[] = {"./ipc-socket",NULL};
 
 printf("This is the main process \n");
 printf("The process id of main process is %d\n",(int)getpid());
 spawn("./program-01",arg_list1);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child process 01 exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child process 01 exited abnormally \n");
  
 spawn("./program-02",arg_list2);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child process 02 exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child process 02 exited abnormally \n");
  
  /* spawning the shared memory task */
  spawn("./ipc-sharedmemory",arg_list_sharedmemory);
 
  wait(&child_status);

  if(WIFEXITED(child_status))
   printf("The child shared memory exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child shared memory exited abnormally \n");

  /* spawning the pipes tasks */
  spawn("./ipc-pipes",arg_list_pipes);
 
  wait(&child_status);
   if(WIFEXITED(child_status))
    printf("The child pipes exited normally with status id : %d\n",WEXITSTATUS(child_status));
   else
   printf("The child pipes exited abnormally \n");

   /* spawing the mapped memory */
   spawn("./ipc-mappedmemory",arg_list_mappedmemory);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child mapped memory exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child mapped memory exited abnormally \n");

  /* spawning the semaphore task */
  spawn("./ipc-semaphore",arg_list_semaphore);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child semaphore exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child semaphore exited abnormally \n");
 

  /* spawning the socket task */
  spawn("./ipc-socket",arg_list_socket);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child socket exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child socket exited abnormally \n");
  
 printf("End of Main Process \n");
 
 return 0;
}
