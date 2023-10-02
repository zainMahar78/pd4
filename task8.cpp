#include<iostream>
using namespace std;
void pet(int holiday);
main(){
	int holiday;
	cout<<"Holidays: ";
	cin>>holiday;
	pet(holiday);
}
void pet(int holiday){
	int wd,min,difference;
	wd=365-holiday;
	min=wd*63+holiday*127;
	difference=30000-min;
	if(difference>=0){
	cout<<"Tom sleeps well" <<endl;
	cout<<difference/60<<" hours and "<<difference%60<<" minutes less for play";
}
	if(difference<0){
	cout<<"Tom will run away" <<endl;
	cout<<difference/60<<" hours and "<<difference%60<<" minutes for play";
}
}