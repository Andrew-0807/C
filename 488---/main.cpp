#include <iostream>
using namespace std;

void vector_creation(int a[], int n)
{
    for (int i=0;i<n;i++)
            cin>>a[i];
} 


int main()
{int n,k;
cin>>n;
int v[n];
vector_creation(v,n);
for(k=0; k<n;k++)if(k%2==0)cout<<v[k]<<" ";
    cout<<endl;
for(k=n; k>0;k--)if(k%2==1)cout<<v[k]<<" ";



return 0;
} 