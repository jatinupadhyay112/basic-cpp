#include <iostream>
using namespace std;
#include <algorithm>

void distinctinarray(int arr[],int n){
    if(n==2 && arr[0]!=arr[1]){
        cout<<arr[0]<<","<<arr[1]<<endl;

        if (n == 2) {
    if (arr[0] != arr[1])
        cout << arr[0] << "," << arr[1];
    return;
}
        
    }
    else{
        if(arr[0]!=arr[1])
            cout<<arr[0]<<",";
        for(int i=1;i<n-1;i++){
            if(arr[i-1]!=arr[i] && arr[i+1]!=arr[i])
                cout<<arr[i]<<",";
            }
        if(arr[n-1]!=arr[n-2])
            cout<<arr[n-1]<<",";
    }
}

int main(){
    int arr[]={4,5,7,5,4,8,6,9,6,2,3,1,8,0,6,4};
    int n=size(arr);
    if(n == 1) {
        cout << arr[0] << endl;
        return 0;
    }
    sort (begin(arr), end(arr));
    distinctinarray(arr,n);
    return 0;
}