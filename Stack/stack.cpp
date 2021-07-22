#include <bits/stdc++.h>
using namespace std;

class stack_main
{
    int top = -1;
    int full;
    int array[5];
public:
    // void ram();
    stack_main();
    stack_main(int data);
    bool isempty();
    bool isfull();
    void push(int data);
    void push();
    void pop();
    void peak(int position);
    void display();
    void showfull();
};

stack_main::stack_main(){
        full = 5;
    }

stack_main::stack_main(int data)
    {
        int array[data];
        full = data;
    }

bool stack_main :: isfull()
    {
        if (top == full-1 )
        {
            cout << "\n Stack is full. " << endl;
            return 1;
        }
        // cout<<"full : "<<full;
        return 0;
    }

bool stack_main::isempty()
    {
        if (top == -1)
        {
            cout << "\n Stack is empty" << endl;
            return 1;
        }
        return 0;
    }

void stack_main :: push(int data){
        if(isfull()){
            cout<<"\n stack is full i.e in overflow!"<<endl;
        }
        else{
            ++top;
            array[top] = data;
        }
    }

void stack_main :: push(){
        if(isfull()){
            cout<<"\n Stark is full"<<endl;
        }
        else{
            ++top;
            int data; cin>>data;
            array[top]=data;
        }
    }

void stack_main :: showfull(){
    cout<<"\n Full : "<<full;
}

void stack_main :: peak(int position){
        cout<<"value at postion "<<position<<" is "<<array[position]<<endl;
    }

void stack_main :: pop(){
        if(isempty()){
            cout<<"\n Stack is empty"<<endl;
        }
        else{
            --top;
            // delete(array[top+1]);
            cout<<"Deleated value : "<<array[top+1]<<endl;
        }
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
    stack_main s;
    // cout<<s.isempty();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.display();
    cout<<endl;
    s.pop();
    s.pop();
    s.display();
    cout<<"\n";
    s.showfull();
}
