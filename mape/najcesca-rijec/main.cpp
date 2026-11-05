#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main(){
	int n;
	string s;
	int max = 0;
	map<string, int>m;
	vector<string>v;
	
	cin >> n;
	
	while(n < 0){
		cin >> n;
	}
	
	for(int i = 0; i<n; i++){
		cin >> s;
		s[0] = tolower(s[0]);
		m[s]++;
	}
	
	for(auto p : m){
		if(p.second > max){
		max = p.second;		
		}
	}
	
	for(auto p : m){
		if(p.second == max) cout << p.first << " " << p.second << endl;
		if(p.second == 1) v.push_back(p.first);
	}
	
	for(auto s : v) cout << s << endl;
	
}
