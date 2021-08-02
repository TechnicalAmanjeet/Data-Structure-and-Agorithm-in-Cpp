#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        Node *prev,*next;
        int data;
};

class dublin{
    public:
        Node *Start=NULL;
        Node *End=NULL;
        int count=0;
        dublin();
        bool isempty();
        void display();
        void displayReverse();
        void push();
        void insert();
        void insert(int n);
        void pop();
        void remove();
        void remove(int n);
        void change(int n,int data);
};


dublin::dublin(){
    cout<<"Doubly linkedlist created"<<endl;
}

bool dublin::isempty(){
    if(Start==NULL) return 1;
    return 0;
}

void dublin::display(){
    if(isempty()) cout<<"List is Empty.."<<endl;
    else{
        Node *temp=Start;
        cout<<"LIst is : ";
        while(temp!=End) {
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
}

void dublin::displayReverse(){
    if(isempty()) cout<<"List is empty!!"<<endl;
    else{
        Node* temp=End;
        cout<<"Reversed List : ";
        while(temp!=Start){
            cout<<temp->data<<" ";
            temp = temp->prev;
        }
        cout<<temp->data<<endl;
    }
}

void dublin::push(){
    int data;
    Node* new_node = new Node();
    ++count;
    cout<<"Enter data : ";
    cin>>data;
    new_node->data = data;
    new_node->next = NULL;
    if(isempty()){
        Start = new_node;
        new_node->prev = Start;
    }
    else{
        new_node->prev = End;
        End->next = new_node;
    }
    End = new_node;
    display();
    displayReverse();
}

void dublin::insert(){
    int data;
    Node* new_node = new Node();
    ++count;
    cout<<"Enter data : ";
    cin>>data;
    new_node->data = data;
    if(isempty()){
        Start = new_node;
        new_node->prev = new_node;
        Start->next = NULL;
        End=new_node;
    }
    else{
        Start->prev = new_node;
        new_node->next = Start;
        new_node->prev = new_node;
        Start = new_node;
    }
    display();
    // displayReverse();
}

void dublin::insert(int n){
    int data;
    Node* new_node = new Node();
    ++count;
    cout<<"Enter data : ";
    cin>>data;
    new_node->data = data;
    if(isempty()){
        Start = new_node;
        new_node->prev = new_node;
        Start->next = NULL;
        End=new_node;
    }
    else if(n>count) {
        cout<<"There are only "<<count<<" member in list"<<endl;
        return;
    }
    else if(n==1){
        Start->prev = new_node;
        new_node->next = Start;
        new_node->prev = new_node;
        Start = new_node;
    }
    else{
        Node* temp= Start;
        --n;
        --n;
        while(n--) temp=temp->next;
        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next = new_node;
        new_node->next->prev = new_node;
    }
    display();
    displayReverse();
}

void dublin::pop(){
    if(isempty()) cout<<"List is empty Nothing to delete"<<endl;
    else if(count==1){
        Node*  temp=End;
        Start = NULL;
        End = NULL;
        delete(temp);
        --count;
    }
    else{
        Node* temp = End;
        temp->prev->next = NULL;
        End = temp->prev;
        delete(temp);
        --count;
    }
    display();
}

void dublin::remove(){
    if(isempty()){
        cout<<"List is empty NOthing to Delete"<<endl;
        return;
    }
    else{
        Node* temp=Start;
        if(count==1){
            Start=NULL;
            End=NULL;
        }
        else{
            temp->next->prev = temp->next;
            Start = temp->next;
        }
        delete(temp);
        --count;
        display();
    }
}

void dublin::remove(int n){
    if(isempty()){
        cout<<"List is empty NOthing to Delete"<<endl;
        return;
    }
    else if(n==count){
        pop();
    }
    else if(n==1){
        remove();
    }
    else{
        Node* temp=Start;
        if(count==1){
            Start=NULL;
            End=NULL;
        }
        else{
            --n;
            while(n--) temp=temp->next;
            temp->prev->next = temp->next;
            temp->next->prev = temp->prev;
        }
        delete(temp);
        --count;
        display();
    }
}

void dublin::change(int n,int data){
    if(n>count){
        cout<<"There are only "<<count<<" member in list"<<endl;
        return;
    }
    else{
        Node* temp= Start;
        --n;
        while(n--) temp=temp->next;
        temp->data = data;
    }
}

int main(){
    dublin d;
    d.display();
    int t=5;
    while(t--) d.insert();
    d.remove(3);
    // d.display();
    d.remove(1);
    d.remove(3);
    d.display();
}