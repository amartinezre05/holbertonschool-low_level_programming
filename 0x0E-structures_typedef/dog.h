#ifndef DOG
#define DOG

/**
* dog - Typedef for struct dog
*/

/**
* struct dog - New type.
* @name: The char variable.
* @age: The float variable.
* @owner: The char variable.
*
* Description: Variable of type struct dog.
*/
typedef struct dog dog;
struct dog
{
char *name;
float age;
char *owner;
};

#endif
