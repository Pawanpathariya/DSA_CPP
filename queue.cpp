#include<iostream>
using namespace std;
#include <queue>
//#include<bits/stdc++.h>  //library
int main(){
    //Queue: it follow fifo (first in first out ) approach 
    //insert happend from rear side push(),  and delete from front side pop()
    //it has four function push(),pop(),front(),empty()
queue<int> q;
q.push(1);
q.push(2);
q.push(3);
q.push(4);
q.push(5);



while(!q.empty()){
    cout<<q.front()<<" ";
    q.pop();
}
}