#include "function_pointers.h"
/**
 *  function that prints a name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
