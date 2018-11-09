#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>

static void sighandler(int signo){
  if(signo == SIGINT){
    printf("program exited due to SIGINT");
  }
}

int main(){
  while(1){
    printf("Process ID: %d\n", getpid());
    sleep(1);
  }
  return 0;
}

//SIGINT = 2
//SIGUSR1 = 10
