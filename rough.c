// // #include<stdio.h>

// // int main()
// // {
// //     int arr[3] = {21,43,54};

// //     int x = 0;

// //     x = arr[2] + 21 + arr[0];
// //     x++;

// //     printf("%d",x);

// //     return 0;

// // }

// #include<stdio.h>

// int main()
// {
//     float arr[4] = {98.3,4.3,51.6,7.6};

//     int i = 0;

//     printf("%f", arr[i]);
//     i++;

//     printf("%f", arr[i]);
//     i++;

//     printf("%f", arr[i]);

//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     float value = 3.14;
//     float *p = &value;
//     float *q = p;
//     float ans = *p +*q;

//     printf("%f\n",value);
//     printf("%d\n",*p);
//     printf("%d\n",*q);
//     printf("%f\n",ans);
    
    
//     return 0;
// }


// #include<stdio.h>

// int main()
// {
//     int no = 10;
//     int *p = NULL;
//     p = &no;
//     printf("%d\n",no);    
//     printf("%d\n",*p);
//     *p = 11;
//     printf("%d\n",no);    
//     printf("%d\n",*p);    

// return 0;
// }


#include<stdio.h>

int main()
{
    float arr[] = {10.3,43.4,45.34,234.45};
    float *p = NULL;
    float *q = NULL;
    p = arr;
    q = &(arr[3]);
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%f\n",*q);
    printf("%f\n",*p);
    printf("%f\n",*(p+2));
    printf("%f\n",*(p+1));
    printf("%f\n",p[1]);
    printf("%f\n",*(2 + arr));
    printf("%f\n",0[arr]);
    printf("%f\n",q-p);
    printf("%f\n",*(q-2));


    return 0;
}
