#include <iostream>
using namespace std;

bool issorted(int arr[],int size){
    // base case
    if( size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool remainingpart = issorted(arr + 1,size - 1);
        return remainingpart;
    }
}

int main(){
    int arr[5] = {2,41,6,8,9};
    int size = 5;
    bool ans = issorted(arr,size);
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else
        cout<<"array is not sorted"<<endl;
    return 0;
}