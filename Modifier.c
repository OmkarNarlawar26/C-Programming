#include<stdio.h>

int main()
{
    int i = 10;
    short int j = 20;
    long int k = 30;

    printf("Size of integer : %lu\n",sizeof(i));    // 4
    printf("Size of short integer : %lu\n",sizeof(j));  // 2
    printf("Size of long integer : %lu\n",sizeof(k));   // 8

    return 0;
}
