 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int a,b;
     cin>>a>>b;
     int sum=a+b;
     cout<<sum<<endl;
     int sub=a-b;
     if(sub<0)
     {
        sub=sub*(-1);
     }
     cout<<sub<<endl;
  
     return 0;
 }
 