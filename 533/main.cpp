#include <bits/stdc++.h>
using namespace std;\

void vector_creation(int a[], int n)
{
    for (int w=0;w<n;w++)
            cin>>a[w];
            } 

int main()
{

int n,mini,maxi,pozmini,pozmaxi;
cin>>n;
    int v[n];
vector_creation(v,n);
for(int i=0;i<n;i++)
{
    if (maxi<v[i]){maxi=v[i];pozmaxi=i;}
    if (mini>v[i]){mini=v[i];pozmini=i;}
} 
cout<<pozmini<<" "<<pozmaxi;

    return 0;
    } 