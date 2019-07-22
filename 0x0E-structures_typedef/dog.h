#ifndef DOG
#define DOG
/**
* struct dog - New type.
* @name: The char variable.
* @age: The float variable.
* @owner: The char variable.
*
* Description: Variable of type struct dog.
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
