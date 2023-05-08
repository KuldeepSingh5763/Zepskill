#include<iostream>
using namespace std;

void recursive(int n){
    if(n==0){
        return;
    }
    cout<<n<<"   ";
    recursive(n-1);

}
int main(){

    recursive(5);
    return 0;
}
