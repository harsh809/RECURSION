#include <iostream>
using namespace std;

void say_digit(int n,string arr[]){
    if(n == 0){
        return;
    }
    int digit = n%10;
    n = n/10;
    say_digit(n,arr);
    cout<<arr[digit]<<" ";
}

int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl<<endl;
    say_digit(n,arr);
    cout<<endl<<endl;
    return 0;
}
