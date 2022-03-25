/**
This program won't run cause *p doesn't have any value in it, it is a is a NULL pointer
*/

/** program 2-9 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 100;
    int *p = 10;

    printf("Value of x : %d\n",x);
    printf("Value of *p : %d\n",*p);

    return 0;
}



/** program 2-10 */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x = 100;
    int *p = NULL;

    printf("Value of x : %d\n",x);
    p = &x;
    printf("Value of *p : %d\n",*p);

    return 0;
}

