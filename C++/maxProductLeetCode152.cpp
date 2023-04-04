#include<iostream>
#include<vector>
using namespace std;
void maxProduct(vector<int>&arr,int n){
    int maxProd = INT_MIN;
    for(int i=0;i<n;i++){
            int prod =1;
        for(int j=i; j<n ; j++){
            prod *= arr[j];
            if(maxProd < prod){
                maxProd = prod;
            }
        }
    }
    cout<<maxProd;
}
int main(){
    int n;
    cout<<"Enter the of Array : ";
    cin>>n;
    vector<int>arr(n,0);
    cout<<"Enter the Element of array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i] <<"  ";
    }
    cout<<endl;

    maxProduct(arr , n);

}
