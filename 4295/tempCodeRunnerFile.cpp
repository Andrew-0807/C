#include <iostream>
#include<tuple> 
#include <cmath>
using namespace std;
int main(){
    int n; 
    bool eprim=true;
    // tuple <long long, long long> corespondenti;
    // corespondenti = make_tuple(0, 0);
    cin<<n;
    long long cn=n,nrtimes[(int)sqrt(i)], maxi=0,pozmax=0;
    while (cn!=0)
    {
        for (int i = 2; i*i < cn; i++)
        {
            for (int k = 0; k*k < i; k++)
            {   eprim =true;
                if(i%k==0)eprim=false;
            }
            if(!eprim)break;
            while (i%n==0)
            {
                nrtimes[i]++;
                cn /= i;
            }

        }
        
    }
    for (int i = 0; i*i < n; i++)
    {
        if(maxi<nrtimes[i])maxi=nrtimes[i];
        else if (maxi = nrtimes[i])pozmax = i;
    }
    cout<<pozmax;
}