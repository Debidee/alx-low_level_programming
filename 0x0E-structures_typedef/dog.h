#ifdef DOG_H
#define DOG_H
/**
 * struct dog - structure for dog
 * @name: dog's mame
 * @age: dog's age
 * @owner: dog's owner
 * Description: Data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
