#include<bits/stdc++.h>
using namespace std;
class Sorting
{
    public:
    void acending(int n,int a[])
    {
        sort(a,a+n);

    }
    void decending(int n,int a[])
    {
        sort(a,a+n,greater<int>());
    }
    void print(int n,int a[])
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;

    }
};
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Sorting obj;
    obj.acending(n,a);
    obj.print(n,a);
    obj.decending(n,a);
    obj.print(n,a);
    return 0;
}
