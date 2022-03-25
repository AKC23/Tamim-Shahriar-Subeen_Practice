#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10;
    int *p;

    printf("Value of x : %d\n",x);

    p = &x;
    *p = 20;

    printf("Value of x : %d\n",x);

    x = 15;

    cout<<"\nValue of x : "<<x;
    printf("\nValue stored at location %p is %d\n",p,*p);

    printf("Address of x : %p\n",&x);
    printf("Address of p : %p\n",p);


    return 0;
}

