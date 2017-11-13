#include <stdio.h>
#include <iostream>

using std::cout;
using std::cin;

bool trocar(double & , double & );
bool trocar(int &, int &);
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    const int NITER = 5;
    int count = 0;
    cout<<" qual o valor de a ?";
    cin>>a;

    cout<<"qual o valor de b?";
    cin>>b;

    cout<<"qual o valor de c?";
    cin>>c;

    cout<<"qual o valor de d?";
    cin>>d;

    cout<<"qual o valor de e?";
    cin>>e;

    for(int i = 0; i < NITER - 1; i++)
    {
        if(trocar(a,b))
        
            count++;
        
       if(trocar(b,c))
       
            count++; 
       
       if(trocar(c,d))
       
            count++;     
       
       if(trocar(d,e))
       
           count++;
        
    }
    cout<<"o valor de a eh:"<<a;
    cout<<"o valor de b eh:"<<b;
    cout<<"o valor de c eh:"<<c;
    cout<<"o valor de d eh:"<<d;
    cout<<"o valor de e eh:"<<e;
    
    cout<<"o total de trocas eh:" <<cout<< '\n';
    
    return 0;
}

bool trocar( int & a, int & b )
{
    int temp;
    if(a>b)
    {
     temp = a;
     a = b;
     b= a;
    return true;
    }
    else
    return false;

}

bool trocar( double & a, double & b )
{
    double temp;
    if(a>b)
    {
        temp = a;
        a = b;
        b= a;
        return true;
    }
    else
    return false;
    
}
