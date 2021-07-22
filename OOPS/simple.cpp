#include <bits/stdc++.h>
using namespace std;

class school
{
private:
public:
  string name;
  int total_teacher, total_student;
  void setdata();
  void display();
};

void school ::display()
{
  cout << endl;
  cout << "Your school name is : " << name << endl;
  cout << "Total No of Teacher in " << name << " is : " << total_teacher << endl;
  cout << "Total no. of student in " << name << " is : " << total_student << endl;
  cout << "\n Thank you show much for calling me!!" << endl;
}

void school ::setdata()
{
  cout << "Enter Your school name : ";
  getline(cin, name);
  // cin>>name;
  cout << "Enter Total student no. : ";
  cin >> total_student;
  cout << "Enter Total Teacher no : ";
  cin >> total_teacher;
  cin.ignore();
  
}

int main()
{
  school salrpur;
  salrpur.setdata();
  salrpur.display();
  school amarpur;
  amarpur.setdata();
  amarpur.display();

  return 0;
}