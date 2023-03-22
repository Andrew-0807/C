#include <iostream>
#include <fstream>
#include <vector>

#include<bits/stdc++.h>
// #include <>
using namespace std;
// ifstream cin("datapal.in");
// ofstream cout("datapal.out");
int main(){long long n;
    cin>>n;
    vector<long long>v;
    vector<long long>ogl;
    vector<long long>aparitii;
    long long num,nrpal=0, milenia;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 9; i++)
        {   
            cin>>num;
            v.push_back(num);
            ogl.insert(ogl.begin(), num);
        }
        for (int i = 0; i < 9; i++)
        {
            if(v[i]!=ogl[i]){
                break;
            }
            // 01.12.2110

            if(i == 6)
            {
                nrpal++;
                milenia = v[5]*1000+v[6]*100+v[7]*10+v[8]*0.001;
                
                
                if (find (v.begin(), v.end(), milenia) != v.end())
                {
                    aparitii.push_back(milenia);
                }
            }
        }
    }
    cout<<nrpal<<'\n';
    for (long long i :aparitii)
    {
        cout<<i<<" ";
    }
    
}