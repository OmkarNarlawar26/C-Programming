#include<stdio.h>

int main()
{
    char cValue = 'S';
    int iValue = 11;
    float fValue = 90.54f;
    double dValue = 98.567843;
    
    printf("Size of character is  : %d\n", sizeof(cValue));
    printf("Size of integer is  : %d\n", sizeof(iValue));
    printf("Size of float is  : %d\n", sizeof(fValue));
    printf("Size of double is  : %d\n", sizeof(dValue));

    printf("Size of character is  : %lu\n", sizeof(cValue));
    printf("Size of integer is  : %lu\n", sizeof(iValue));
    printf("Size of float is  : %lu\n", sizeof(fValue));
    printf("Size of double is  : %lu\n", sizeof(dValue));

    return 0;
}

