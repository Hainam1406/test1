#include <iostream>
using namespace std;

// bien toan cuc
float a[1000]; int n;
int x;
// khai bao cac bien 
void Input();
void In();
void max();
float TBC();
int Dem();
void SapXep();
int Max();
//ham chinh
int main(){
	cout<<"\n Nguyen Hai Nam - 1900247 ";
	cout<<"\n Cau 2: ";
	Input();
	In();
	max();
	cout<<"\n TBC = "<<TBC();
	SapXep();
	cout<<"\n Max= "<<Max();
	cout<<"\n .....END..... ";
}
// Nhap n
void Input(){
	do{
		cout<<"\n Nhap phan tu cua day: ";
		cout<<"\n Nhap n: "; cin>>n;
		if(n<1||n>999)
		cout<<"\n Nhap lai n! ";
	}while(n<1||n>999);
cout<<"\n Nhap x: ";cin>>x;
// Nhap mang 
cout<<"\n Nhap mang: ";
for(int i=0;i<n;i++){
cout<<"\n a["<<i<<"]= ";
cin>>a[i];
}

}
// In day vua nhap
void In(){
cout<<"\n In day: ";
for(int i=0;i<n;i++)
cout<<a[i]<<",";
}
// max nho hon x
void max(){
	int max = 0;
	for(int i=0;i<n;i++){
		if(a[i]<x){
			if(max < a[i]){
				max = a[i];
			}
		}
	}
		cout<<"\n So lon nhat nho hon x: "<<max;
}

// Tinh TBC
float TBC(){
	float tbc=0, s=0;
	for(int i=0;i<n;i++){
		s=s+a[i];
		tbc=s/n;
		return tbc;
	}
}
// Sap xep tang dan 
void SapXep(){
	cout<<"\n Sap xep tang dan: ";
		   for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]>a[j])
            {
                // doi cho 2 so
                float t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
    // in mang da sap xep
    for(int i=0;i<n;i++)
        cout<<a[i]<<", ";
        
}
// tim max
int Max(){
    int max;
    max=a[0];
    for(int i=1;i<n;i++)
        if(max<a[i]) max=a[i];
    return max;
}
