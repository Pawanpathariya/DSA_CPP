#include<iostream>
using namespace std;
#include<stack>
bool valid(string s){
    bool f=true;
stack<char>st;
for(int i=0;i<s.length();i++){
    if(s[i]=='[' || s[i]=='{' || s[i]=='('){
        st.push(s[i]);
    }
    else if(s[i]==']'){
if(!st.empty() && st.top()=='['){
st.pop();
}

else{
    f=false;
    break;
}
}
else if(s[i]=='}'){
    if(!st.empty() && st.top()=='{'){
    st.pop();
    }
    
    else{
        f=false;
        break;
    }
    }

    else if(s[i]==')'){
        if(!st.empty() && st.top()=='('){
        st.pop();
        }
        
        else{
            f=false;
            break;
        }
        }

    }

    if(!st.empty()){
        return false;
    }
}
int main(){

string s="[{]";
if(valid(s)){
cout<<"true";
}
else{
    cout<<"false";
}


}