#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#define IS_NULL_OR_EMPTY(str) (((str == NULL) || (*str == '\0')))
/**
 * enum bll - boolean values
 * @FALSE: boolean false 0
 * @TRUE: boolean true 1
 */
typedef enum bll
{
	FALSE,
	TRUE
} Bool;
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif

