//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    int i;
public:
    int x;
    MyClass(int n)
    {
        i = n;
    }
    int get_i()
    {
        return i;
    }
};

int main()
{
    MyClass m(5);

    cout<<"Accessing through object..."<<endl;
    cout<< m.get_i() << endl;
    m.x = 5;
    cout<< m.x << endl;


    cout<<"Accessing through OBJECT POINTER..."<<endl;

    MyClass *p;
    p = &m;

    cout<< p->get_i() << endl;
    p->x = 5;
    cout<< p->x << endl;

    return 0;
}


