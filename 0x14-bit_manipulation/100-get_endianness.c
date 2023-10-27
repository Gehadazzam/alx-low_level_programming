#include "main.h"
#include <stdint.h>
/**
*get_endianness - check the endless
*
*Return: int
*/
int get_endianness(void)
{
uint64_t kitty = 0x01020304;
uint8_t *cat = (uint8_t *)&kitty;
	if (*cat == 0x01)
		return (0);
	else
		return (1);
}
