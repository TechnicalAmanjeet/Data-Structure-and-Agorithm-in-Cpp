#include <bits/stdc++.h>
using namespace std;

int linear_search_n(int arr[], int arr_size, int search)
{
    for (int i = 0; i < arr_size; ++i)
    {
        if (search == arr[i])
        {
            cout << search << " is at " << i + 1 << "th position in the array";
            return 1;
        }
    }
    cout << search << " is not Present in given array" << endl;
    return 0;
}

int linear_search_n_by_2(int arr[], int arr_size, int search)
{
    int start = 0, end = arr_size - 1;
    while (start != end)
    {
        if (arr[start] == search)
        {
            cout << search << " found at " << start + 1 << "th position";
            return 1;
        }
        else if (arr[end] == search)
        {
            cout << search << " found at " << end << "th positon";
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {6, 4, 78, 35, 57, 456, 56, 878, 45, 56, 76, 65};
    int search;
    cout << " Enter value to search : ";
    cin >> search;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    // linear_search(arr,arr_size,search);
//   4 int  x = linear_search_n(arr,arr_size,search);
   int  y = linear_search_n_by_2(arr,arr_size,search);

    return 0;
}