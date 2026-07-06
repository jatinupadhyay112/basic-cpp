#include <iostream>
using namespace std;
#include <iterator>

void distinctinarray(int arr[],int n){
    if(n==1){
        cout<<arr[0]<<endl;
    }
    else if(n==2 && arr[0]!=arr[1]){
        cout<<arr[0]<<","<<arr[1]<<endl;
    }
    else{
        if()
        for(int i=1;i<n-1;i++){
            if(arr[i-1]==arr[i] || arr[i+1]==arr[i])
                continue;
            else if(arr[i-1]!=arr[i] && arr[i+1]!=arr[i])
                cout<<arr[i]<<",";
            }
    }
}

int main(){
    int arr[]={4,5,7,5,4,8,6,9,6,2,3,1,8,0,6,4};
    int n=size(arr);
    sort (begin(arr), end(arr));
    distinctinarray(arr,n);
    return 0;
}