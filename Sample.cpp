#include<iostream>
using namespace std;
int findElement(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int delElement(int arr[],int n,int key){
    int pos=findElement(arr,n,key);
    if(pos==-1){
        cout<<"Element not found"<<endl;
        return n;
    }
    else{
        for(int i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
        return n-1;
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int elem;
    cout<<"Enter the elements you want to delete"<<endl;
    cin>>elem;
    int len1=delElement(arr,len,elem);
    for(int i=0;i<len1;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}