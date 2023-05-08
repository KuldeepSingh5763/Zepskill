#include <iostream>
using namespace std;
    int findRange(int n){
    int maxRange=500;
    int minRange=100;

    if(minRange <= n <=maxRange){
        cout<<"Number is Present in Given Range 100 to 500.";
    }
    else{
        cout<<"Numer is not present in Given Range 100 to 500.";
    }
    }


int main(){
    int n;
    cout<<"Enter any number :";
    cin>>n;
    findRange(n);

}
