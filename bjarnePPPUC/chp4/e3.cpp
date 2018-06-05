#include "std_lib_facilities.h"

int main(){
	vector<double> distance;
	for(int i=0;cin>>i;)
		distance.push_back(i);
	sort(distance);
	cout<<"Shortest disnace between two cities is "<<distance[0]<<'\n';
	cout<<"largest distance between two cities is "<<distance[distance.size()-1]<<'\n';
	if(distance.size()%2)cout<<"median distance is "<<distance[distance.size()/2]<<'\n';
	else cout<<"media distance is "<<(distance[distance.size()/2-1]+distance[distance.size()/2])/2<<'\n';
	double sum=0;
	for(int i=0;i<distance.size();++i)sum+=distance[i];
	return 0;
}
