#include<iostream>
#include<vector>
#include<tuple>
using namespace std;

int main(){
    vector<tuple<int,string,int>>v;
int n,rno,age;
string name;

cout<<"Enter how many records you want \n";
cin>>n;
for(int i=0;i<n;i++){
    cout<<"Enter roll no \n";
    cin>>rno;
    cout<<"Enter name \n";
    cin>>name;
    cout<<"Enter age \n";
    cin>>age;
    v.push_back({rno,name,age});
}
cout<<"\nResult \n";
for(auto p:v){
    cout<<get<0>(p)<<","<<get<1>(p)<<","<<get<2>(p)<<"\n";
}

}