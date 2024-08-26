// #include<bits/stdc++.h>
// using namespace std;
// int find(int x,int y,int a[],int n)
// {
//     if(x>y) return 1;
//     int ans=pow(a[x],find(x+1,y,a,n));
//     return ans;
  
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n+1];
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];
//     }
//     int q;
//     cin>>q;
    
//     for(int i=0;i<q;i++)
//     {
//         int x,y;
//         cin>>x>>y;
//         int result=find(x,y,a,n);
//         if(result%2 == 0)
//         {
//             cout<<"Even"<<endl;
//         }
//         else
//         {
//             cout<<"Odd"<<endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n];
    for (int i=1;i<=n;i++) {
        cin>>A[i];
    }
  
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int x,y;cin>>x>>y;
        if (A[x + 1] == 0&&x<y){
            cout << "Odd" << endl;
        }
        else{
            if(A[x]%2==0){
                cout<<"Even"<<endl;
            }
            else{
            
                cout<<"Odd"<<endl;
            }
        }
    }
    return 0;
}