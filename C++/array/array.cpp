#include <iostream>
using namespace std;
#include <array>

int main(){
    int arr[10];

    array<int,5>myarr{5,3,2,4,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter element of array :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        cout<<arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<myarr[i]<<" ";
    }


}
