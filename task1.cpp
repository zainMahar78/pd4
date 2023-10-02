#include <iostream>
using namespace std;
void xyz(int no1, int no2);
main(){
	int n1,n2;
	cout<<"Enter the first number: ";
	cin>>n1;
	cout<<"Enter the second number: ";
	cin>>n2;
	xyz(n1,n2);
}
void xyz(int no1, int no2){
	if(no1==no2){
	cout<<"true";
}
	if(no1!=no2){
cout<<"false";
}
}