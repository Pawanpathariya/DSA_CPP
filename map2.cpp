// #include<iostream>
// using namespace std;
// #include<map>
// int main(){
// map<string,int>m;
// int n,mob;
// string name;
// cout<<"enter how many records you want to enter ";
// cin>>n;
// for(int i=0;i<n;i++){
// cout<<"Enter name ";
// cin>>name;
// cout<<"Enter number ";
// cin>>mob;

// m.insert({name,mob});
// }


// cout<<"result \n";
// for(auto p:m){
//     cout<<p.first<<" "<<p.second<<endl;
// }
// //searching code
// string s;
// cout<<"Enter name to search ";
// cin>>s;

// if(m.find(s)!=m.end()){
//   cout<<m[s];
// }
// else{
//     cout<<"not found";  }

// }



#include<iostream>
using namespace std;
#include<map>
#include<vector>
int main(){
map<string,vector<int>>mp;
// mp["pawan"].push_back(1234);
// mp["pawan"].push_back(2345);
// mp["pawan"].push_back(3456);
// mp["sumit"].push_back(4567);
// mp["sumit"].push_back(5698);
// mp["Rahul"].push_back(6789);


int n,mob;
string name;
cout<<"Enter how many records you want to enter ";
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter name ";
cin>>name;
int t;
cout<<"Enter how many numbers you want to enter ";
cin>>t;
for(int j=0;j<t;j++){
cout<<"Enter number ";
cin>>mob;
mp[name].push_back(mob);
}
}
for(auto p:mp){
    cout<<p.first<<" ";
    for(auto q:p.second){
        cout<<q<<" ";
    }
    cout<<endl;
}
}