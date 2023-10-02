#include <iostream>
using namespace std;
void longest_duration(int h,int m);
main(){
	cout<<"Enter the number of hours: ";
	int h;
	cin>>h;
	cout<<"Enter the number of minutes: ";
	int m;
	cin>>m;
	longest_duration(m,h);
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