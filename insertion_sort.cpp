#include <iostream>
using namespace std;

void sort(int *arr,int n){
    if(n <= 1 ){
        return;
    }
    sort(arr,n-1);
    int last = arr[n-1];
    int j= n-2;
    while(j>=0 && arr[j]>last){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=last;
}
int main(){
    int arr[5] = {8,5,-1,6,9};
    sort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}