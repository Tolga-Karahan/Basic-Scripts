#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void){

	if(!fork()){
		printf("PPID: %d\n", getppid());
		sleep(1);
		printf("PPID: %d\n", getppid());
		exit(0);
	}
}
