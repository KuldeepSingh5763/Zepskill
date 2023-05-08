#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int>a = {1,3,4,5};
vector<int>b = {2,4,6,8};
int m = a.size();
int n = b.size();
int i=0,j=0,k=0;
vector<int>ans(m+n);
while(i<m && j<n){
    if(a[i]<=b[j]){
        ans[k] = a[i];
        i++;
        k++;
    }
    else{
        ans[k]=b[j];
        j++;
        k++;
    }
}

while(i<m){
    ans[k] = a[i];
        i++;
        k++;
}

while(j<n){
    ans[k]=b[j];
        j++;
        k++;
}
    for (int ele : ans){
        cout<<ele<<" ";
    }


}
