#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* c;
    c = (void*)malloc(sizeof(int));
    *c = 10;
	printf("hello, this is int pointer %p and value %d\n", c, *c);
    free((void*)c);
    return 0;
}
