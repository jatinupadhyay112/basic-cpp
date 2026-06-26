#include <iostream>
using namespace std;
int upto_prime (int n){
    int total=0;
    for (int i=2;i<=n;i++){
        int count=0;
        for(int j=1;j<=(i/2);j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==1){
            cout<<i<<",";
            total++;
        }
    }
    cout<<"\n Total prime nos. are "<<total;
    return 0;
}
int main(){
    int n;
    cin>>n;
    upto_prime(n);
    return 0;

}
