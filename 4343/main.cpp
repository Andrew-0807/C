#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
ifstream cin("prietene.in");
ofstream cout("prietene.out");

bool is_prime(int number)
{
    if (number > 1)
    {
        for (int i = 2; i*i < number; i++)
        {
            if (number % i == 0 )
            {
                return false;
            }
           return true;
            
        }
    }
    return false;
}

int main()
{   
    short p;
    long long n,m;
    cin>>p>>n>>m;
    int vn[n][2], vm[m][2], pozmaxi = -1, maxi = -1 ,divmax = -1, primemax = 0, prietene=0;

    



    for (int i = 0; i < n; i++)
    {
        cin>>vn[i][0];
        vn[i][1] = 0;
        vn[i][2] = 0;
        for (int j = 2; j*j < vn[i][0]; j++)
        {
            if(vn[i][0]%j==0)
            {   
                if(is_prime(j))vn[i][2]++;
                vn[i][1]+=2;
            }
            
        }

        if (maxi<vn[i][0] && vn[i][1]>divmax)
        {
            maxi = vn[i][0];
            divmax = vn[i][1];
            pozmaxi = i;

        }
        
    }
    for (int i = 0; i < m; i++)
    {
        cin>>vm[i][0];
        vm[i][1] = 0;
        vm[i][2] = 0;
        for (int j = 2; j < vm[i][0]; j++)
        {
            if(vm[i][0]%j==0)
            {
                if(is_prime(j))vm[i][2]++;
                vm[i][1]+=2;
            }
        }
        if (maxi<vm[i][0] && vm[i][1]>divmax)
        {
            maxi = vm[i][0];
            divmax = vm[i][1];
            pozmaxi = i;

        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (vn[i][2]==vm[j][2])
            {
                prietene++;
            }
            
        }
        
    }
    
    if(p == 1)cout<<maxi;
    else cout<<prietene;

}