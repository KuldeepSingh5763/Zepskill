#include<iostream>
#include<array>

using namespace std;

void rearrange(long long *arr, int n)
    {
        int j = n-1;
        int i= 0;
        int max1 = arr[n-1] + 1;
        for(int idx = 0; idx<n; idx++){
            if(idx%2 == 0){
                arr[idx] = (arr[idx] + (arr[j] % max1) * max1);
                j--;
            }
            else{
                arr[idx] = (arr[idx] + (arr[i] % max1) * max1);
                i++;
            }
        }
        for(int idx=0;idx<n;idx++){
            arr[idx]=arr[idx]/max1;
            cout<<arr[idx]<<"    ";
        }
    }
    int main(){
        long long arr[] = {1,2,3,4,5,6};
        int n = sizeof(arr)/sizeof(arr[0]);
        rearrange(arr,n);



    }
