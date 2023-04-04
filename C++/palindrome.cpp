#include <iostream>
using namespace std;

int main(){

    int num,dig,sum=0;
    cout<<"Enter any number : ";
    cin>>num;
    int temp=num;

    while (num>0)
    {
        dig = num%10;
        sum=sum*10+dig;
        num/=10;
    }
    if (temp==sum){
        cout<<"The number is palindrome";
    }
    else{
        cout<<"The number is not palindrome";
    }
    return 0;

}
