#include "std_lib_facilities.h"



int main(){
	vector<double> temps;
	for(double temp;cin>>temp;)
		temps.push_back(temp);

double sum=0;
for(double x:temps) sum+=x;
cout<<"Average temperature: "<<sum/temps.size()<<'\n';

sort(temps);
cout<<"Media temperatute: "<<temps[temps.size()/2]<<'\n';

return 0;
}
