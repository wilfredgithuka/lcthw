#include <stdio.h>

int main(int argc, char *argv[])
{
	int areas[] = {10, 12, 13, 14, 20};
	char name[] = "Zed";
	char full_name[] = {'Z','e','d',' ','A','.','S','h','a','w','\0'};
	
	//Warning: On some systems you may have to change the %ld to %u
	
	printf("The size of an int: %ld bytes\n", sizeof(int));
	printf("The size of areas (int[]): %ld bytes\n", sizeof(areas));
	printf("The number of int in areas: %ld \n", sizeof(areas)/sizeof(int));
	printf("The first area is %d and the last area is %d \n", areas[0], areas[4]);

	printf("The size of a char: %ld bytes\n", sizeof(char));
	printf("The size of name(char[]): %ld bytes\n", sizeof(name));
	printf("The number of char: %ld \n", sizeof(name)/sizeof(char));

	printf("The size of full name(char[]):%ld\n", sizeof(full_name));
	printf("The number of chars: %ld\n", sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full name=\"%s\"\n", name, full_name);
	
	return 0;
	
}



