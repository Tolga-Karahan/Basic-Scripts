#include <stdio.h>
#include <unistd.h>

int main(void){
	fprintf(stderr, "abc");
	write(1, "def", 3);
}
