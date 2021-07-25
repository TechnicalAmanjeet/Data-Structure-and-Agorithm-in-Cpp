
//  ********* Implementation of Queue by using Array ***********
#include<bits/stdc++.h>
using namespace std;

// ******** Creation of queue_in class *******
class Queue_in{
    int array[5];
    int rear=-1,front=-1,full=5;
    int num_element = 0;
    public:
       Queue_in();
       Queue_in(int data);
       bool isempty();
       bool isfull();
       void push();
       void push(int data);
       void pop();
       void display();
       void num_of_element();
       void peak();
       void change();
       void element_can_push();
};

Queue_in :: Queue_in(){
    cout<<"Queue Created with a max size of 5"<<endl;
}

Queue_in :: Queue_in(int data){
    int array[data];
    full = data;
    cout<<"Queue Created with a max size of "<<data<<endl;
}

bool  Queue_in :: isempty(){
    if(front==rear){
        cout<<"Queue is empty i.e Underflow"<<endl;
        return 1;
    }
    else{
        cout<<"Queue is not empty. has member : "<<num_element<<endl;
    }
        return 0;
}

bool Queue_in::isfull(){
    if(num_element==full){
        cout<<"queue is in full state i.e Overflow"<<endl;
        return 1;
    }
    else{
        cout<<"Queue is not in full state. \n No. of  element in Queue is "<<num_element<<endl;
    }
        return 0;
}

void Queue_in::push(){
    if(isfull()){
        cout<<"We cnn't enter more element in queue. Overflow state"<<endl;
    }
    else{
        int data;
        cout<<" Enter element : ";
        cin>>data;
        cout<<endl;
        ++rear;
        array[rear]=data;
        ++num_element;
        if(front==-1) ++front;
    }
}

void Queue_in::push(int data){
    if(isfull()){
        cout<<"We cnn't enter more element in queue. Overflow state"<<endl;
    }
    else{
        ++rear;
        array[rear]=data;
        ++num_element;
        if(front==-1) ++front;
    }
}

void Queue_in::pop(){
    if(isempty()){
        cout<<"No element in queue to poped out."<<endl;;
        cout<<"Queue is in Underflow state."<<endl;
    }
    else{
        ++front;
        --full;
        --num_element;
    }
}

void Queue_in::display(){
    if(isempty()){
        cout<<"NOthing to Display"<<endl;
    }
    else{
        cout<<"Element in Queue is as follows !! "<<endl;
        for(int i=front;i<=rear;++i){
            cout<<i<<"th member : "<<array[i]<<endl;
        }
    }
    cout<<endl;
}

void Queue_in::num_of_element(){
    cout<<"Total Num of element in Queue is "<<num_element<<endl;
}

void Queue_in::element_can_push(){
    cout<<"we can push "<<full-num_element<<" more element in queue."<<endl;
}

void Queue_in::change(){
    cout<<"It has to be implemented"<<endl;
}

void Queue_in::peak(){
    cout<<"its also have to be implemented"<<endl;
}


// ********* Execution of Program Starts here ************
int main(){
     Queue_in qu;
    while(1){
        cout<<"  \n     ************** Stack in Cpp ************** \n press 0. Exit. \n Press 1. Push value without data. \n Press 2. PUsh value without data. \n Press 3. Pop Element from queue. \n Press 4. isfull operation \n Press 5. isEmpty operation \n Press 6. peak opearation  \n Press 7. changevalue operation \n Press 8. Display oepration.\n Press 9. To get no. of element in Queue \n Press 10. How many more element we can push in Queue.   "<<endl;

        int choice;
        cout<<endl;
        cout<<" Enter you Choice : ";
        cin>>choice;
        cout<<endl;
        if(choice==0) break;
        switch (choice)
        {
        case 1:
            if(qu.isfull()) cout<<"Overflow state."<<endl;
            else{
                int data;
                cout<<" Enter value to push in queue : ";
                cin>>data;
                cout<<endl;
                qu.push(data);
            }
        case 2:
            qu.push();
            break;
        
        case 3:
            qu.pop();
            break;
        case 4:
            qu.isfull();
            break;
        case 5:
            qu.isempty();
            break;
        case 6:
            qu.peak();
            break;
        case 7:
            qu.change();
            break;
        case 8:
            qu.display();
            break;
        case 9:
            qu.num_of_element();
            break;
        case 10:
            qu.element_can_push();
            break;
        default:
            cout<<"Pleas Enter correct value."<<endl;
    }
}
    cout<<"\n\n ******** Thankyou so much for using this ********"<<endl;
    return 0;
}