// icerisinde delik denilen buyuk bosluklar bulunan dosyalardan
// bu delikleri temizleyerek yeni bir dosya olusturan program

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	
	int fd1, fd2;
	char buf[1], file_name[10];

	if(argc < 2){
		printf("Usage: %s <filename>\n", 
			argv[0]);
		exit(0);
	}

	fd1 = open(argv[1], O_RDONLY);
	fd2 = creat(file_name, S_IRWXU);

	while(read(fd1, buf, 1) > 0){
		if(buf[0] != '\0')
			write(fd2, buf, 1);
	}

	close(fd1);
	close(fd2);

	rename(file_name, argv[1]);
}

