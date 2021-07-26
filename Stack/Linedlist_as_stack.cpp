#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

class Linkedlist_as_stack
{
Node* top = NULL;
int cont =0;
public:
    Linkedlist_as_stack(/* args */);
    bool is_empty();
    void push();
    void pop();
    void display();
    void total_element();
};

Linkedlist_as_stack :: Linkedlist_as_stack(){
    cout<<"Linkedlist as stack operation started "<<endl;
}

bool Linkedlist_as_stack :: is_empty(){
    if(top==NULL) return 1;
    else return 0;
}

void Linkedlist_as_stack :: push(){
    int data;
    Node* new_node = new Node();
    cout<<"Enter data to push in stack : ";
    cin>>data;
    cout<<endl;
    new_node->data = data;
    new_node->next = top;
    top = new_node;
    ++cont;
}

void Linkedlist_as_stack :: pop(){
    if(is_empty()){
        cout<<"Stack is empty i.e Underflow Nothing to delete"<<endl;
    }
    else{
        Node* temp = top;
        top = top->next;
        Node* check = temp;
        cout<<"Deleted element is : "<<check->data<<endl;
        free(temp);
        cout<<"Deleted element is : "<<check->data<<endl;
        --cont;
    }
}

void Linkedlist_as_stack ::display(){
    if(is_empty()){
        cout<<"Stack is empty i.e Underflow Nothing to display."<<endl;
    }
    else{
        Node* temp = top;
        int i=1;
        while(temp->next != NULL){
            cout<<i<<"th Element : "<<temp->data<<endl;
            temp = temp->next;
            ++i;
        }
        cout<<i<<"th Element : "<<temp->data<<endl;
    }
}

void Linkedlist_as_stack ::total_element(){
    cout<<"Total Element in stack is : "<<cont<<endl;
}


int main(){
    Linkedlist_as_stack ls;
    while(1){
        cout<<" \n\n **************** Linkedlist as Stack *********** \n\n Press 0. To exit \n Press 1. Push operation. \n Press 2. Pop Operation \n Press 3. Display operation. \n Press 4. Total element in stack. "<<endl;

        int choice;
        cout<<"Enter YOur Choice : ";
        cin>>choice;
        cout<<endl;
        if(choice==0) break;
        switch (choice)
        {
        case 1:
            cout<<" Your Choice is Push operation : "<<endl;
            ls.push();
            break;
        case 2:
            cout<<"YOur choice is pop operation : "<<endl;
            ls.pop();
            break;
        case 3:
            cout<<"YOur choice is Display operation : "<<endl;
            ls.display();
            break;
        case 4:
            cout<<"YOUr choice is total element : "<<endl;
            ls.total_element();
            break;
        default:
            cout<<"YOur enter wrong choice!!"<<endl;
            break;
        }
    }
    cout<<"\n ************* thank you so much for using this **************"<<endl;
    return 0;
}