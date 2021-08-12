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
        void totalMember();
        void displayReverse();
        void push();
        void insert();
        void insert(int n);
        void pop();
        void remove();
        void remove(int n);
        void change(int n,int data);
        void reverse();
        void peak(int n);
};


dublin::dublin(){
    cout<<"Doubly linkedlist created"<<endl;
}

void dublin::peak(int n){
    Node *temp = Start;
    int t=n;
    if(n>count) cout<<"wrong choice"<<endl;
    else{
        while(n--){
            temp = temp->next;
    }
    cout<<"Memer at "<<t<<" is "<<temp->data<<endl;
    }
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

void dublin::totalMember(){
    cout<<"Total Number in this list is "<<count<<"."<<endl;
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
    // displayReverse();
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

void dublin::reverse(){
    if(isempty()) cout<<"NOthing to reverse"<<endl;
    else{
        Node *temp = Start->next;
        temp->prev = temp->next;
        temp->next=NULL;
    while(temp->next !=NULL){
        swap(temp->prev,temp->next);
        temp = temp->next;
    }
    swap(Start,End);
    temp->next = temp->prev;
    temp->prev = Start;
    }
    display();
    cout<<"List has been reversed.";
}

int main(){
    dublin ad;
    while(true){
        cout<<"\n        ******* Doubly linked list **************\n\n";
        cout<<"Press 0 : exit program. \n Press 1 : total member in list \n Press 2 : to Display \n Press 3 : Append operation \n Press 4 : insert operation \n Press 5 : Pop Operation \n Press 6 : Remove Operation \n Press 7 : Change operation \n Press 8 : peak operation \n Press 9 : Reverse display list. \n Press 10 : Reverse list. "<<endl;
        int ch;
        cout<<"Enter you choice : ";
        cin>>ch;
        switch(ch){
            case 0: 
                cout<<"******* Thank you so much for using my program *********"<<endl;
                return 0;
            case 1: 
                ad.totalMember();
                break;
            case 2:
                ad.display();
                break;
            case 3:
                ad.push();
                break;
            case 4:
                ad.insert();
                break;
            case 5:
                ad.pop();
                break;
            case 6:
                ad.remove();
                break;
            case 7:
                int pos,data;
                cout<<"Enter positon and data : ";
                cin>>pos,data;
                ad.change(pos,data);
                break;
            case 8:
                int n;
                cout<<"Enter postion to peak : ";
                cin>>n;
                ad.peak(n);
                break;
            case 9:
                ad.displayReverse();
                break;
            case 10:
                ad.reverse();
                break;
            default :
                cout<<" YOu Enter wrong data. Press 0 to exit.."<<endl;
        }
}
 }
        // bool isempty();
        // void display();
        // void totalMember();
        // void displayReverse();
        // void push();
        // void insert();
        // void insert(int n);
        // void pop();
        // void remove();
        // void remove(int n);
        // void change(int n,int data);