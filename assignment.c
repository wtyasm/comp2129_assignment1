#include <stdio.h>
#include <string.h>

#define BUFLEN (100)

int getNum(int argc, char** argv){
	int gird [][];
	char buf[BUFLEN];
  	while (fgets(buf, BUFLEN, stdin) != NULL) {
    	gird = strlen(buf);
   		printf("%d\n", gird);
  }
  return gird[][];
}

int main(void) {
	

	printf(“This is just a template\n”);
	return 0;
}
