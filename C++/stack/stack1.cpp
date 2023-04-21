#include<iostream>
#include<stack>
using namespace std;

void display(stack<int>st){
    while(!st.empty()){
        cout<<st.top() <<endl;
        st.pop();
    }
    return ;
}

int main(){
    // create Stack

    stack<int>st;

    st.push(3);  // To add element in top of Stack.
    st.push(6);
    st.push(1);
    st.push(0);
    st.pop();  // To Remove the Element from top of Stack.

    cout<<st.top()<<endl;  // Return the top most Element


    if(st.empty()){  // To check stack is empty then return True otherwise return False.
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not Empty"<<endl;
    }

    display(st);

}
