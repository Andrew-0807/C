#include <bits/stdc++.h>
using namespace std;
ifstream fileIn("balba.in");
ofstream fileOut("balba.out");
int main()
{
    long long n , num , ans1 = 1, ans1but1 = 0;
    short p;
    fileIn>>p>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        fileIn>>num;
        v.push_back(num);
    }
    if(p==1)
    {num = -1;

        for (int i = 1; i < n; i++)
        {   
            if(v[i]==v[i-1])
            {   
                if(v[i]==num)continue;
                num = v[i];
                ans1but1++;
            }
            else if (v[i]!=v[i-1])
            {
                ans1++;
            }

        }
        fileOut<<ans1<<'\n'<<ans1but1;
    }
    // else
    // {
// 
// 
// 
    // }
    

}