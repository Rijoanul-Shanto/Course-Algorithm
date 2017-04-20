/*
 * Rijoanul Hasan Shanto
 * Quick Sort
 * C++
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#define FOR(N) for(int i = 0; i < n; i++)
#define ll long long int
#define TESTCASE int t;scanf("%d", &t);for(int i = 0; i < t; i++)
#define PF printf
#define SF scanf
using namespace std;

void partition_array(int *array, int first, int last, int *pivot)
{
    int left = first, right = last, temp;
    *pivot = left;

    while(1)
    {
        while(array[*pivot] <= array[right] && *pivot != right) right--;

        if(*pivot == right) break;
        else if(array[*pivot] > array[right])
        {
            swap(array[*pivot], array[right]);
            *pivot = right;
        }

        while(array[*pivot] >= array[left] && *pivot != left) left++;

        if(*pivot == left) break;
        else if(array[*pivot] < array[left])
        {
            swap(array[left], array[*pivot]);
            *pivot = left;
        }
    }
}

void quick_sort(int *array, int first, int last)
{
    int pivot;
    if(first < last)
    {
        partition_array(array, first, last, &pivot);

        quick_sort(array, first, pivot-1);
        quick_sort(array, pivot+1, last);
    }
}

int main()
{
    int n;

    while(cin >> n)
    {
        int array[n];
        FOR(n) array[i] = rand() / 100;
        FOR(n) cout << array[i] << ' ';
        cout << endl;

        quick_sort(array, 0, n-1);

        FOR(n) cout << array[i] << ' ';
        cout << endl;
    }

    return 0;
}
