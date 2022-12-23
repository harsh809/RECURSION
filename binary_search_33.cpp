#include <iostream>
using namespace std;

bool binarysearch(int arr[],int s,int e,int key){
    // base case
    if(s>e){
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid] == key){
        return true;
    }
    else if(arr[mid] > key){
        bool remaining = binarysearch(arr,s,mid-1,key);
        return remaining;
    }
    else{
        bool remaining = binarysearch(arr,mid+1,e,key);
        return remaining;
    }
}
int main(){
    int key;
    cout<<"enter value to search:";
    cin>>key;
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    bool ans = binarysearch(arr,0,size-1,key);
    if(ans){
        cout<<"present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    return 0;
}