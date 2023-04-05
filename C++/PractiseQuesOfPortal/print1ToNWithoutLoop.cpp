#include<iostream>
using namespace std;
void printTillN(int N)
    {
        int i=1;
        l:  //  create Label with goto (jumping statement)
        if(i<=N){
            cout<<i<<" ";
            i++;
            goto l;
        }
    }
int main(){
    int number;
    cout<<"Enter any number :";
    cin>>number;
    printTillN(number);
}
