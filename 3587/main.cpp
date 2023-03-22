#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

int main()
{
    int turtle, hair, n, searchedPozition;
    cin>>n;
    bool notTuned = true, notTuned1 = true;
    int v[n];
    for (int i = 0; i <= n ; i++)
    {
        cin>>v[i];
    }
    cin >> searchedPozition;
    for (turtle = 0 , hair = 0 ; turtle <= n; turtle ++, hair =+ 2)
    {
        if (notTuned)
        {
            if (turtle + 1 == searchedPozition)
            {
                cout<<v[turtle]<<"\n";
                notTuned = false;

            }
        }

        if(v[turtle] == v[hair])
        {
            cout<<v[turtle]<<"\n";

        }
        if (hair >= n)
        {
            hair = 0;
        }
        if (notTuned1)
        {
            if (turtle + 1 == searchedPozition)
            {
                cout<<v[hair]<<"\n";
                notTuned1 = false;

            }
        }
        if(!notTuned && !notTuned1  )
        {
            break;
        }
    }

}
