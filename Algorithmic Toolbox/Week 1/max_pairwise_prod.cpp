#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int n;
	cin>>n;
	vector<long long int> v;
	for(int i=0;i<n;i++){
		long long int elem;
		cin>>elem;
		v.push_back(elem);
	}
	int large = 0;
	for(int i=1;i<v.size();i++){
		if(v.at(i) > v.at(large))
			large = i;
	}

	int sec_large;
	if(large == 0)
		sec_large = 1;
	else
		sec_large = 0;
	for(int i=sec_large+1; i<v.size();i++){
		if(v.at(i) > v.at(sec_large) && i!=large)
			sec_large = i;
	}

	cout<<v.at(large)*v.at(sec_large);


	return 0;
}