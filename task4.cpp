#include<iostream>
using namespace std;
void checkSpeed(int speed);
main(){
	cout<<"Speed: ";
	float v;
	cin>>v;
	checkSpeed(v);
}
void checkSpeed(int speed){
	if(speed<=100){
	cout<<"Perfect! You're going good.";
}	if(speed>100){
	cout<<"Halt... YOU WILL BE CHALLENGED.";
}
}