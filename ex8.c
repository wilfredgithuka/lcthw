#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	if (argc==1){
		printf("You only have one argument, you suck.\n");
	}else if (argc > 1 && argc < 11){
		printf("Here are your arguments \n");
		for (i = 0; i < argc; i++){
		printf("%s \n", argv[i]);
		}
		printf("\n");
	}else {
		printf("You have too many arguments, you suck \n");
	}
	return 0;
}
