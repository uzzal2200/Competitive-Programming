#include<bits/stdc++.h>
using namespace std;
class Volume
{
    public:
    double volumeSphere(int radius)
    {
        return (4/3)*M_PI*pow(radius,3);
    }
    double volumeCube(int side)
    {
        return pow(side, 3);
    }
    double volumeCylinder(int radius,int height)
    {
        return M_PI*pow(radius,2)*height;
    }
};
int main()
{
    int radius,side,height;
    cout<<"Enter the radius of sphere : ";
    cin>>radius;
    cout<<"Enter the side of the length of cube : ";
    cin>>side;
    cout<<"Enter the height of the cylinder : ";
    cin>>height;
    Volume obj;
    cout<<"Voluem of the sephere "<<obj.volumeSphere(radius)<<endl;
    cout<<"Voluem of the cube "<<obj.volumeCube(side)<<endl;
    cout<<"Volume of the cylinder "<<obj.volumeCylinder(radius,height)<<endl;

    return 0;
}
