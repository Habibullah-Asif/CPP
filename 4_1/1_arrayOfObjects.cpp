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
    /*
    MyClass()
    {
        cout << "Constructor..." << endl;
    }
    ~MyClass()
    {
        cout << "In Destructor..." << endl;
    }
    */
};

int main()
{
    MyClass a[10];

    for(int i=0; i<10; i++)
    {
        a[i].set_i(i*i);
    }

    for(int i=0; i<10; i++)
    {
        cout<< "a[i] : " << a[i].get_i()<<endl;
    }

    return 0;
}






