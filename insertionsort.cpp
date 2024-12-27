#include<iostream>
using namespace std;

void insrt(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=i;
        while ((key>0 && arr[key-1]>arr[key]))
        {
            int temp=arr[key-1];
            arr[key-1]=arr[key];
            arr[key]=temp;
            key--;
        }
    }
}
int main(){
int arr[]={3,1,4,2,6};
int s=sizeof(arr)/sizeof(arr[0]);
cout<<"Before sorting"<<endl;
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}
insrt(arr,s);
cout<<"\nAfter sorting"<<endl;
for(int i=0;i<s;i++){
cout<<arr[i]<<" ";
}


}