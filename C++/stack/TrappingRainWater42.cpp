#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int trap(vector<int>& height) {
        int water =0;
        int n = height.size();

        stack<int>st;
        for(int i=0; i<n;i++){
            while(st.size() != 0 && height[st.top()] < height[i]){
                int h = height[st.top()];
                st.pop();
                if(st.size() == 0){
                    break;
                }
                int w = i-st.top()-1;
                water += (min(height[st.top()] , height[i]) - h)*w;
            }
            st.push(i);
        }
        return water;
}

int main(){
    vector<int>height ={0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<"Water can Store "<<trap(height)<<" Units";  // 6 units
}
