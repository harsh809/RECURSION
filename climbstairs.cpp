#include <iostream>
using namespace std;

int climbstairs(int n){
    if(n<0){
        return 0;
    }
    if( n == 0 ){
        return 1;
    }
    
    int ans = climbstairs(n-1) + climbstairs(n-2);
    return ans;
}
 
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int ans = climbstairs(n);
    cout<<ans<<endl<<endl;
    return 0;
}