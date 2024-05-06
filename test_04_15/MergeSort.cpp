#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
void MergeSort(int *arr,int l,int r){
    if(l>=r) return;
    int mid=(l+r)/2;
    int *tmp=arr;
    MergeSort(arr,l,mid);
    MergeSort(arr,mid+1,r);
    int p=0,pl=l,pr=mid+1;
    while(p<=mid||pr<=r){
        if(p>mid){
            tmp[p++]=arr[pr++];
        }
        else if(pr>r){
            tmp[p++]=arr[pl++];
        }
        else{
           if(arr[pl]>=arr[pr]){
            tmp[p++]=arr[pr++];
           }
           else tmp[p++]=arr[pl++];
        }
    }
    for(int i=0;i<r-l+1;i++){
        arr[l+i]=tmp[i];
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    MergeSort(arr,4,8);
    for(int i=0;i<9;i++){
        cout<<arr[i];
    }
}