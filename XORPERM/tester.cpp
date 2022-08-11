#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
int n;
void solve(){
	cin >> n;
	if(n==3){
		cout << "-1\n";return;
	}
	cout << 2 << ' ';
	for(int i=n; i>=1 ;i--){
		if(i!=2) cout << i << ' ';
	}
	cout << '\n';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t;cin >> t;while(t--) solve();
}