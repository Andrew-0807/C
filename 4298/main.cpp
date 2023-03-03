#include <bits/stdc++.h>
using namespace std;
ifstream read("lacom.in");
ofstream write("lacom.out");
int main()
{
    long long n,a, suma;
    read>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {   
        read>>v[i];
    }
    a=v[0];
    suma =a;
    for(int i=1;i<n;i++)
    {
        if(v[i]>a)
        {
            suma += v[i];
            a=v[i];
        }
    }
    write<<suma;

    return 0;
    } 