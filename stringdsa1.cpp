// #include<iostream>
// using namespace std;
// int main(){
// int n;
// cout<<"Enter size of string \n";
// cin>>n;
// cin.ignore();
// char s[n];
// cout<<"Enter string \n";
// cin.getline(s,n);
// cout<<"String is \n";
// cout<<s;
// }



#include<iostream>
using namespace std;
#include<string>

int main(){
string name;
cout<<"Enter name \n";
getline(cin,name);
cout<<"Name is : "<<name;

}