#include <iostream>
using namespace std;

int factorial(int n){
    //base case
    if(n == 0){
        return 1;
    }
    return n*factorial(n-1);
}

int power(int n){
    // base case 
    if(n == 0){
        return 1;
    }
    return 2*power(n-1);
}

void print_count(int n){
    if(n == 0){
        return;
    }
    print_count(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    print_count(n);

    return 0;

}