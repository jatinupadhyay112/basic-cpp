#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int j;
	for(int i=1;i<=n;i++){
		for(j=1;j<i;j++){
			cout<<" ";
		}
	    for(int k=n-j;k>=0;k--){
	        cout<<i;
	        }
	    cout<<endl;
	    }
}