#include <iostream>
using namespace std;
int main()
{
	int n;
    int a=1;
	cin>>n;
	int j;
	for(int i=1;i<=n;i++){
		for(j=n-i;j>0;j--){
			cout<<" ";
		}
	    cout<<a*a;
        a=(a*10)+1;
	    cout<<endl;
	    }
}