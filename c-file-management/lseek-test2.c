#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>


int main(void){
	int fd = 0;
	char buf1[9] = "abcdefgh";
	char buf2[9] = "ABCDEFGH";

	if(fd = (open("holes", O_RDWR | O_CREAT, S_IRWXU)) < 0){
		printf("create error\n");
		exit(1);
	}

	if(write(fd, buf1, 9) != 9)
		printf("buf1 write error");

	if(lseek(fd, 40, SEEK_SET) == -1)
		printf("lseek error");

	if(write(fd, buf2, 9) != 9)
		printf("buf2 write error");

	exit(0);
}
