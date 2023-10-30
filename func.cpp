#include <iostream>
using namespace std;
class Employee {
public:
  string name;
  int age;
  float salary;
  void input() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
  }
  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Salary: " << salary << endl;
  }
};
int main() {
  Employee employee[5];
  for (int i = 0; i < 5; i++) {
    employee[i].input();
  }
  for (int i = 0; i < 5; i++) {
    employee[i].display();
  }
  return 0;
}
