#include <iostream>
using namespace std;

int main(){

    int num,dig;
    int sum=0;
    cout<<"Enter any number : ";
    cin>>num;

    while (num>0)
    {
        dig = num%10;
        sum=sum*10+dig;
        num/=10;
    }
    cout<<"Reversed number is = "<<sum;
    return 0;

}
