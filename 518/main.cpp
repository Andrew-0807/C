#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,st,dr;
    cin>>n;
    int v[n];
    v[0]=1;
    for(int i=1;i<=n;i++)
    {   
        cin>>v[i];
        if ( v[i]==0)st=i;
        else if((v[i]!=0) && (v[i-1]==0))dr=i-1;
    } 
    cout<<st<<" "<<dr;

    return 0;
} 