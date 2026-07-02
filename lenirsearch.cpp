#include <iostream>
using namespace std;

int leniersearch(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if (target==arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int target,n;
    cout<< "enter no. of value "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter value to be searched"<<endl;
    cin>>target;
    cout<<leniersearch(arr,n,target)<<endl;

    return 0;

}
