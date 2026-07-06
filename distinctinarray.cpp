#include <iostream>
using namespace std;
#include <iterator>

void distinctinarray(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                break;
            }
        }
        if(j==n){
            cout<<arr[i]<<',';
        }
    }

}

int main(){
    int arr[]={4,5,7,5,4,8,6,9,6,2,3,1,8,0,6,4};
    int n=size(arr);
    distinctinarray(arr,n);
    return 0;
}