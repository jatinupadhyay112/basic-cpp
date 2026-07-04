#include <iostream>
using namespace std;

// prints the sum and product of all the elements in the array

pair<int,int> sum_pro(int arr[],int n){
    int sum=0,pro=1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        pro=pro*arr[i];
    }
    return{sum,pro};

}

int main(){
    int arr[]={3,4,2,0,6,4};
    int n=6;
    pair<int,int> ans=sum_pro(arr ,n);
    cout<<"sum is:  "<<ans.first<<endl;
    cout<<"product is:  "<<ans.second<<endl;
    return 0;
}