#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;
	//go thorugh each string in argv
	//why am I skipping argv[0]
	
	if (argv[1] = "--help"){
                printf("Welcome to the help menu");
                }
	for (i = 1;i < argc;i++){
		printf("argument %d: %s\n", i, argv[i]);
		}
	//lets make our own array of strings
	
	char *states[] = {"Carlifornia","Oregon", "Washington", "Texas"};
	
	int num_states = 4;
	
	for (i = 0; i < num_states; i++){
		printf("state %d: %s\n",i, states[i]);
		}
	return 0;
}
