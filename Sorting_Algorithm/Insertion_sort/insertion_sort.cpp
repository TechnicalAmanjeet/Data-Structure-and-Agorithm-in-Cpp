#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    void insertion_sort(int arr[],int size_arr){
    // int size_arr = sizeof(*arr)/sizeof(arr[0]);
    // for(int k=0;k<size_arr;++k){cout<<arr[k]<<" ";}
    // int a[] = arr[size_arr];
    for(int j=1;j<size_arr;++j){
        int i = j-1;
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
            --i;
            while(i>=0){
                if(arr[i+1]<arr[i]){swap(arr[i+1],arr[i]);--i;}
                else{break;}
            }           
        }
        cout<<j<<" : ";
        for(int k=0;k<size_arr;++k){cout<<arr[k]<<" ";}
        cout<<endl;
    }
}
};

int main(){
    // int arr[]={9,8,7,5,3,4,6,1,2};
    int arr[] = {24, 18, 38, 43 ,14 ,40, 1, 54};
    int size_arr = sizeof(arr)/sizeof(arr[0]);
    cout<<"0 : ";
    for(int i=0;i<size_arr;++i){cout<<arr[i]<<" ";}
    cout<<endl;
    solution insertion_Sort;
    insertion_Sort.insertion_sort(arr , size_arr);
    // for(int j=1;j<size_arr;++j){
    //     int i = j-1;
    //     if(arr[j]<arr[i]){
    //         swap(arr[i],arr[j]);
    //         --i;
    //         while(i>=0){
    //             if(arr[i+1]<arr[i]){swap(arr[i+1],arr[i]);--i;}
    //             else{break;}
    //         }           
    //     }
    //     cout<<j<<" : ";
    //     for(int k=0;k<size_arr;++k){cout<<arr[k]<<" ";}
    //     cout<<endl;
    // }
    return 0;
}