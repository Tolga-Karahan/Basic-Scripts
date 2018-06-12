#include <stdio.h>
#include <unistd.h>

int main(void){
	int i;
	fprintf(stdout, "%s", "ABC");
	fork();
	write(1, "DEF", 3);
	fprintf(stderr, "%s", "123");
	fprintf(stdout, "%s", "GHI");
	write(2, "JKL", 3);
	for(i = 0; i < 10; i++)
		fprintf(stderr, "%s", "MNO");
}
	
