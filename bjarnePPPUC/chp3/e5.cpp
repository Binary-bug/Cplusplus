#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>


using namespace std;


int main(){
	double val1,val2;
	cin>>val1;
	cin>>val2;
	cout<<"sum of the variables is "<<(val1+val2)<<"\ndifference of the variables is "<<((val1<=val2)?(val2-val1):(val1-val2))<<"\nsmaller of these variables is "<<((val1<=val2)?val1:val2)
		<<"\nlarger of these variables is "<<((val1<=val2)?val2:val1)<<"\nproduct of the two vriables is "<<(val1*val2)<<"\nratio of the two is "<<(val1/val2);
	return 0;
}
