#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height) {
        int water =0;
        int n = height.size();

        vector<int>left(n,0);
        vector<int>right(n,0);

        int preMax=0;
        for(int i=0; i<n; i++){
            left[i] = max(preMax,height[i]);
            preMax = left[i];
        }

        int nextMax=0;
        for(int i=n-1;i>=0;i--){
            right[i] = max(nextMax , height[i]);
            nextMax = right[i];
        }

        for(int i=0; i<n; i++){
            water += min(left[i], right[i]) - height[i];
        }
        return water;
}

int main(){
    vector<int>height ={4,2,0,3,2,5};
    cout<<"Water can Store "<<trap(height)<<" Units ";  // 9 units
}
