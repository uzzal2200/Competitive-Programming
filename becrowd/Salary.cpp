#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num,employment;
    float val;
    cin>>num>>employment>>val;
    double salary;
    salary= employment*val;
    cout<<"NUMBER = "<<num<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<salary<<endl;
    return 0;
}
