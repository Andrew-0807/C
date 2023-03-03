// The code can be optimized by using dynamic programming to reduce the number of calculations required. The following code uses 
// dynamic programming, which reduces the total number of calculations from n*n to n*k (where k is the size of the sub-matrix, 
// i.e. k = n+1-x):

#include <bits/stdc++.h>
using namespace std;
ifstream    read("cruce.in");
ofstream write("cruce.out");
int n , m , k , a[501][501], imax , jmax;
long long smax = -2000000000;
 
// Calculate sub-matrix with size n+1-k 
int SubMatrix(int n, int k) 
{ 
    int dp[n + 1][n + 1]; 
  
    // Copy the original matrix 
    for (int i = 0; i <= n; i++) 
        for (int j = 0; j <= n; j++) 
            dp[i][j] = a[i][j]; 
  
    // Updation phase 
    for (int i = 0; i <= n; i++) { 
        for (int j = 0; j <= n; j++) { 
            if (i == 0 || j == 0) { 
                dp[i][j] = 0; 
            } else { 
                dp[i][j] += dp[i - 1][j] + 
                        dp[i][j - 1] - 
                        dp[i - 1][j - 1]; 
            } 
        } 
    } 
  
    int max = INT_MIN; 
    
    // Find the maximum  
    // sub-matrix & its  
    // coordinate 
    for (int i = 0; i <= n+1-k ; i++) { 
        for (int j = 0; j <= n-k+1 ; j++) { 
            int s = dp[i+k-1][n] - dp[i-1][n] +  
                       dp[n][j+k-1] - dp[n][j-1]; 
            int s1 = dp[i+k-1][j+k-1] -  
                     dp[i-1][j+k-1] - 
                     dp[i+k-1][j-1] + 
                     dp[i-1][j-1]; 
            if (s - s1 > max) { 
              max = s - s1; 
              imax = i; 
              jmax = j; 
            } 
        } 
    } 
    write << max << " "  << imax << " " << jmax;
} 

int main()
{
    read >> n >> k;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
        {
            read >> a[i][j];
            a[i][j] = a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
        }
    SubMatrix(n, k);
    return 0;
}