#include <iostream>
using namespace std;
void roll(int people,int tp);
main(){
	cout<<"Number of people in the household: ";
	int people;
	cin>>people;
	cout<<"Number of rolls in TP: ";
	int tp;
	cin>>tp;
	roll(people,tp);
}
void roll(int people, int tp){
 int tr,ru,days_can_be_used;
	tr=tp*500;
	ru=people*57;
	days_can_be_used=tr/ru;
if (days_can_be_used<14){
	cout<<"Your TP will last "<<days_can_be_used<<" days, buy more!";
}
if (days_can_be_used>=14){
	cout<<"Your TP will last "<<days_can_be_used<<" days, no need to panic!";
}
}