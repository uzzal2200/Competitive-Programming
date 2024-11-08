#include<bits/stdc++.h>
using namespace std;
class GPA 
{
    public:
    void calculate()
    {
        int ban,eng,ict,math,phy,chem;
        cin>>ban>>eng>>ict>>math>>phy>>chem;
        float average,total,percentage;
        total = ban + eng + ict + math + phy + chem;
        average = total / 6;
        percentage = (total / 500) * 100;
        cout<<total<<endl;
        cout<<average<<endl;
        cout<<percentage<<endl;
        if(average >= 80 && average <= 100)
        {
            cout<<"Grade 5.00"<<endl;
        }
        else if(average < 80 && average >= 70)
        {
            cout<<"Grade 4.00"<<endl;
        }
        else if(average < 70 && average >= 60)
        {
            cout<<"Grade 3.50"<<endl;
        }
        else if(average < 60 && average >= 50)
        {
            cout<<"Grade 3.00"<<endl;
        }
        else if(average < 50 && average >= 40)
        {
            cout<<"Grade 2.50"<<endl;
        }
        else if(average <= 39 && average >= 33)
        {
            cout<<"Grade 2.00"<<endl;
        }
        else
        {
            cout<<"Grade 0.00"<<endl;
        }
    }
};
int main()
{
    GPA obj;
    obj.calculate();
    
    return 0;
}
