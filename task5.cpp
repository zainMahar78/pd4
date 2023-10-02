#include<iostream>
using namespace std;
void position(int a,int b);
main(){
 cout <<"Enter your position: ";
	int a;
	cin>>a;
 cout <<"Enter your friend's position: ";
	int b;
	cin>>b;
	position(a,b);
}
void position(int a,int b){
	int diff=b-a;
	if(diff<=6){
	cout<<"true";
}
if(diff>6){
	cout<<"false";
}
} 