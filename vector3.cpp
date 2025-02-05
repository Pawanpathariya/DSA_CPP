#include<iostream>
using namespace std;
#include <vector>
int main(){
vector<pair<int,string>>v;
int n,rno;
string name;
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter roll no ";
cin>>rno;
cout<<"Enter name ";
cin>>name;

v.push_back({rno,name});
}

cout<<"\nResult \n";
for(auto p:v){
    cout<<p.first<<" "<<p.second<<"\n";
}

}