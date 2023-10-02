#include<iostream>
using namespace std;
void azza(string name ,float dollar);
main(){
	cout<<"Enter the country's name: ";
	string name;
	cin>>name;
	cout<<"Enter the ticket price in dollars: ";
	float dollar;
	cin>>dollar;
	azza(name,dollar);
}
void azza(string name , float dollar){
	float discount;
	float final;
	if(name=="Pakistan"){
	discount=dollar*5/100;
	final=dollar-discount;
cout<<"Final ticket price in dollars: "<<final;
}	if(name=="Ireland"){
	discount=dollar*10/100;
	final=dollar-discount;
cout<<"Final ticket price in dollars: "<<final;
}	if(name=="India"){
	discount=dollar*20/100;
	final=dollar-discount;
cout<<"Final ticket price in dollars: "<<final;
}	if(name=="England"){
	discount=dollar*30/100;
	final=dollar-discount;
cout<<"Final ticket price in dollars: "<<final;
}	if(name=="Canada"){
	discount=dollar*45/100;
	final=dollar-discount;
cout<<"Final ticket price in dollars: "<<final;
}
}