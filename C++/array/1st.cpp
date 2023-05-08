#include <iostream>
using namespace std;

int main(){

    int divisor,devidend;
    cout<<"Please enter your divisor : ";
    cin>>divisor;
    cout<<"Please enter your devidend : ";
    cin>>devidend;

    int quotient = devidend / divisor ;
    int remainder = devidend % divisor ;

    cout<<"My Remainder is = "<<remainder<<endl;
    cout<<"My Quotient is = "<<quotient;

}
