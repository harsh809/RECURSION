#include <iostream>
using namespace std;

void sort(int *arr,int n){
    if(n == 0 ){
        return;
    }
    int maxindex = n-1;
    for(int i=maxindex-1;i>=0;i--){
        if(arr[maxindex]<arr[i]){
            maxindex = i; 
        }
    }
    swap(arr[n-1],arr[maxindex]);
    sort(arr,n-1);
}
int main(){
    int arr[5] = {8,5,1,6,9};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}