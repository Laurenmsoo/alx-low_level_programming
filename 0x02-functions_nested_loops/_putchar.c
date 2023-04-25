#include "main.h"
#include <unistd.h>
/**     
* _putchar - a program that prints putchar 
 * Return: 1 for sucess
 * return = -1 on error and error noumber is returned.
 */      
int _putchar(char c)
{       
return (write(1, &c, 1));
}    
