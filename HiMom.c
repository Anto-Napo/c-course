#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {

	printf("I like pizza!\n\tIt's very good!\n\n");

	printf("1\t2\t3\n4\t5\t6\n7\t8\t9\nThis is a \"Grid of numbers\"\n\n");

	int age;

	char name[25];

	printf("Name: ");
	fgets(name, 25, stdin);
	name[strlen(name)-1] = '\0';

	printf("\nAge: ");
	scanf("%d", &age);

	printf("\nMy name is %s ", name);
	printf("and I'm %d years old.", age);

	return 0;
}