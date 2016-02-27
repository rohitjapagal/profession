#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/resource.h>
#include "../inc/main.h"
#include "../inc/entry-system.h"
#include "../inc/exit-system.h"

int spawn_task(char* program,char** arg_list) {
    pid_t child_pid;
    child_pid = fork();

    /* parent process */
    if(child_pid != 0) {
	return child_pid;
    }
    else{
	/* child process */
	execvp(program,arg_list);
	fprintf(stderr,"an error has occured in execvp\n");
	abort();
    }
}
int main (int argc,char* argv[]) {
    int child_status;
    char *entryArg[] = {"./entry-system",NULL}; /* entry system process argument */
    char *exitArg[] = {"./exit-system",NULL}; /* exit system process argument */

int segment_id;
char* shared_memory;
struct shmid_ds shmbuffer;
int segment_size;
const int shared_segment_size = 0x64;
/* Allocate a shared memory segment. */
segment_id = shmget (SHMEM_KEY, shared_segment_size,IPC_CREAT | S_IRUSR | S_IWUSR);
printf("main segment id : %d \n",segment_id);
/* Attach the shared memory segment. */
shared_memory = (char*) shmat (segment_id, 0, 0);
printf ("shared memory attached at address %p\n", shared_memory);
/* Determine the segment's size. */
shmctl (segment_id, IPC_STAT, &shmbuffer);
segment_size = shmbuffer.shm_segsz;
printf ("segment size: %d\n", segment_size);


    spawn_task("./entry-system",entryArg);
    spawn_task("./exit-system",exitArg);

    /* Wait for the child process to complete. */
       wait (&child_status);
          if (WIFEXITED (child_status))
	     printf ("the child process exited normally, with exit code %d\n",WEXITSTATUS (child_status));
	        else
		   printf ("the child process exited abnormally\n");


/* Detach the shared memory segment. */
shmdt (shared_memory);
/* Deallocate the shared memory segment. */
shmctl (segment_id, IPC_RMID, 0);
  
    return 0;
}
