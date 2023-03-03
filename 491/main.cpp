#include <bits/stdc++.h>
using namespace std;

void vector_creation(int a[], int n)
{
    for (int w=0;w<n;w++)
            cin>>a[w];
            } 


int main()
{
    bool found_first= false;
    long long n,pozfirst,pozlast,suma;
    cin>>n;
    vector_creation(v,n);
    for(int i=0;i<n;i++)
    {
        if (!found_first)if(v[i]%2==0){found_first=true;pozfirst=i;}
        if(v[i]%2==0)pozlast = i;
    } 
    for(int i=pozfirst;i<=pozlast;i++){
        suma = suma+v[i];
    }
    if(found_first)cout<<suma;
    else cout<<"NU EXISTA";
    return 0;
    } 