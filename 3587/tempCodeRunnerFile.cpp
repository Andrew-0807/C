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
    int v[n];
    for (int i = 0; i <= n ; i++)
    {
        cin>>v[i];
    }
    cin >> searchedPozition;
    for (turtle = 0 , hair = 0 ; turtle <= n; turtle ++, hair =+ 2)
    {

        if (turtle + 1 == searchedPozition)
        {
            cout<<v[turtle];
        }

        if(v[turtle] == v[hair])
        {
            cout<<v[turtle];
        }
    }

}
