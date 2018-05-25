#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(void){

	char buf1[] = "abcde\n";
	char buf2[] = "qwerty";
	int fd = open("test_lseek.txt", O_CREAT, 700);
	write(fd, buf1, 5);
	lseek(fd, 20, SEEK_SET);
	write(fd, buf2, 6);
}
