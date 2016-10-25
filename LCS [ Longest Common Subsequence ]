/*
 * Rijoanul Hasan
 * LCS [ Longest Common Subsequence ]
 * Dynamic Programming
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

int xLen, yLen, r, c;
string x, y;

int LCS()
{
    xLen = x.length();
    yLen = y.length();
    if(xLen < yLen)
    {
        swap(xLen, yLen);
        swap(x, y);
    }

    //cout << xLen << ' ' << x << endl << yLen << ' ' << y << endl;
    r = xLen+1, c = yLen+1;

    int dp[r][c];

    for(int i = 0; i < r; i++) dp[i][0] = 0;
    for(int i = 0; i < c; i++) dp[0][i] = 0;

    for(int i = 1; i < r; i++)
    {
        for(int j = 1; j < c; j++)
        {
            if(x[i-1] == y[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }

//    for(int i = 1; i < r; i++)
//    {
//       for(int j = 1; j < c; j++)
//       {
//           cout << dp[i][j] << ' ';
//       }
//       cout << endl;
//    }
    cout << dp[xLen][yLen] << endl;

    int flag = dp[xLen][yLen];

    char lcs[flag];
    lcs[flag] = '\0';
    r--;
    c--;
    /// Backtracking ...
    while(r > 0 && c > 0)
    {
        if(x[r-1] == y[c-1])
        {
            lcs[flag-1] = x[r-1];
            r--;
            c--;
            flag--;
        }
        else if(dp[r-1][c] > dp[r][c-1]) r--;
        else c--;
    }

    cout << lcs << endl;

}

int main()
{
    while(getline(cin, x) && getline(cin, y))

    {
        LCS();
    }

    return 0;
}
