#include<iostream>
using namespace std;
int bubble(int arr[],int l){
for(int i=0;i<l;i++){
    bool f=true;
    for(int j=0;j<l-i-1;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            f=false;
        }
    }
    if (f){
        break;
    }
}
}
int main(){
    //driver code
    int r;
    cout<<"Enter length of arr ";
    cin>>r;
    int arr[r];

    if(r>=0 && r<=20){
        for(int i=0;i<r;i++){
            cin>>arr[i];
        }
cout<<"Before sorting"<<endl;
        for(int i=0;i<r;i++){
    cout<<arr[i]<<" ";}
            bubble(arr,r);
    cout<<endl<<"After sorting"<<endl;
             for(int i=0;i<r;i++){
    cout<<arr[i]<<" ";}
    }
    else{
        cout<<"Invalid input";
    } 
}