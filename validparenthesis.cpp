// 
#include<iostream>
#include<stack>
using namespace std;
 
bool valid(string s) { 
    stack<char> st;
    for (char c : s) {
        if (c == '[' || c == '{' || c == '(') {
            st.push(c);
        } else {
            if (st.empty() || (c == ']' && st.top() != '[') || (c == '}' && st.top() != '{') || (c == ')' && st.top() != '(')) {
                return false;
            }
            st.pop();
        }
    } 
    return st.empty();
}

int main() {
    string s = "[{}]";
    cout << (valid(s) ? "true" : "false");
}
