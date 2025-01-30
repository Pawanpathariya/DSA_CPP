#include<iostream>
using namespace std;
#include <string>
#include<algorithm>
int main(){
string name="pawan";

//descending
sort(name.begin(),name.end(),greater<char>());
cout<<name;
}