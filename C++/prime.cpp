#include <iostream>
using namespace std;

int main(){

    int num,counter,i;

    cout<<"Enter any number : ";
    cin>>num;

    for(i=1;i<num;i++){

    if (num%i==0){
        counter++;
    }
    }
    if (counter == 1){
        cout<<"Number is Prime ";
    }else{
    cout<<"number is not Prime";
    }

}
