#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,c,D;
    cout<<"enter the coeff of x of the quad eqn"<<endl;
    cin>>a>>b>>c;
    D=(b*b)-(4*a*c);
    int root1,root2;
    if(D>=0)
    {
        root1=(-b+sqrt(D))/(2*a);
        root2=(-b-sqrt(D))/(2*a);
        cout<<"first root is "<<root1<<endl;
        cout<<"second root is "<<root2<<endl;        
    }
    else
    {
        cout<<"it has imaginary roots"<<endl;
    }
    return 0;
}