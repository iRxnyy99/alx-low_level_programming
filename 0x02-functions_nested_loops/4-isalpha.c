#include "main.h"
/**
  * _isalpha - function to check for alphabets
  * @c:  is the int that will use for the argument of the function
  * Return: 0
  */
int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'A'))
	{
		return (1);
	}
	else
		return (0);

}
