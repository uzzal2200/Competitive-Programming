#include<bits/stdc++.h>
using namespace std;
class person
{
   public:
   string name;
   int age;
  void display_1()
   {
    cout<<"Name "<<name<<endl;
    cout<<"Age "<<age<<endl;
   }

   };
   class student : public person
   {
    public:
    double salary;
   void display_2()
   {
    cout<<"salary "<<salary<<endl;
    display_1();
   }

   };
  
int main()
{
    string name;
    cout<<"Enter name : ";
    cin>>name;
    int age;
    cout<<"Enter age : ";
    cin>>age;
    double salary;
    cout<<"Enter salary :";
    cin>>salary;

    student s1;
    s1.name = name;
    s1.age = age;
    s1.salary = salary ;
    s1.display_2();
    
    return 0;
}
