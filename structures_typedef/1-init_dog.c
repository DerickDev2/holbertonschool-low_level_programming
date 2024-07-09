#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - initializes a dog struct values
 *@d: points to a structure of dog
 *@name: points to a char thay has a name
 *@age: holds a float
 *@owner: points to a char the hase another name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
} /*end function*/
