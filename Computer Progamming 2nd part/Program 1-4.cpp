#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ara[5] = {10,20,30,40,50};
    int i;
    printf("Value of the element of array\n");
    for(i=0; i<5; i++)
    {
        printf("Value of array : %d \n",ara[i]);
    }

    printf("\n\nAddress of the element of array\n");

    printf("Address of ara is : %p\n",ara);                 //address of an array and the address of first element of the array is same.

    for(i=0; i<5; i++)
    {
        printf("Address of ara[i] : %p\n",&ara[i]);
    }

}
