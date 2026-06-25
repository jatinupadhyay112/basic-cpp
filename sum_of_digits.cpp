#include <iostream>
using namespace std;
int sum (int n){
    int sum=0;
    while(n!=0){
        sum=(n%10)+sum;
        n=n/10;
    }
    return sum;
}
int main(){
        int n , su;
        cin>>n;
        su= sum(n);
        cout<<su;
    }