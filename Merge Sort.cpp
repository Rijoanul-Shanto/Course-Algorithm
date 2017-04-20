/*
 * Rijoanul Hasan Shanto
 * Merge Sort
 * C++
*/

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstdlib>
#define FOR(n) for(int i = 0; i < n; i++)
#define ll long long int
#define TESTCASE int t;scanf("%d", &t);for(int i = 0; i < t; i++)
#define PF printf
#define SF scanf
using namespace std;

void merging(int array[], int star_point, int mid_point, int end_point)
{
    int i, first_array_index = star_point, second_array_index = mid_point+1;
    int temp[end_point+1];
    //cout << "merging : " << star_point << ' ' << mid_point << ' ' << end_point << endl;
    for(i = first_array_index; first_array_index <= mid_point && second_array_index <= end_point; i++)
    {
        if(array[first_array_index] < array[second_array_index])
            temp[i] = array[first_array_index++];
        else temp[i] = array[second_array_index++];
    }
    while(first_array_index <= mid_point) temp[i++] = array[first_array_index++];
    while(second_array_index <= end_point) temp[i++] = array[second_array_index++];

    for(i = star_point; i <= end_point; i++) array[i] = temp[i];
}

void merge_sort(int array[], int start_point, int end_point)
{
    int mid_point;

    if(start_point >= end_point)
    {
        //cout << "base : " << start_point << ' ' << end_point << endl;
        return;
    }

    mid_point = (start_point + end_point) / 2;
    //cout << "~ : " << start_point << ' ' << mid_point << ' ' << end_point << endl;

    merge_sort(array, start_point, mid_point);
    //cout << "1st : " << start_point << ' ' << mid_point << ' ' << end_point << endl;
    //system("pause");
    merge_sort(array, mid_point+1, end_point);
    //cout<< "2nd : "  << start_point << ' ' << mid_point << ' ' << end_point << endl;
    //system("pause");
    merging(array, start_point, mid_point, end_point);
    //system("pause");
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
        merge_sort(array, 0, n-1);

        FOR(n) cout << array[i] << ' ';
        cout << endl;
    }

    return 0;
}
