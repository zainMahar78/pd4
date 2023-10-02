#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main(){
	int f1,f2,f3;
	cout<<"Red Rose: ";
	cin>>f1;
	cout<<"White Rose: ";
	cin>>f2;
	cout<<"Tulips: ";
	cin>>f3;
	flowerShop(f1,f2,f3);
}
void flowerShop(int redRose,int whiteRose,int tulip){
	float total_price;
	total_price=redRose*2.00+whiteRose*4.10+tulip*2.50;
	float discount;
	float p_a_d;
	if(total_price>200){
	discount=total_price*20/100;
	p_a_d=total_price-discount;
	cout<<"Original Price: $"<<total_price<<endl;
	cout<<"Price after Discount: $"<<p_a_d;
}
	if(total_price<=200){
	cout<<"Original Price: $"<<total_price<<endl;
	cout<<"No discount applied.";
}
}
