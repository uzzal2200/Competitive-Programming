#include<bits/stdc++.h>
using namespace std;
class Bankaccount
{
  public:
  string name;
  double primary_balance;
  Bankaccount(string name,double primary_balance)
  {
    this->name = name;
    this->primary_balance = primary_balance;
  }
  void Accoun_information()
  {
    cout<<"Account_information"<<endl;
    cout<<"Owners name : "<<name<<endl;
    cout<<"Primary_balance $ : "<<primary_balance<<endl;
  }
  void deposit(double amount)
  {
    if(amount > primary_balance)
    {
        cout<<"Insufficeient Balance please more $ depostit then you come t withdraw"<<endl;
    }
    else
    {
        primary_balance -= amount;
        cout<<"withdrea of "<<amount<<"$ sucessfully"<<endl;

    }
  }
  void update()
  {
    cout<<"Account_information after update"<<endl;
    cout<<"Owners name : "<<name<<endl;
    cout<<"Primary_balance $ : "<<primary_balance<<endl;
  }
};
int main()
{
    string name;
    cout<<"Enter name : ";
    cin>>name;
    double primary_balance;
    cout<<"Enter primary_balance : ";
    cin>>primary_balance;
    Bankaccount obj = Bankaccount(name, primary_balance);
    obj.Accoun_information();
   double amount;
   cout<<"Enter amount : ";
   cin>>amount;
   obj.deposit(amount);
   obj.update();

    return 0;
}
