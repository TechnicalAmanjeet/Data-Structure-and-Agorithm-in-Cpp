#include <bits/stdc++.h>
using namespace std;

struct node
{
  int data;
  node *next;
};

node *head;

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

int main()
{
  node fst, snd;
  create_node(&fst);
  create_node(&snd);
  cout<<fst.data<<" "<<fst.next<<endl;
  cout<<snd.data<<" "<<snd.next;
  showdata();
  return 0;
}