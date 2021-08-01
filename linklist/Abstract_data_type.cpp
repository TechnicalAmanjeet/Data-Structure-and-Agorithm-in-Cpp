#include<bits/stdc++.h>
using namespace std;

// int array[2];

class adt{
    int end=-1;
    int *arr=0;
    int full=0;
    public:
        adt(int array[]);
        bool isempty();
        bool isfull();
        void createarray();
        void display();
        void append();
        void insert();
        void insert(int n);
        void pop();
        void remove();
        void remove(int n);
        void change(int n,int data);
        int peak(int n);
        // void show(){
        //     cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4]<<" "<<endl;
        // }

};
adt::adt(int array[]){
    // int *a=array;
    full = 1;
    cout<<"size of list : "<<full<<endl;
    arr = array;
    // cout<<full<<" "<<arr<<" "<<array<<endl;
    // cout<<end<<" "<<full;
} 

bool adt::isempty(){
    if(end==-1) return 1;
    return 0;
}

void adt::display(){
    if(isempty()) cout<<"list is empty. i.e underflow"<<endl;
    else{
        int i=0;
        // cout<<end<<endl;
        cout<<"list is : ";
        while(i!=end){
            cout<<arr[i]<<" ";
            ++i;
        }
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

bool adt::isfull(){
    if(end==full-1) return 1;
    return 0;
}

void adt::createarray(){
    full*=2;
    int* arra = new int(full);
    for(int i=0;i<=end;++i) arra[i]=arr[i];
    int *temp=arr;
    arr = arra;
    // free(temp);
    delete(temp);
    
    cout<<"size of list : "<<full<<endl;
}
 
void adt::append(){
    if(isfull()) createarray();
    int data ;
    cout<<"Enter data : ";
    cin>>data;
    // cout<<end;
    ++end;
    arr[end]=data;
    // cout<<endl;
    display();
} 

void adt::insert(){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    if(isfull()) createarray();
    if(isempty()){
        ++end;
        arr[end]=data;
    }
    else{
        int t=arr[0];
        arr[0]=data;
        ++end;
        for(int i=1;i<=end;++i){
            int temp=arr[i];
            arr[i]=t;
            t=temp;
        }
    }
    display();
}

void adt::insert(int n){
    int data;
    cout<<"Enter data : ";
    cin>>data;
    if(isfull()) createarray();
    if(n>=end){
        cout<<"there is only "<<n<<" member in this list. so adding value to end of list."<<endl; 
        ++end;
        arr[end]= data;
        return;
    }
    int t=arr[n-1];
    arr[n-1]=data;
    ++end;
    for(int i=n;i<=end;++i){
        int temp=arr[i];
        arr[i]=t;
        t=temp;
    }
    display();
}

void adt::pop(){
    if(isempty()) cout<<"list is empty. i.e underflow."<<endl;
    else{
        --end;
    display();
    }
}

void adt::remove(){
    if(isempty()) cout<<"list is empty. i.e Underflow"<<endl;
    else{
        for(int i=1;i<=end;++i){
            arr[i-1]=arr[i];
        }
        --end;
        display();
    }

}

void adt::remove(int n){
    if(isempty()) cout<<"lsit is empty. underflow."<<endl;
    if(n>=end){
        cout<<"there are only "<<end<<" member in list. so rmoving last element."<<endl;
        pop();
    }
    else{
        for(int i=n;i<=end;++i){
            arr[i-1]=arr[i];
        }
        --end;
        display();
    }
}

void adt::change(int n,int data){
    if(n>end) cout<<"There are only "<<end+1<<" member in list"<<endl;
    else{
        arr[n-1]=data;
    }
    display();
}

int adt::peak(int n){
    if(n>end) cout<<"nothing to return bcz only "<<end+1<<"member in list"<<endl;
    else{
        return arr[n-1];
    }
    return 0;
}

int main(){
    int* arr= new int(1);
    adt ad(arr);
    int t=8;
    while(t--){
        ad.append();
    }
    ad.insert(3);
    ad.insert(5);
    ad.pop();
    ad.pop();
    ad.remove();
    ad.remove(50);
    ad.remove(4);
    ad.remove(1);
}