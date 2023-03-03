#include <bits/stdc++.h>
using namespace std;



int main()
{int n ,suma;

    cin>>n;
    for(int i=1;i<=n;i++){
    int factorial=1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        suma = suma + factorial;
    }
        cout<<"Rezultatul este "<<suma;


    return 0;
    }
