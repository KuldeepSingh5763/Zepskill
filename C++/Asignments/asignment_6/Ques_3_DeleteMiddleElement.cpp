#include<iostream>
#include<vector>
#include<stack>
using namespace std;

int deleteMid(stack<int>&s, int n)
    {
        // code here..
        stack<int>temp;
        int c=0;
        while(c<n/2){
            int a = s.top();
            s.pop();
            temp.push(a);
            c++;
        }
        int a=s.top();
        s.pop();

        while(!temp.empty()){
            s.push(temp.top());
            temp.pop();
        }
        return a;
    }


int main(){
        stack<int>arr;
        arr.push(4);
        arr.push(2);
        arr.push(46);
        arr.push(7);
        arr.push(9);
        arr.push(8);
        arr.push(4);
        arr.push(2);
        arr.push(46);
        arr.push(7);
        arr.push(9);
        arr.push(0);

        int n = arr.size();
        cout<<"Deleted Element is = "<<deleteMid(arr,n);
}
