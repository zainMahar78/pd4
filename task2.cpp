#include<iostream>
using namespace std;
void zain(string valid);
main(){
	cout<<"Enter 'true' or 'false': ";
	string tf;
	cin>>tf;
	zain(tf);
}
void zain(string valid){
	if(valid=="true"){
	cout<<"false";
}
	if(valid!="true"){
	cout<<"true";
}
}