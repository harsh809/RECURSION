#include <iostream>
using namespace std;
void merge(int *arr,int s,int e){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int [len2];

    int mainarrayindex = s;
    for(int i=0;i<len1;i++){
        first[i] = arr[mainarrayindex++];
    }
    for(int i=0;i<len2;i++){
        second[i] = arr[mainarrayindex++];
    }
    int index1 = 0;
    int index2 = 0;
    mainarrayindex = s;
    while(index1<len1 && index2<len2){
        if(first[index1]>second[index2]){
            arr[mainarrayindex++]=second[index2++];
        }
        else{
            arr[mainarrayindex++]=first[index1++];
        }
    }
    while(index1<len1){
        arr[mainarrayindex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainarrayindex++] = second[index2++];
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
    int arr[19] = {2,5,1,6,9,23,4554,64,8,3,0,10,34,78,23,1,45,43,0};
    mergesort(arr,0,18);
    for(int i=0;i<19;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}