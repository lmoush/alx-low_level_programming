#include "dog.h"
#include <stdlib.h>
/**
 * init_dog -  function that initialize a variable of type
 * @d: type struct
 * @name: number
 * @age: member
 * @owner: the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d == NULL)
        return;
    d->name = name;
    d->age = age;
    d->owner = owner;
}
