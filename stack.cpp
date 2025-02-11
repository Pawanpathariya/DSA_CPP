#include<iostream>
using namespace std;
#include<stack>
int main(){ 
// stack<int>s;
// s.push(1);
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);
// cout<<s.top();
// s.pop();
// cout<<"\nstack is empty or not "<<s.empty();

//it has four function push(),pop(),top(),empty()

stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
while (!st.empty()){
cout<<st.top()<<" ";
st.pop();
}
}