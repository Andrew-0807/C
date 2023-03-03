#include <bits/stdc++.h>
using namespace std;\

void vector_creation(int a[], int n)
{
    for (int i=0;i<n;i++)
            cin>>a[i];
}


int main()
{
    int n, maxi=-1,mini;
    cin>>n;
    int v[n];
    vector_creation(v,n);
    mini=v[0];
    for(int i=0;i<n;i++)
    {
        if(maxi<v[i])maxi=v[i];
        if(mini>v[i])mini=v[i];
    } 
    cout<<mini<<" "<<maxi;

    return 0;
    }
