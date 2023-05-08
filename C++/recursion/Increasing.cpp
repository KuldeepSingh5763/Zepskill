#include<iostream>
using namespace std;

void increasing(int n){
    if(n==6)  return;
    cout<<n<<"   ";
    increasing(n+1);
}
// OR
void incres(int n){
    if(n==0) return;
    incres(n-1);
    cout<<n<<"   ";
}
void decInc(int n){
    if(n==0) return;
    cout<<n<<endl;
    decInc(n-1);
    cout<<n<<endl;
}
int main(){
    increasing(1);
    cout<<endl;
    incres(5);
    cout<<endl;
    decInc(5);
    return 0;
}

