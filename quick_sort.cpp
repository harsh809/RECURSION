#include <iostream>
using namespace std;

int partition(int* arr ,int s,int e){
    int pivot = arr[s];
    int count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotindex = s+count;
    swap(arr[pivotindex],arr[s]);
    int i = s;
    int j = e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);    
        }
    }
    return pivotindex;
}
void quick_sort(int* arr,int s,int e){
    // base case
    if(s>=e){
        return ;
    }
    int p = partition(arr,s,e);
    // left part
    quick_sort(arr,s,p-1);
    // right part
    quick_sort(arr,p+1,e);
}

int main(){
    int arr[7] = {38,27,43,3,9,82,10};
    int n = 7;
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}