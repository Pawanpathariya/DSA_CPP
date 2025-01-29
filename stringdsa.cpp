#include <iostream>
#include<string>
#include<algorithm>
#include <iterator>
using namespace std;

int main(){
// string s="hello";
// s="wello";
// cout<<s<<"\n";
// cout<<s[0]<<"\n";
// cout<<s.length()<<"\n";
// cout<<s.size()<<"\n";

// cout<<s.max_size()<<"\n";

string s="Pawan";
string k=s;
reverse(s.begin(),s.end());
if(s==k){
    cout<<"palindrome";
}   
else{
    cout<<"not palindrome";
}



}
