#include <bits/stdc++.h>

using namespace std;

void decode(){
	string s;
	cin >> s;
	int cnt=0;
	for(int i=0; i<s.size(); ++i){
		if(s[i]=='4')
			cnt++;
	}
	cout << cnt << "\n";
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--)
		decode();
	return 0;
}
