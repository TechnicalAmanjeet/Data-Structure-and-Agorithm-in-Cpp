
// ********* Stack implementation by using Array ***********

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
    void changevalue();
    void totalElement();
};

void stack_main::changevalue(){
    cout<<"I have to implement it "<<endl;
}

void stack_main::totalElement(){
    cout<<"Total Emlement is Stack : "<<top+1<<endl;
}

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
            cout << "\n Stack is full. Overflow. " << endl;
            return 1;
        }
        // cout<<"full : "<<full;
        return 0;
    }

bool stack_main::isempty()
    {
        if (top == -1)
        {
            cout << "\n Stack is empty i.e Underflow" << endl;
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
            cout<<"\n Stark is full overflow"<<endl;
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
            cout<<"\n Stack is empty Underflow"<<endl;
        }
        else{
            --top;
            // delete(array[top+1]);
            cout<<"Deleated value : "<<array[top+1]<<endl;
        }
    }

void stack_main::display(){
    if(top==-1){
        cout<<"Stack is empty Underflow";
    }
    else{
        for(int i=0;i<=top;++i){
            cout<<i+1<<"th member : "<<array[i]<<endl;
        }
    }
}

int main(){
    stack_main stack;
    while(1){
        cout<<"  \n     ************** Stack in Cpp ************** \n press 0. Exit. \n Press 1. Push value without data. \n Press 2. PUsh value without data. \n Press 3. Pop Element from stack. \n Press 4. isfull operation \n Press 5. isEmpty operation \n Press 6. peak opearation  \n Press 7. changevalue operation \n Press 8. Display oepration.   "<<endl;

        int choice;
        cout<<endl;
        cout<<" Enter you Choice : ";
        cin>>choice;
        cout<<endl;
        if(choice==0) break;
        switch (choice)
        {
        case 1:
            cout<<" \n Your choice is PUsh without value : "<<endl;
            if(stack.isfull()){
                cout<<" Stack is in overflow you cannot add value!!"<<endl;
            }
            else stack.push();
            break;
        case 2: 
            cout<<"\n YOur choice is push with value : "<<endl;
            int data;
            if(stack.isfull()){
                cout<<" Stack is in overflow you cannot add value!!"<<endl;
            }
            else{
                cout<<"Enter value to push in stack : ";
                cin>>data;
                cout<<endl;
                stack.push(data);
            }
            break;

        case 3: 
            if(stack.isempty()) cout<<"Underflow you can't delete value "<<endl;
            else stack.pop();
            break;

        case 4:
            stack.isfull();
            break;
        
        case 5:
            stack.isempty();
            break;

        case 6:
            if(stack.isempty()) cout<<"underflow condition!"<<endl;
            else{
                int value;
                cout<<" Enter postion to peak value from stack : ";
                cin>>value;
                stack.peak(value);
            }
            break;
        
        case 7:
            stack.changevalue();
            break;
        
        case 8:
            stack.display();
            break;


        default:
            cout<<"YOu Entered wrong choice!!"<<endl;
            break;
        }
    }
}
