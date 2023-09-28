#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m; cin >> n >>m;
	int a[n], b[m];
	map<int,int> mpA, mpB;
	for(int i = 0; i< n; i++){
		cin >> a[i];
		mpA[a[i]]++;
	}
	for(int i = 0; i< m; i++){
		cin >> b[i];
		mpB[b[i]]++;
	}
	int dem = 0;
	for(auto it : mpA){
		auto it1 = mpB.find(it.first);{
			if(it1 != mpB.end()){
				dem += (*it1).second * it.second;
			}
		}
	}
	cout << dem << endl;
}
	
