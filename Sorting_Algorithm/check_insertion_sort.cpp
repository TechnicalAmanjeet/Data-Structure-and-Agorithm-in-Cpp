#include<bits/stdc++.h>
using namespace std;

class Insertion_sort{
    public:
    void insertion_sort(int arr[],int n){
        int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            // swap(arr[j],key);
            j = j - 1;
        }
        arr[j + 1] = key;
        cout<<i<<" : ";
        for(int k=0;k<n;++k ){ cout<<arr[k]<<" ";}
        cout<<endl;
    }
    }
};

int main(){
    int arr[]={9,8,7,6,5,4,3,2,1};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    Insertion_sort solution;
    for(int i=0;i<size_arr;++i){cout<<arr[i]<<" ";}
    cout<<endl;
    solution.insertion_sort(arr,size_arr);
    for(int i=0;i<size_arr;++i){cout<<arr[i]<<" ";}
    return 0;
}