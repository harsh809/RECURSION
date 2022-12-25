#include <iostream>
using namespace std;

bool linear(int arr[],int size,int key){
    if( size == 0){
        return false;
    }
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingpart = linear(arr + 1,size - 1,key);
        return remainingpart;
    }
}
int main(){
    int key;
    cout<<"enter value to search:";
    cin>>key;
    int arr[5] = {1,2,3,41,5};
    int size = 5;
    bool ans = linear(arr,size,key);
    if(ans){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}