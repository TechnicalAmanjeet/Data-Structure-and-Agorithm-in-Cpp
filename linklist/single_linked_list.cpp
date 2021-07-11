#include <bits/stdc++.h>
using namespace std;

// ******* (start)  initializing new data type node ******
struct node
{
  int data;
  node *next;
};
// ******* (ends) initializing new data type node  ******

node *head; // initializing head pinter of linkedlist

// ****** (start) ( PUSH OPERATION ) fuction for adding node at the end of linkedlist (strt here) *********

void create_node(node *ptr)
{
  int data;
  // cout<<" Enter a data : ";
  cin >> data;
  ptr->data = data;

  node *temp = head;

  if (head == 0)
  {
    head = ptr;
  }
  else
  {
    while (temp->next != 0)
    {
      temp = temp->next;
    }
    temp->next = ptr;
  }
  ptr->next = 0;
}

void create_node_at_start(node *ptr)
{
  node *temp = ptr;
  int data;
  cin >> data;
  ptr->data = data;

  if (head == 0)
  {
    head = ptr;
    head->next = 0;
  }
  else
  {
    ptr->next = head;
    head = ptr;
  }
}

void create_node_after_value(node *ptr, int value)
{
  node *current = head;
  node *previous = head;
  // cout<<current<<" "<<previous<<endl;
  int data_to_insert;
  cin >> data_to_insert;
  ptr->data = data_to_insert;
  // cout<<->data<<endl;

  // cout<<previous->data<<" ";
  if (head == 0)
  {
    cout << " no node is there so creating at the start. ";
    head = ptr;
    head->next = 0;
  }
  else
  {
    while (current->data != value)
    {
      previous = current;
      current = current->next;
    }
    previous = current;
    current = current->next;
    previous->next = ptr;
    ptr->next = current;
  }
  // cout<<"end "<<endl;
}

void create_node_after_times(node *ptr, int value)
{
  int i = 1;
  node *current = head;
  node *previous = head;
  // cout<<current<<" "<<previous<<endl;
  int data_to_insert;
  cin >> data_to_insert;
  ptr->data = data_to_insert;

  if (head == 0)
  {
    head = ptr;
    head->next = 0;
  }
  else if (value == 0)
  {
    ptr->next = head;
    head = ptr;
  }
  else
  {
    while ((current->next != 0) && i != value)
    {
      previous = current;
      current = current->next;
      ++i;
    }
    if (current->next == 0 && i != value)
    {
      cout << "There is only " << i << " element in list.." << endl;
      current->next = ptr;
      ptr->next = 0;
    }
    else
    {
      previous = current;
      current = current->next;
      previous->next = ptr;
      ptr->next = current;
    }
  }
}

// ****** (end) fuction for adding node at the end of linkedlist (ends here) *********

// ********* (start) fuction for showing all the data in linkedlist.(strt here ) *******

void showdata()
{
  node *temp = head;
  if (head == 0)
  {
    cout << "\n linked list is empty..";
    return;
  }
  while (temp->next != 0)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << temp->data;
}

// ********* (ends) fuction for showing all the data in linkedlist. ends here *******

// ********** (start) execution of program starts here *********

int main()
{
  node fst, snd, trd, fth, fifth, sth, seth;
  create_node(&fst);
  create_node(&snd);
  create_node(&trd);
  create_node(&fth);
  create_node(&fifth);
  create_node(&sth);
  showdata();
  cout << endl;
  create_node_after_times(&seth, 6);
  // cout<<fst.data<<" "<<fst.next<<endl;
  // cout<<snd.data<<" "<<snd.next;
  showdata();
  return 0;
}