//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;
class Array{
public:
    int *arr;
    int size;
    Array(int s){
        cout<<"Constructor...."<<endl;
        size = s;
        arr = (int *) malloc(s * sizeof(int));
    }

    void getSize()
    {
        cout<<"Size : "<<size<<endl;
    }

    ~Array(){
        cout<<"Destructor...."<<endl;
        cout<<"Freeing memory address: "<< (int)arr << endl;
        free(arr);
    }
};

void fun()
{
    cout<<"Inside function...."<<endl;

    Array a(10),b(100);

    //This should generate an error.
    //Because memory pointed by both a and b are same and will be freed twice.
    //But compiler has optimized it!!!
    a.getSize();

    a = b;

    a.getSize();
    b.getSize();

    return;
}
int main()
{
    fun();

    return 0;
}

