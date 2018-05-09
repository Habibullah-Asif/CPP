//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class MyClass{
public:
    int x;
};

int square( MyClass ob)
{
    ob.x = 10;
    cout<< "Value of ob.x : " << ob.x <<endl;
    return ob.x * ob.x;
}

int main()
{
    MyClass a;
    a.x = 5;

    cout << "Square : " << square(a) << endl;

    cout<< "Value of a.x : " << a.x <<endl;

    return 0;
}




