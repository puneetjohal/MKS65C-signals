#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

static void sighandler(int signo){
  if(signo == SIGINT){
    printf("program exited due to SIGINT\n");
    exit(1);
  }
  if(signo == SIGUSR1){
    printf("Parent PID: %d\n", getppid());
  }
}

int main(){
  signal(SIGINT, sighandler);
  signal(SIGUSR1, sighandler);

  while(1){
    printf("Process ID: %d\n", getpid());
    sleep(1);
  }
  return 0;
}

//SIGINT = 2
//SIGUSR1 = 10
