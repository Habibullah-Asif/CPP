//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    int *p, *q;

    a = 5;
    b = 666;

    p = &a;
    cout<<"a : " << a <<endl;
    cout<<"*p : " << *p <<endl;

    *p = 77;
    cout<<"a : " << a <<endl;
    cout<<"*p : " << *p <<endl;


    //Following lines will generate errors

    //1. no reference is assigned
    //cout<< *q << endl;


    //2. freeing twice is invalid
    //free(p);
    //free(p);

    return 0;
}


