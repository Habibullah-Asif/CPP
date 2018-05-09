
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

void fun(Array ob)
{
    cout<<"Inside function...."<<endl;

    ob.getSize();
    return;
}

int main()
{
    Array a(1000);

    //This should generate an error.
    fun(a);

    return 0;
}

