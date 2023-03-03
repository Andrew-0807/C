#include <bits/stdc++.h>
using namespace std;
int i;
void vector_creation(int a[], int n)
{
    for (i=0;i<n;i++)
            cin>>a[i];
} 

int main(){
int n;
cin>>n;
int v[n];
vector_creation(v, n);
for(i = 0; i<n; i++)
    if (v[i]%v[n-1]==0)cout<<v[i]<<" ";



    return 0;
} 