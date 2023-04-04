#include <iostream>
using namespace std;

int fact(int num){
    int f=1;
    int factorial=1;
    while(f<=num){
        factorial=factorial*f;
        f++;

    }
    cout<<"Factorial of "<<num<<" = " <<factorial;
    return 0;
}

int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    fact(n);
}
