#include "std_lib_facilities.h"


int main(){
	vector<double> temp;
	for(int i=0;cin>>i;)
		temp.push_back(i);

	sort(temp);
	if(temp.size()%2) cout<<temp[temp.size()/2]<<'\n';
	else cout<<(temp[temp.size()/2]+temp[temp.size()/2-1])/2<<'\n';
	return 0;
}

