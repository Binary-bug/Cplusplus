#include "std_lib_facilities.h"


vector<int> prime;

bool is_prime(int n){
	for(int p=0;p<prime.size();++p)
		if(n%prime[p]==0) return false;
	return true;
}





int main(){

	prime.push_back(2);
	for(int i=3;i<=1000;++i)
		if(is_prime(i))prime.push_back(i);
	cout<<"Primes: ";
	for(int p=0;p<prime.size();++p)
		cout<<prime[p]<<'\n';

return 0;
}
