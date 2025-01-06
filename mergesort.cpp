#include<iostream>
using namespace std;
void merges(int arr[],int l,int m,int h){
    int i,j,k,B[h+1];
    i=l;
    j=m+1;
    k=l;
    while(i<=m && j<=h){
        if(arr[i]<arr[j]){
            B[k]=arr[i];
            i++;
            k++;
        }
        else{
            B[k]=arr[j];
            j++;
            k++;
        }
    }
    while(i<=m){
        B[k]=arr[i];
        i++;
        k++;
    }
    while(j<=h){
        B[k]=arr[j];
        j++;
        k++;
    }
    for(i=l;i<=h;i++){
        arr[i]=B[i];
    }

}


void divide(int arr[],int l,int h){
    int m;
    if(l<h){
        m=(l+h)/2;
        divide(arr,l,m);
        divide(arr,m+1,h);
        merges(arr,l,m,h);
    }
}

int main() {
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting "<<endl;
    for (int i=0;i<n;i++){
    cout<<arr[i]<< " ";
    }
divide(arr,0,n-1);

    cout<<"\nAfter sorting "<<endl;
    for (int i=0;i<n;i++){
    cout<<arr[i]<< " ";
    }
}