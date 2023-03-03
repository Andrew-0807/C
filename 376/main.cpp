#include <bits/stdc++.h>
using namespace std;
int s;


int main()
{
    long long n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        if (n%i==0)
        {
            s=s+i;
        }
        
    }
    cout<<s;
    

    return 0;
    }
