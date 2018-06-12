#include <stdio.h>
#include <unistd.h>
#include <sys/fcntl.h>

#define BUFFSIZE 25

int main(int argc, char *argv[]){

	int n, fd;
	char buf[BUFFSIZE];

	// dosyayi ac
	fd = open(argv[1], O_RDONLY);
		
	// dosya icerigini oku
	while((n = read(fd, buf, BUFFSIZE)) > 0)
		write(1, buf, BUFFSIZE);
	
	printf("\n");
	close(fd);
}
