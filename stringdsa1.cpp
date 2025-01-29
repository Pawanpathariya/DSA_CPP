//for normal char array
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


//for string
/*#include<iostream>
using namespace std;
#include<string>

int main(){
string name;
cout<<"Enter name \n";
getline(cin,name);
cout<<"Name is : "<<name;

}*/


#include<iostream>
using namespace std;
#include<algorithm>
#include<string>

int main(){
// string name="Pawan";

// cout<<"\nName is : "<<name;

// name.push_back('a');
// cout<<"\nName is : "<<name;

// name.pop_back();
// cout<<"\nName is : "<<name;



// string name="Pawan";
// for(auto l:name){
//     cout<<l<<"\t";
// }

string name="pawan";
sort(name.begin(),name.end());
cout<<"\nName is : "<<name;
}