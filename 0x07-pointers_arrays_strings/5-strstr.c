#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer for the main string
 * @needle: pointer for the substring
 * Return: pointer to the beginning of the located substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
