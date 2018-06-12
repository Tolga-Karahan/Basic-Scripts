// Standard input un seek yapabilip yapamadigini test eder

#define STDIN_FILENO 0

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <stdlib.h>

int main(void){

	if( lseek(STDIN_FILENO, 0, SEEK_CUR) == -1)
		printf("STDIN cannot seek\n");
	else
		printf("STDIN can seek\n");
	exit(0);
}

// test_stdin < stdin_to_stdout can seek ciktisi verir
// cat stdin_to_stdout | ./test_Stdin can't seek ciktisi verir

