//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;

void passByValue(int p)
{
    p = 10;
}

void passByReference(int *p)
{
    *p = 10;
}
int main()
{
    int a;

    a = 100000;
    cout<< "Pass by value"<<endl;
    cout<<a<<endl;
    passByValue(a);
    cout<<a<<endl;


    cout<< "Pass by value"<<endl;
    cout<<a<<endl;
    passByReference(&a);
    cout<<a<<endl;
    return 0;
}





