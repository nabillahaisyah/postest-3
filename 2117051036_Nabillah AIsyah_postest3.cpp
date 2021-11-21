#include<iostream>
using namespace std;
int main(){
	
	/* Nama : Nabillah Aisyah
	   NPM : 2117051036
	   Kelas : D
	*/
	
	// Deklarasi Variabel
	string menentukan_keliling_volume_tabung;
	double jari_jari_r;
	double tinggi_T;
	double keliling;
	double volume;
	
	cin>>menentukan_keliling_volume_tabung;
	cout<<endl;
	
	cout<<"----------Program Menghitung Keliling atau Volume Tabung----------"<<endl;
	
	
	if(menentukan_keliling_volume_tabung=="1"){
		cout <<"Masukkan Jari-Jari pada Tabung\t : "; 
		cin>>jari_jari_r;
		keliling = 2*3.14*jari_jari_r;
		cout <<"Hasil dari Keliling Tabung adalah\t : "<<keliling<<endl;
	
	}
	else if (menentukan_keliling_volume_tabung =="2"){
		cout <<"Masukkan Jari-Jari Tabung\t : ";
		cin >>jari_jari_r;
		cout <<"Masukkan Tinggi Tabung\t\t : ";
		cin >>tinggi_T;
		volume = 3.14*(jari_jari_r*jari_jari_r)*tinggi_T;
		cout <<"Hasil dari Volume Tabung adalah\t : "<<volume<<endl;
		
	}
	else {
		cout<<"syntax error";
	}
	
	
	return 0;
	
}
