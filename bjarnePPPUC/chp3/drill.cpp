#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include"std_lib_facilities.h"

using namespace std;


int main(){
	string your_first_name;
	string to_first_name;
	cout<<"please enter your name\n";
	cin>>your_first_name;
	cout<<"Hello,"<<your_first_name<<"\n"<<"Enter the name of the person you want to write to\n";
	cin>>to_first_name;
	cout<<"Dear "<<to_first_name<<" ,"<<"\n\t"<<"How are you? I am fine. I miss you.\n";
	string friend_name;
	cout<<"please enter the name of your friend\n";
	cin>>friend_name;
	cout<<"Have you seen "<<friend_name<<" lately?\n";
	char friend_sex=0;
	cout<<"please enter m if the friend is male and an f i if the friend is female\n";
	cin>>friend_sex;
	if(friend_sex=='m')
		cout<<"if you see "<<friend_name<<" ,Please ask him to call me.\n";
	if(friend_sex=='f')
		cout<<"if you see "<<friend_name<<" ,please ask her to call me.\n";
	cout<<"please enter the age of recipient\n";
	int age;
	cin>>age;
	if(age<=0 || age >=110) simple_error("you're kidding!");	
	cout<<"I hear you just had a birthday and you are "<<age<<" years old.";
	if(age < 12) cout<<"Next year you will be "<<(age+1)<<'\n';
	if(age ==17) cout<<"Next year you will be able to vote\n";
	if(age>70) cout<<"I hope you are enjoying retirement\n";
	cout<<"\nYours sincerely\n";
return 0;
}
