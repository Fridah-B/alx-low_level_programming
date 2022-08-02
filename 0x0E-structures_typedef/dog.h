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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
