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

int main(){
    dublin d;
    d.display();
    int t=5;
    while(t--) d.push();
    d.display();
}