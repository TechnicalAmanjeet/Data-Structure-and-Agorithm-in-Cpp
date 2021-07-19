#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[],int arr_size,int search){
    int start = 0, end = arr_size-1;
    
    if(arr[start]==search || arr[end]==search){return 1;}
    while (start != end)
    {   int mid = (start+end)/2;
        if(search > arr[mid]){ start = mid+1;}
        else if(search < arr[mid]){ end = mid-1;}
        else{
            return 1;
        }
    }
    return -1;
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int search;
    cout<<"Enter no. to search : ";
    cin>>search;
    int x = binary_search(arr,arr_size,search);
    if(x==-1){cout<<search<<" not found";}
    else{cout<<search<<" found";}
}