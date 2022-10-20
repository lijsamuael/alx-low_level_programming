#include "lists.h"
void myStartupFun (void) __attribute__ ((constructor));

void myStartupFun (void)
{
    printf ("startup code before main()\n");
}
