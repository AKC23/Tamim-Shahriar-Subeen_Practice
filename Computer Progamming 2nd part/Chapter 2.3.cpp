
#include<bits/stdc++.h>
using namespace std;

/** program 2.17  */

/**
As the value of pointer **q changes, it will change the answer of others whose address
it holds
*/

int main()
{
    char c = 'A';

    char *p,**q;

    p = &c;
    q = &p;

    **q = 'B';


    cout<<c<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;


    return 0;
}

