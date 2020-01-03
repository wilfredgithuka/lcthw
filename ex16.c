#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
	char *name;
	int age;
	int height;
	int weight;
};

struct Person *Person_create( char *name, int age, int height, int weight)
{
	struct Person *who = malloc(sizeof(struct Person));
	assert(who =! NULL);
	
	who->name = strdup(name);
	who->age = age;
	who->height = height;
	who->weight = weight;
	
	return who; 
}

void Person_destroy(struct Person *who)
{
	assert(who != NULL);
	
	free(who->name);
	free(who);
}

void Person_print(struct Person *who)
{
	printf("Name: %s \n", who->name);
	printf("\tAge: %d \n", who->age);
	printf("\tHeight: %d \n", who->height);
	printf("\tWeight: %d \n", who->weight);

}

int main(int argc, char *argv[])
{

	//make two people structures

	struct Person *wilfred  = Person_create("Wilfred", 32, 45, 94);
	struct Person *xtine = Person_create("Christine", 22, 35, 58);
	
	printf("Wilfred is at memory location %p \n", wilfred);
	Person_print(wilfred);
	printf("Christine is at memory location %p \n", xtine);
	Person_print(xtine);

	Person_destroy(wilfred);
	Person_destroy(xtine);
	return 0;

}
