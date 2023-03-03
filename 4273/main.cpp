#include <bits/stdc++.h>
using namespace std;

int main()
{
 long long n;
 cin>>n;
 long long produs=1;
 for (int i = 2; i <= n; i++)
 {
    produs *= i*i;
 }
 cout<<produs;


    return 0;
    } 