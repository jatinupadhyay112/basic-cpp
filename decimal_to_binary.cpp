#include <iostream>
using namespace std;

void decimal_to_binary(int n){
    int ans=0,m=1;
    while(n!=0){
        ans=ans+(n%2)*(m);
        n=n/2;
        m=m*10;
    }
    cout<<ans;
}

int main(){
    int n;
    cout<<"enter";
    cin>>n;
    decimal_to_binary(n);
    return 0;

}