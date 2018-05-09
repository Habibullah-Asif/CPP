//Bismillahir RAhmanir Raheem
#include<bits/stdc++.h>
using namespace std;

class Hasnat;

class Tamim
{
    int weight;
public:
    Tamim(int n)
    {
        weight = n;
    }
    friend void whoIsTheBoss(Tamim t, Hasnat h);
};

class Hasnat
{
    int weight;
public:
    Hasnat(int n)
    {
        weight = n;
    }
    friend void whoIsTheBoss(Tamim t, Hasnat h);
};

void whoIsTheBoss(Tamim t, Hasnat h)
{
    if(t.weight > h.weight)
    {
        cout<< "Tamim" << endl;
    }
    else {
        cout<< "Tamim" << endl;
    }
}

int main()
{
    Tamim t(100);
    Hasnat h(500);

    whoIsTheBoss(t, h);


    return 0;
}






