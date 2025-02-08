#include <iostream>
using namespace std;
#include<vector>
#include<forward_list>
void uni(vector<int> &v){
forward_list<int>f;
vector<int>vt;
for(int i=0;i<v.size();i++){
    f.push_front(v[i]);
}

f.sort();
f.unique();

for(auto p:f){
    cout<<p<<" ";
}


 for(auto it=f.begin();it!=f.end();it++){
vt.push_back(*it);
}


cout<<"\nvector\n";
for(auto p:vt){
    cout<<p<<" ";
}

}


int main(){
int n,data;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
cin>>data;
v.push_back(data);
}

uni(v);
}