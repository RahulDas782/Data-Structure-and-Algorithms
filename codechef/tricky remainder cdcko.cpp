#include <iostream>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		ll a,b,c,ans;
		cin>>a>>b>>c;
		ans=((c-b)/a)*a +b;
		cout<<ans<<endl;
	}
}