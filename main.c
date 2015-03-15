#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#define BufferLength 100
#define SERVPORT 3111

int main()
{
    test1();
    test2();
    return 0;
}

int test1()
{
    int *c;
    c = (void*)malloc(sizeof(int));
    *c = 10;
    printf("hello, this is int pointer %p and value %d\n", c, *c);
    int *a = (void*)malloc(sizeof(int));
    *a = 150;
    printf("hello, this is int a pointer %p and value %d\n", a, *a);

    memcpy((void*)a, (void*)c, sizeof(int));
    printf("hello, this is int a pointer %p and value %d\n", a, *a);

    printf("hello, this is int pointer %p and value %d\n", c, *c);

    printf("end\n");
    free((void*)c);
    free((void*)a);

return 0;
}

int test2()
{
    int *c;
    c = (void*)malloc(sizeof(int));
    *c = 10;
    printf("hello, this is int pointer %p and value %d\n", c, *c);
    int *a = (void*)malloc(sizeof(int));
    *a = 150;
    printf("hello, this is int a pointer %p and value %d\n", a, *a);

    printf("hello, this is int a pointer %p and value %d\n", a, *a);

    printf("hello, this is int pointer %p and value %d\n", c, *c);

    printf("end\n");
    free((void*)c);
    free((void*)a);

return 0;
}
