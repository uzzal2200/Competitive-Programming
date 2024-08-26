// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
    
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
        
//     }
//    sort(a,a+n,greater<int>() );
//    for(int c:a)
//    {
//     cout<<c<<" ";
//    }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int  n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    cout<<sum<<endl;
    return 0;
}
