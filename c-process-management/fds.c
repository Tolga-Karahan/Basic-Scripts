#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

int main(void){
	
	char buf[50];
	int n, fd;
	fd = open("forkfds.c", 0);
	printf("%d: fd %d\n", getpid(), fd);
	
	if(!fork()){
		exec("./fds", "fds", 0);
		wait(0);
	}

	n = read(fd, buf, 50);
	if(n < 0)
		printf("read failed");	
}	
