#include<iostream>
using namespace std;

int bubble(int arr[],int l){
for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
    int r;
    cout<<"Enter length of arr ";
    cin>>r;
    int arr[r];

    if(r>=0 && r<=20){
        for(int i=0;i<r;i++){
            cin>>arr[i];
        }
    }
    else{
        cout<<"Invalid input";
    }

    bubble(arr,r);
}