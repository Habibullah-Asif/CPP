//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class MyClass{
    int i;
public:
    int get_i(){
        return i;
    }
    void set_i(int n)
    {
        i = n;
    }
    MyClass(int n)
    {
        i = n;
    }
};

int main()
{
    MyClass a[4] = {
        MyClass(1), MyClass(5), MyClass(77), MyClass(1000)
    };

    MyClass *p;
    //Notice that "&a" is not needed as "a" is already a pointer
    p = a;

    for(int i=0; i<4; i++)
    {
        cout<< "a[i] : " << p->get_i()<<endl;
        p++;
    }

    return 0;
}

