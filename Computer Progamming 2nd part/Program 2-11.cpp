/**
This program won't run cause *p is a NULL pointer
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int *p = NULL;
    *p = 100;

    printf("Value of *p : %d\n",*p);

    return 0;
}
