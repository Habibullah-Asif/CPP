//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class MyClass{
public:
    int x;
};

MyClass square( MyClass ob)
{
    ob.x = ob.x * ob.x;
    return ob;
}

int main()
{
    MyClass a;
    a.x = 5;

    a = square(a);

    cout<< "Square : " << a.x <<endl;

    return 0;
}



