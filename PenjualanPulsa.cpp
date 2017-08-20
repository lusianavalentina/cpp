#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;
struct pls {
	int h[5]={6500,11500,26500,51500,101500},op,p,u,b;
	long n;
	char opl[15];
};
long bayar(long x, long y);
int main(){
	pls s;
	cout<<"Aplikasi Penjualan Pulsa\n---------------------\n\n\n";
	cout<<"Operator : \n\n[1] Telkomsel\n[2] Indosat\n[3] Tri\n[4] XL/Axis\n\n";
	cout<<"Pilih [1/2/3/4] : ";cin>>s.op;
	if(s.op==1){
		strcpy(s.opl, "Telkomsel");}
	if(s.op==2){
		strcpy(s.opl, "Indosat");}
	if(s.op==3){
		strcpy(s.opl, "Tri");}
	if(s.op==4){
		strcpy(s.opl, "XL/Axis");}
	system("clear");
	cout<<"Masukkan nomor : ";cin>>s.n;system("clear");
	cout<<"Jumlah Pulsa :\n\n[1] 5000\n[2] 10000\n[3] 25000\n[4] 50000\n[5] 100000\n\nPilih : ";cin>>s.p;
	s.b=s.h[s.p-1];system("clear");
	cout<<"Beli berapa kali? : ";cin>>s.u;system("clear");
	cout<<"\t\t\tINFO TRANSAKSI\n";
	cout<<"----------------------------------------------------------\n";
	cout<<"\nOperator\t: "<<s.opl;cout<<"\nNomor\t\t: +62"<<s.n;cout<<"\nJumlah Pulsa\t: "<<s.b-1500;
	cout<<"\nKuantitas\t: "<<s.u;
	cout<<"\nTotal Bayar\t: "<<bayar(s.u, s.b);
	cout<<"\n\n-----------------------------------------------------------\n\n";
}
long bayar(long x, long y){
	return (x*y);
}
