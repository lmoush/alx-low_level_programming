#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
* op_add - ...
* @a: ...
* @b: ...
*
* Return: ...
*/
int op_add(int a, int b)
{
   return (a + b);
}


/**
* op_sub - ...
* @a: ...
* @b: ...
*
* Return: ...
*/
int op_sub(int a, int b)
{
   return (a - b);
}


/**
* op_mul - ...
* @a: ...
* @b: ...
*
* Return: ...
*/
int op_mul(int a, int b)
{
   return (a * b);
}


/**
* op_div - ...
* @a: ...
* @b: ...
*
* Return: ...
*/
int op_div(int a, int b)
{
   if (b == 0)
   {
       printf("Error\n");
       exit(100);
   }


   return (a / b);
}


/**
* op_mod - ...
* @a: ...
* @b: ...
*
* Return: ...
*/
int op_mod(int a, int b)
{
   if (b == 0)
   {
       printf("Error\n");
       exit(100);
   }


   return (a % b);
}


/*100-main_opcodes.c*/


#include <stdlib.h>
#include <stdio.h>


/**
* print_opcodes - print the opcodes of this program
* @a: address of the main function
* @n: number of bytes to print
*
* Return: void
*/
void print_opcodes(char *a, int n)
{
   int i;


   for (i = 0; i < n; i++)
   {
       printf("%.2hhx", a[i]);
       if (i < n - 1)
           printf(" ");
   }
   printf("\n");
}


/**
* main - prints the opcodes of its own main function
* @argc: number of arguments passed to the function
* @argv: array of pointers to arguments
*
* Return: always O
*/
int main(int argc, char **argv)
{
   int n;


   if (argc != 2)
   {
       printf("Error\n");
       exit(1);
   }
   n = atoi(argv[1]);
   if (n < 0)
   {
       printf("Error\n");
       exit(2);
   }
   print_opcodes((char *)&main, n);
   return (0);
}
