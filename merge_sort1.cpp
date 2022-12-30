#include <iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = s + (e-s)/2;
    int s2 = mid+1;
    if(arr[mid]<=arr[s2]){
        return;
    }
    while(s<=mid && s2<=e){
        if(arr[s]<=arr[s2]){
            s++;
        }
        else{
            int temp = arr[s2];
            for(int i = s2; i!=s;i--){
                arr[i] = arr[i-1];
            }
            arr[s] = temp;
            s++;
            mid++;
            s2++;        
        }
        
    } 
    
}
void mergesort(int *arr,int s,int e){
    // base case
    if(s>=e){
        return;
    }
    int mid = s + (e-s)/2;
    //right part
    mergesort(arr,s,mid);
    //left part
    mergesort(arr,mid+1,e);
    //merging
    merge(arr,s,e);
}

int main(){
    int arr[7] = {38,27,43,3,9,82,10};
    mergesort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}