#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int Data;
    Node* Next;
};

Node* head=0;

int isempty(){
    if(head==0) return 1;
    return 0;
}

void PUSH(int data){
    Node* new_node = new Node();
    new_node->Data = data;
    if(isempty()) { head = new_node; new_node->Next = 0; }
    else new_node->Next = head; head = new_node;
    // cout<<head<<" "<<head->Data<<" "<<new_node->Data<<endl;
}

void PUSH(){
    int data;
    cout<<" Enter value to add in linkedlist : ";
    cin>>data;
    Node* new_node = new Node();
    new_node->Data = data;
    if(isempty()) { head = new_node; new_node->Next = 0; }
    else new_node->Next = head; head = new_node;
    // cout<<head<<" "<<head->Data<<" "<<new_node->Data<<endl;
}



int  Display(){
    if(head == 0) cout<<"\n Linkedlist is empty!"<<endl;
    else {
        Node* temp = head;
        while(temp != 0){
            cout<<temp->Data<<" ";
            temp = temp->Next;
        }
        cout<<temp->Data<<endl;
    }
    return 0;
}

void POP(){
    if(!isempty) cout<<"\n list is empty nothing to poped out!!";
    else{
        Node* temp = head;
        head = head->Next;
        cout<<temp<<" "<<head<<" "<<temp->Data<<" "<<head->Data<<endl;
        cout<<" Dat1 : "<<temp->Data<<" deleated.";
        // free(temp);
        delete(temp);
    }
}


int main(){
    // isempty();
    PUSH(9);
    PUSH(8);
    PUSH(7);
    PUSH(6);
    PUSH(5);
    PUSH(4);
    PUSH(3);
    PUSH(2);
    PUSH(1);
    // PUSH();
    POP();
    PUSH(1);
    PUSH();
    PUSH(3);
    cout<<head<<" ";
    cout<<"\nram "<<endl;
    Display();
    cout<<"\nram "<<endl;
    Display();
    return 0;
}