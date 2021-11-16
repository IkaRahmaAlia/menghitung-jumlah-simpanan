#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int jumlah_simpanan;
	int bunga;
	int lama_simpanan;
	int n;
	int i=1;
	
	cout<<"jumlah simpanan pokok= Rp. ";
	cin>>jumlah_simpanan;
	cout<<"bunga perbulan= ";
	cin>>bunga;
	cout<<"lama simpanan= ";
	cin>>lama_simpanan;
	
//lamaa simpanan:n bulan;
	cout<<"---------------------------------------------------------------"<<endl;
	cout<<"simpanan pokok="<<jumlah_simpanan<<endl;
	n=1;
	
	while(n<=lama_simpanan){
		
		jumlah_simpanan= jumlah_simpanan + (bunga*jumlah_simpanan/100);
		cout<<"bulan ke-"<<n++<<":"<<jumlah_simpanan<<endl;
		
	}
}
