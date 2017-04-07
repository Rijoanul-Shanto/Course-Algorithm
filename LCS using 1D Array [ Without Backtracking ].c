#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#include <string>
#include <cstdlib>
#include <cstring>
#include <stack>
#include <queue>
#include <vector>
#define IN freopen("f:\\in.txt", "rt", stdin);
#define OUT freopen("f:\\out.txt", "wt", stdout);
#define FOR(n) for(int i = 0; i < n; i++)
#define LL long long int
#define STESTCASE int t;scanf("%d", &t);getchar();for(int tc = 1; tc <= t; tc++)
#define TESTCASE int t;scanf("%d", &t);for(int tc = 1; tc <= t; tc++)
#define PF printf
#define SF scanf
#define EP 0.000000001
#define MAX 10000009
using namespace std;

string str1;
string str2;
int dp1[MAX];
int dp2[MAX];

int compare()
{
    //IN

    int len1 = str1.length();
    int len2 = str2.length();
    int diagonal = 0;

    memset(dp1, 0, sizeof dp1);
    memset(dp2, 0, sizeof dp2);

    for(int i = 1; i <= len1; i++)
    {
        for(int j = 1; j <= len2; j++)
        {
            if(str1[i-1] == str2[j-1]) dp2[j] = diagonal + 1;

            else dp2[j] = max(dp1[j], dp2[j-1]);

            //cout << dp2[j] << ' ';

            diagonal = dp1[j];
            dp1[j] = dp2[j];
        }
        //cout << endl;
    }

    return dp2[len2];
}

int main()
{
    while(cin >> str1 >> str2)
    {
        int match = compare();
        cout << match << endl;
    }

    return 0;
}
