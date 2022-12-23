#include <iostream>
using namespace std;

int sum(int arr[],int size){
    // base case
    if(size == 1){
        return arr[0];
    }
    return arr[0]+sum(arr+1,size-1);
}
int main(){
    int arr[5]={1,1,1,1,1};
    int size = 5;
    int ans = sum(arr,size);
    cout<<ans<<endl;
    return 0;
}