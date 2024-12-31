#include<iostream>
using namespace std;
void selection(int arr[],int s){
for(int i=0;i<s;i++){
    int key=i;

    for(int j=key+1;j<s;j++){
        if(arr[key]>arr[j]){
            key=j;
        }
    }

    if(key!=i){
        int t=arr[key];
        arr[key]=arr[i];
        arr[i]=t;
    }
}
}

int main(){
int arr[]={4,23,1,5,6};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"Before sorting"<<endl;
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
selection(arr,s);
cout<<"\nAfter sorting"<<endl;
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
}