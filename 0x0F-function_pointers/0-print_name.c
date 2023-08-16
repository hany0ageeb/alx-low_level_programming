/**
 * print_name - function that prints a name.
 * @name: a name to print.
 * @f: a pinter function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != (void *)0)
		f(name);
}

