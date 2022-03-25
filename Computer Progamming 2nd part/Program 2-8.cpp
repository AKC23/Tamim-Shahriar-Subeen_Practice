
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10,y;
    int *p,*q;

//    printf("Value of x : %d\n",x);

    p = &x;
    q = &y;
    y = *p;
    *p = 15;
    *q = 20;

    printf("Value of x : %d\n",x);
    printf("Value of y : %d\n",y);
    printf("Value of *p : %d\n",*p);
    printf("Value of *q : %d\n",*q);

    return 0;
}


