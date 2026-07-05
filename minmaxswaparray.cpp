#include <iostream>
using namespace std;

void minmaxswaparray(int arr[],int n){
    int min=arr[0],max=arr[0],i1=0,i2=0;
    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
            i1=i;
        }
        if(max<arr[i]){
            max=arr[i];
            i2=i;
        }
    }
    int temp=arr[i1];
    arr[i1]=arr[i2];
    arr[i2]=temp;
}

int main(){
    int arr[]={3,4,2,0,6,4};
    int n=6;
    minmaxswaparray(arr ,n);
    for(int x :arr){
        cout<<x<<endl;
    }
 
    return 0;
}