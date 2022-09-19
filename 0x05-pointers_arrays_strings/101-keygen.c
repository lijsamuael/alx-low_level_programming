#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 */
int main(void)
{
int i;
char n;
for (i = 0; i < 10; i++)
{
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%c", n);
}
return (0);
}
