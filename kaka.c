

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a =55;

    int *ptr1=&a;


printf("The value a is %d\n", a);
printf("The value of a is also %d\n", *ptr1);
}