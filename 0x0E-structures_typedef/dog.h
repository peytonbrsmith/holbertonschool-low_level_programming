#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - structure for dog info
 * @name: Dog's name
 * @age: age of dog
 * @owner: name of owner
 *
 * Description: This structure contains information regarding dogs
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
#endif /* _DOG_H_ */
