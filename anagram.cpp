#include<iostream>
using namespace std;

int main()
{
char c1[10]="silent";
char c2[10]="listen";
int s[26]={0};


for(int i=0;c1[i]!='\0';i++){
    s[c1[i]-'a']++;
}
for(int i=0;c2[i]!='\0';i++){
    s[c2[i]-'a']--;
}

int f=1;
for(int i=0;i<26;i++){
    if(s[i]!=0){
        f=0;
        break;
    }
}
if(f){
    cout<<"Anagram";
}
else{
    cout<<"Not anagram";
}

    
}