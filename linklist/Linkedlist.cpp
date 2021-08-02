#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
     int Data;
     Node* Next;
};

class Linkedlist
{
private:
   Node* front =NULL;
   int cont = 0;
public:
   Node* head=NULL;
    Linkedlist(/* args */);
    bool isempty();
    void display();
    void push(); // adding element at end
    void insert(); // adding element at start
    void insert(int n); // adding element at nth position
    void TotalMember(); // total membeer in list.
    void pop(); // removing element at end.
    void remove(); //removing element at start
    void remove(int n); // removing element at nth postiion.
    void change(int n,int data);
    void peak(int n);
    void displayReverse(Node* ptrtonode);
    void displayRecursive(Node* ptrtonode);
    void Reverse();
    void revereseRecurcive();
};

Linkedlist::Linkedlist(/* args */)
{
    cout<<"linklist created"<<endl;
}

bool Linkedlist::isempty(){
    if(head==0) return 1;
    return 0;
}

void Linkedlist::display(){
    if(isempty()) cout<<"List is empty."<<endl;
    else{
        Node* temp=head;
        cout<<"List is : ";
        while(temp!=NULL){
            cout<<temp->Data<<" ";
            temp = temp->Next;
        }
        cout<<endl;
    }
}

void Linkedlist::push(){
    Node* new_node = new Node();
    ++cont;
    cout<<"\nEnter data : ";
    int data;
    cin>>data;
    new_node->Data = data;
    new_node->Next = NULL;
    if(isempty()){
        head = new_node;
    }
    else{
        front->Next = new_node;
    }
    front = new_node;
    display();
}

void Linkedlist::insert(){
    Node* new_node = new Node();
    ++cont;
    cout<<"\nEnter data : ";
    int data;
    cin>>data;
    new_node->Data = data;
    if(isempty()){
        head = new_node;
        front = new_node;
        new_node->Next= NULL;
    }
    else{
        // Node* temp= head;
        new_node->Next = head;
        head = new_node;
    }
    display();
}

void Linkedlist::insert(int n){
    if(n>cont){
        cout<<"There are only "<<cont<<" member in list!!.";
        cout<<"\n YOur choice is wrong.."<<endl;
        display();
    }
    else if(n==cont) push();
    else if(n==0) insert();
    else{
        Node* current=head;
        Node* prev = current;
        --n;
        while(n--){
            prev = current; 
            current = current->Next;
        }
        Node* new_node = new Node();
        ++cont;
        cout<<"\nEnter data : ";
        int data;
        cin>>data;
        new_node->Data = data;
        prev->Next = new_node;
        new_node->Next = current;
        display();
    }
}

void Linkedlist::pop(){
    if(isempty()) cout<<"list is empty. Nothing to delete."<<endl;
    else if(front==head){
        front = NULL;
        delete(head);
        head = NULL;
        display();
    }
    else{
        // Method 1.

        // Node* current=head;
        // Node* prev = current;
        // while(current->Next != NULL){
        //     prev = current;
        //     current = current->Next;
        // }
        // front = prev;
        // front->Next = NULL;
        // delete(current);

        // Method 2.
        Node* temp = head;
        while(temp->Next->Next != NULL) temp=temp->Next;
        front = temp;
        front->Next =NULL;
        delete(temp->Next);
        display();
    }
}

void Linkedlist::remove(){
    if(isempty()) cout<<"list is empty. Nothing to delete."<<endl;
    else if(front==head){
        front = NULL;
        delete(head);
        head = NULL;
        display();
    }
    else{
        Node* temp=head;
        head=head->Next;
        delete(temp);
        display();
    }
}

void Linkedlist::remove(int n){
    if(n>cont or n<1) cout<<"There are only "<<cont<<" member in list"<<endl;
    else if(n==cont) pop();
    else if(n==1){
        remove();
    }
    else{
        --n;
        --n;
        Node* temp=head;
        while(n--) temp=temp->Next;
        Node* prev = temp;
        temp= temp->Next;
        prev->Next = temp->Next;
        delete(temp);
        display();
    }
}

void Linkedlist::change(int n,int data){
    if(n>cont) cout<<"There is only "<<cont<<" member in the list!"<<endl;
    else{
        Node* temp=head;
        --n;
        while(n--){
            temp=temp->Next;
        }
        temp->Data=data;
        display();
    }
}

void Linkedlist::peak(int n){
    if(n>cont) cout<<"There is only "<<cont<<" member in the list!"<<endl;
    else{
        Node* temp=head;
        --n;
        while(n--){
            temp=temp->Next;
        }
        cout<<"Member at "<<n<<"th postion is "<<temp->Data<<endl;
    }
}

void Linkedlist::displayReverse(Node* ptrtonode){
   if(ptrtonode==NULL) return;
   displayReverse(ptrtonode->Next);
   cout<<ptrtonode->Data<<" ";
}

void Linkedlist::displayRecursive(Node* ptrtonode){
   if(ptrtonode==NULL) return;
   cout<<ptrtonode->Data<<" ";
   displayReverse(ptrtonode->Next);
}

void Linkedlist::Reverse(){
    Node* temp = head->Next;
    head->Next = NULL;
    front=head;
    while(temp->Next != NULL){
        Node* temp2=temp->Next;
        temp->Next = head;
        head=temp;
        temp = temp2;
    }
    temp->Next = head;
    head=temp;
    display();
}

void Linkedlist::TotalMember(){
    cout<<"Total Member in list is : "<<cont<<endl;
}

int main(){
  Linkedlist ld;
  int t=4;
  while(t--){
      ld.push(); 
  }
//   t=3;
//   while(t--){
//       ld.insert();
//   } 
    ld.displayRecursive(ld.head);
}