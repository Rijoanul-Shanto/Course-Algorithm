/*
 * Rijoanul Hasan
 * Fibonacci Number
 * Memoization
 * C++
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#define ll long long int
#define TESTCASE int t;scanf("%d", &t);for(int i = 0; i < t; i++)
#define PF printf
#define SF scanf
using namespace std;

int dp[10000];

int fibonacci(int n)
{
    if(n == 1) return 1;
    else if(n == 2) return 1;

    else
    {
        if(dp[n] != 0) return dp[n];
        else dp[n] = fibonacci(n-1) + fibonacci(n-2);
        return dp[n];
    }
}

int main()
{
    int n;

    while(cin >> n)
    {
        cout << fibonacci(n) << endl;
    }

    return 0;
}
