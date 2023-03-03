#include <iostream>
#include <fstream>
#include <tuple>
using namespace std;
ifstream read("colibri.in");
ofstream write("coibri.out");
tuple<int, int>  caz1(long long n, int v[]){
    tuple<int, int> saves;
   
    double curentP,maxP;
    int savesk, savesj;
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < n; k++)
        {   curentP = v[k]*v[j];
   
            if(maxP<curentP){
                maxP=curentP;
                savesj=j;
                savesk=k;}
            cout<<maxP<<endl;
        }
    }
    saves = make_tuple(savesj,savesk);
   return saves;
}
int calcQ(long long x,long long y ,long long z){
    double qx=((-1)^x)*y/z;
    return qx;
}
void vector_sorting(int a[],int n )
    {
        for (int x=0;x<n;x++)
                for(int j= x++;j<n;j++)
                    if(a[x]>a[j])
                        swap(a[x],a[j]);
    }
int main (){
    long long N,a,b,c,q,n;
    read>>N;
    n=N;
    int v[N],sorted[n],afiare[n] = {0};
    int i{0};
    while(read>>a>>b>>c)
    {
        v[i]=calcQ(a,b,c);
        sorted[i]=v[i];
        i++;
    }
    vector_sorting(sorted,n);
    int caz;
    for (int w = 0; w < n; w++)
    {
        if(v[w]>1||v[w]<0)caz=1;
    }
    tuple <int, int> saved;
    if (caz==1)saved = caz1(n, v );
    for (int k = 0; k < n; k++)
    {
        if(k==get<0>(saved))write<<1;
        else if(k==get<1>(saved))write<<1;
        write<<0;
    }
   
}  