#include "main.h"
/**
*_islower - Controls if a character is in lowercase
*@c: char to be verified
*Return: return 0 or 1
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);

return (0);
}
