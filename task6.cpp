#include <iostream>
using namespace std;
void longest_duration(int h,int m);
main(){
	cout<<"Enter the number of hours: ";
	int h1;
	cin>>h1;
	cout<<"Enter the number of minutes: ";
	int m1;
	cin>>m1;
	longest_duration(m1,h1);
}
void longest_duration(int m, int h){
	float h_in_minutes;
	h_in_minutes=h*60;
	if(h_in_minutes>m){
	cout<<h;
}	if(h_in_minutes<=m){
	cout<<m;
}
}
