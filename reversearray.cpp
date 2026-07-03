#include <iostream>
using namespace std;

int reverse(int arr[],int n){
    int i=0,j=n-1,temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j]
        arr[j]=temp;
        i++;
        j--;
    }    
}

int main(){
    int arr[]={3,4,2,0,6,4};
    int n=6
    indexofminmaxarr(arr ,n);
    return 0;
}