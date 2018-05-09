//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class MyClass{
public:
    int x;
};

int square( MyClass ob)
{
    return ob.x * ob.x;
}

int main()
{
    MyClass a;
    a.x = 5;

    cout << "Square : " << square(a) << endl;

    return 0;
}



