#include<iostream>
#include<cmath>
using namespace std;

int power(int a, int b)
{
    if(b==0) return 1;
    int po = power(a,b-1);
    return a*po;
}

int main(){
    int a,b;
    cout<<"Enter any number  = ";
    cin>>a>>b;
    cout<<power(a,b);
}
