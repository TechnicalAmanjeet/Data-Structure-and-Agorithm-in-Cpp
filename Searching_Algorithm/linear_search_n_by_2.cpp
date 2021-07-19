#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {6, 4, 78, 35, 57, 456, 567, 878, 45, 56, 76, 65,55};
    int search;
    cout << " Enter value to search : ";
    cin >> search;
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int start =0 , end = arr_size -1;
    // cout<<end<<endl;
    for(start;start<=end;++start,--end){
        if(arr[start]==search){ cout<<"found"<<start+1<<" "<<arr[start]; return 0;}
        else if(arr[end]==search){cout<<"found"<<" "<<end<<" "<<arr[end];
        cout<<endl;
        return 0;
    // cout<<start<<" "<<end; return 0;
    }
    }
    // cout<<endl;
    // cout<<start<<" "<<end;
    cout<<"not found";
    return 0;
}