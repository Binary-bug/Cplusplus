#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>

using namespace std;



int main(){
	cout<<"please enter any three integers\n";
	int i1,i2,i3;
	cin>>i1>>i2>>i3;
	(i1<=i2)?((i1<=i3)?((i2<=i3)?(cout<<i1<<i2<<i3):(cout<<i1<<i3<<i2)):(cout<<i3<<i1<<i2)):((i2<=i3)?(cout<<i2<<i3<<i1):(cout<<i3<<i2<<i1));
	return 0;
}
