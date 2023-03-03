#include <iostream>
using namespace std;
int main(){
    bool eprim=true;
    long long n;
    cin>>n;
    long long v[n], s = 0 ;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        for (int j = 2; j < n; j++)
        {   eprim = true;
            for (int k = 2; k*k < j; k++)
            {
                
                if (j%k==0 && j!=k)
                {
                    eprim=false;
                    
                }
                if (!eprim)
                {
                    break;
                }
                
            }
            if (v[i]%j==0 && eprim)
            {
                s=s+j;
               
                break;
            }
            
        }
        cout<<s;
        
    }
    



    return 0;
}