void arrayintersection (int ar1[],int ar2[],int m,int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ar1[i]==ar2[j]){
                cout<<arr[i]<<',';
                break;
            }
        }
    }
}