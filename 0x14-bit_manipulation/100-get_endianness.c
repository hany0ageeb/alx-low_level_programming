#include "main.h"
#include <stdint.h>
/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	uint32_t i = 0x01234567;

	return ((*((uint8_t *)(&i))) == 0x67);
}

