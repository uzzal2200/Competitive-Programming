#include<bits/stdc++.h>
using namespace std;

// Base class
class Student {
    public:
     string name;
    int roll;
   
    float marks;

public:
    void input() {
        
      // To consume the newline character after roll number input
        cout << "Enter Name: ";
        cin>>name;
        cout << "Enter Roll Number: ";
        cin >> roll;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
         cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
       
        cout << "Marks: " << marks << endl;
    }
};

// Derived class
class Grade : public Student {
public:
    char calculateGrade() {
        if (marks >= 80) {
            return 'A';
        } else if (marks >= 75) {
            return 'A';
        } else {
            return 'F';
        }
    }

    void displayGrade() {
        display();
        cout << "Grade: " << calculateGrade() << endl;
    }
};

int main() {
    Grade student;
    student.input();
    student.displayGrade();
    return 0;
}
