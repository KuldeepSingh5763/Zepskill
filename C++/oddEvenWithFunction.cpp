#include <iostream>
using namespace std;
int findOddEven(int num){
    if(num%2==0){
        cout<<"Number is Even";
    }
    else{
        cout<<"Number is Odd.";
    }
}

int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    findOddEven(n);

}
