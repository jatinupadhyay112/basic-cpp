#include <iostream>
using namespace std;

int min_max_arr(int arr[]){
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<6;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout <<" max="<<max<<"\n min="<<min;
    return 0;
}

int main(){
    int arr[6]={3,4,2,0,6,4};
    min_max_arr(arr);
    return 0;
}