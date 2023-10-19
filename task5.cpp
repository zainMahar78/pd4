#include<iostream>
using namespace std;
void position(int a,int b);
main(){
 cout <<"Enter your position: ";
	int a1;
	cin>>a1;
 cout <<"Enter your friend's position: ";
	int a2;
	cin>>a2;
	position(a1,a2);
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
