#include <stdio.h>

int main(int argc, char *argv[])
{
	//create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {"Wilfred", "Kevin", "Moraa", "Shabi", "Zesta"};
	
	//safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;
	printf("Content of count is: %d\n", count);
	printf("The size of count is: %ld bytes\n", sizeof(count));
	printf("-----------------\n");

	//first way of using indexing
	for (i = 0; i < count; i++)
	{
		printf("%s has %d years alive \n", names[i], ages[i]);

	}
	printf("-----------------\n");
	
	//set up pointers to the start of the arrays
	int *cur_age = ages;
	char **char_name = names;

	printf("char_name is pointing at: %p \n", char_name);
	printf("cur_age is pointing at %ld \n", cur_age);
	printf("cur_age is pointing at %ld \n", *(cur_age+2));	
	printf("-----------------\n");

	//exposing the cur_age memory
	for (i = 0; i < count; i++)
	{
		printf("Memory location ages = %ld and names= %p \n", cur_age +i, char_name +i);
	}
	
	printf("-----------------\n");
	
	//getting addresses
	
	int height = 100;
	int *cur_height = &height;
	printf("The address of height is %ld \n", *cur_height);
	
	printf("-----------------\n");

	//second way of using pointers
	for (i = count-1; i >= 0; i--)
	{
		printf("%s is %d years old\n", *(char_name + i), *(cur_age + i));
	}
	printf("-----------------\n");
	
	//pointers are just arrays
	for (i = 0; i < count; i++)
	{
		printf("%s is %d years old again \n", char_name[i], cur_age[i]);
	}
	printf("--------\n");
}
