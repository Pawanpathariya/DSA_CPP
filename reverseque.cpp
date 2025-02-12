#include<bits/stdc++.h>
using namespace std;
void rever(queue<int> q){
    stack<int>s;

    while(!q.empty()){
     s.push(q.front());
     q.pop();
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

int main(){
vector<int> v{1,2,3,4,5,6,7,8,9,10};
queue<int> q;

for(auto p:v){
q.push(p);
}


rever(q);
}