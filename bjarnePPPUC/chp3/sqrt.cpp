#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>


using namespace std;


int main(){
	cout<<"Please enter a floating-point values:";
	double n;
	cin >> n;
	cout << "n==" <<n
	     << "\nn+1 == " << n+1
	     << "\nthree times n == " << 3*n
	     << "\ntwice n == " << n+n
	     << "\nhalf of n == " << n/2
	     << "\nsquare of n == "<<n*n
	     << "\nsquare root of n == "<<sqrt(n)
	     << '\n';
	return 0;
}
