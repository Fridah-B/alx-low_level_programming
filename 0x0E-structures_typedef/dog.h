#ifndef DOWG
#define DOWG
/**
 * struct dog - structure
 * @name: name of dog
 * @age: number
 * @owner: string
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog G_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
