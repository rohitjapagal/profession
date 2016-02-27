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
 char* arg_list1[] = {"./Program01",NULL};
 char* arg_list2[] = {"./Program02",NULL};
 
 printf("This is the main process \n");
 printf("The process id of main process is %d\n",(int)getpid());
 spawn("./Program01",arg_list1);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child process 01 exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child process 01 exited abnormally");
  
 spawn("./Program02",arg_list2);
 
 wait(&child_status);
  if(WIFEXITED(child_status))
   printf("The child process 02 exited normally with status id : %d\n",WEXITSTATUS(child_status));
  else
  printf("The child process 02 exited abnormally");
  
 printf("End of Main Process\n");
 return 0;
}
