#include "lists.h"
/**
 * beforeMain - Run before main func
 */
void beforeMain(void) __attribute__ ((constructor));
void beforeMain(void)
{
	printf(
	"You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
	);
}
