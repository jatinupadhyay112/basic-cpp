#include <iostream>
using namespace std;

int is_prime(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<"not prime";
            return 0;
        }
    }
    cout<<"prime";
    return 0;
}

int main(){
    int n;
    cout<< "enter ";
    cin>>n;
    is_prime(n);
    return 0;
}