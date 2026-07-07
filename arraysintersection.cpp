#include <iostream>
using namespace std;

void arrayintersection (int ar1[],int ar2[],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ar1[i]==ar2[j]){
                cout<<ar1[i]<<',';
                break;
            }
        }
    }
}

int main(){
    int ar1[]={2,4,3,9,1};
    int ar2[]={1,3,5,6,8};
    int m=size(ar1);
    int n=size(ar2);
    arrayintersection(ar1,ar2,m,n);
    }