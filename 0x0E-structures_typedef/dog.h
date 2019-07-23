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
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int _putchar(char);

#endif
