#include <stdio.h>

void display (int age1, char name)
{
	printf("The age1 is %d \n", age1);
	printf("The name is %c \n", name);
}

int main (int argc, char *argv[])
{
	int ageArray[] = {2,8,4,12};
	char nameArray[] = {"Wilfred", "Kevin"};
	
	display (ageArray[1], nameArray[4]);
	
	//printf("The total is %d \n", all);
	return 0;


}



