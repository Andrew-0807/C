#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, half;
    cin >> n;
    vector<int>v;
    if (n % 6 == 0 )
        for (int i = 3;i < n ; i++)
        {
           if(n % i == 0 )
               v.push_back(i);
        }
        half = n / 2;
        for (int x  : v)
        {
            for( int y : v)
            if ( x + y == half)
            {
                cout<<x<<" "<<y<<" "<<half<<" ";
                break;
            }
        }


}
