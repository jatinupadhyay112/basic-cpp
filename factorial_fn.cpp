#include <iostream>
using namespace std;
int fact (int n){
    int fact=1;
    for(int i =1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
        int n , fa;
        cout<<"enter value";
        cin>>n;
        fa= fact(n);
        cout<<fa;
        
    }