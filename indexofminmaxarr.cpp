#include <iostream>
using namespace std;

int indexofminmaxarr(int arr[]){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(min>arr[i]){
            min=i;
        }
        if(max<arr[i]){
            max=i;
        }
    }
    cout <<" max="<<max<<"\n min="<<min;
    return 0;
}

int main(){
    int arr[6]={3,4,2,0,6,4};
    indexofminmaxarr(arr);
    return 0;
}