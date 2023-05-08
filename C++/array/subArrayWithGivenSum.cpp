#include<iostream>
#include<vector>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code
        vector<int>ans;
        int l=0,r=0,sum=arr[0];
        bool isFound = false;
        if(s==0){
            ans.push_back(-1);
            return ans;
        }

        while(r<n){
            if(sum==s){
                isFound = true;
                break;
            }
            else if(sum<s){
                r++;
                if(r<n){
                    sum+=arr[r];
                }
            }
            else{
                sum -= arr[l];
                l++;
            }
        }
        if(isFound){
            ans.push_back(l+1);
            ans.push_back(r+1);
            return ans;
        }
        else{
            ans.push_back(-1);
            return ans;
        }
    }

int main(){
    vector<int>arr={1,2,3,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    long long s=12;

    vector<int>ans = subarraySum(arr,n,s);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"  ";
    }


}
