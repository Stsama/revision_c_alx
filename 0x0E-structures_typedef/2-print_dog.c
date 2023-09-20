#include <stdlib.h>
#include<stdio.h>
#include"dog.h"
/**
 * function that prints a struct dog
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %0.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
