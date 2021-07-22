#include <bits/stdc++.h>
using namespace std;

class stack_main
{
    int top = -1;
    int full;
    int array[6];
public:
    // void ram();
    stack_main(int data)
    {
        int array[data];
        full = data;
    }
    bool isempty()
    {
        if (top == -1)
        {
            cout << "\n Stack is empty" << endl;
            return 1;
        }
        return 0;
    }
    // void Full(){
    //     cout<<"\n full : "<<full<<endl;
    // }

    bool isfull()
    {
        if (top == full-1 )
        {
            cout << "\n Stack is full. " << endl;
            return 1;
        }
        // cout<<"full : "<<full;
        return 0;
    }
    void push(int data){
        if(isfull()){
            cout<<"\n stack is full i.e in overflow!"<<endl;
        }
        else{
            ++top;
            array[top] = data;
        }
    }
    void push(){
        if(isfull()){
            cout<<"\n Stark is full"<<endl;
        }
        else{
            ++top;
            int data; cin>>data;
            array[top]=data;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"\n Stack is empty"<<endl;
        }
        else{
            --top;
            // delete(array[top+1]);
            cout<<"\n Deleated value : "<<array[top+1]<<endl;
        }
    }
    void peak(int position);
    void display();
    void showfull();
};

void stack_main :: showfull(){
    cout<<"\n Full : "<<full;
}

void stack_main :: peak(int position){
        cout<<"value at postion "<<position<<" is "<<array[position]<<endl;
    }

void stack_main::display(){
    if(top==-1){
        cout<<"Stack is empty";
    }
    else{
        for(int i=0;i<=top;++i){
            cout<<i+1<<"th member : "<<array[i]<<endl;
        }
    }
}

int main(){
    stack_main s(20);
    // cout<<s.isempty();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(6);
    s.push(8);
    s.push(9);
    s.display();
    cout<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"\n";
    s.showfull();
}
