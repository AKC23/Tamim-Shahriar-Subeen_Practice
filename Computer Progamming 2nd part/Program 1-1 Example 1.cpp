
#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int func(char c)
{
    if(c>=48 && c<=57)
    {
        return 1;
    }
}
int main()
{
    int i;
    char c;

    cout<<"Enter an character : ";
    cin>>c;
    i = func(c);

    if(i==1)
    {
        cout<<"The character is a digit";
    }
    else
    {
        cout<<"The character is not digit";
    }

    return 0;

}
