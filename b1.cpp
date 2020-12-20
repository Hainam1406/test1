#include <iostream>
using namespace std;
int n; 

// Nhap n
void nhap(){
	do{
		cout<<"\n + Nhap n: "; cin>>n;
		if(n<111||n>888)
		cout<<"\n Nhap lai n! ";
		}while(n<111||n>888);
}
// In so le nho hon n
void In(){
	cout<<"\n + In so le nho hon n: ";
	for(int i=0;i<n;i++)
	if(i%2!=0)
	cout<<i<<",";
}
// tach n
void tach(){
	int a,b,c;
	a=n/100;
	b=(n%100)/10;
	c=n%10;
	cout<<"\n + Hang tram cua n: "<<a;
	cout<<"\n + Hang chuc cua n: "<<b;
	cout<<"\n + Hang don vi cua n: "<<c;
	}
// Ham chinh 
int main(){
	cout<<"\n Nguyen Hai Nam - 1099247 ";
	cout<<"\n Cau 1: ";
	nhap();
	In();
	tach();
	cout<<"\n ..... End ..... ";
	return 0;
}
