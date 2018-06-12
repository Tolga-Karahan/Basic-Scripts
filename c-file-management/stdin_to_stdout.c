// STDIN'den verileri okuyup STDOUT'a yazar

#define BUFFSIZE 8092
#define STDIN_FILENO 0
#define STDOUT_FILENO 1

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(void){
	int n;
	char buf[BUFFSIZE];

	while((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
	if((write(STDOUT_FILENO, buf, BUFFSIZE)) != n)
		printf("write error");
	if(n < 0)
		printf("read error");
}

