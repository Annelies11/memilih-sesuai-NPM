#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int L_kubus(int sisi) {
	int pangkat = pow(sisi, 2);
	return 6*pangkat;
}

int main() {
	int npm, pilihan, pilih, s1 ,s2, s3, hasil;
	char eneh;
	
	do{
	cout<<"Masukkan 4 digit terakhir npm anda : ";
	cin>>npm;
	pilihan=npm%2;
	cout<<pilihan;
	
	if(pilihan==0) {
		cout<<"NPM anda genap. Anda mendapatkan layanan menghitung luas bangun datar.\nSilakan pilih bangung datar yang ingin anda hitung\n1.Persegi Panjang\n2.Lingkaran"<<endl;
		cin>>pilih;
		if (pilih== 1) {
			cout<<"PERSEGI PANJANG"<<endl;
			cout<<"Masukkan panjang alas : "; cin>>s1;
			cout<<"Masukkan tinggi alas  : "; cin>>s2;
			hasil=s1*s2;
			cout<<"Luas Persegi Panjang anda adalah : "<<hasil<<endl;
		} else if (pilih==2) {
			cout<<"LINGKARAN"<<endl;
			cout<<"Masukkan jari-jari lingkaran : "; cin>>s1;
			double lingk=3.14*s1*s1;
			cout<<"Luas Lingkaran anda adalah : "<<lingk<<endl;
		} else {
			cout<<"Masukkan anda salah!"<<endl;
		}
	} else if(pilihan==1){
		cout<<"NPM anda ganjil. Anda mendapatkan layanan menghitung volume bangun ruang.\nSilakan pilih bangung ruang yang ingin anda hitung\n1.Balok\n2.Kubus"<<endl;
		cin>>pilih;
		if (pilih == 1) {
			cout<<"BALOK"<<endl;
			cout<<"Masukkan panjang alas  : "; cin>>s1;
			cout<<"Masukkan panjang sisi  : "; cin>>s2;
			cout<<"Masukkan tinggi        : "; cin>>s3;
			hasil=s1*s2*s3;
			cout<<"Volume Balok anda adalah : "<<hasil<<endl;
		} else if (pilih==2) {
			cout<<"KUBUS"<<endl;
			cout<<"Masukkan panjang sisi kubus : "; cin>>s1;
			hasil = pow(s1, 3);
			cout<<"Volume kubus anda adalah : "<<hasil<<endl;
			cout<<"Luas permukaan kubus adalah "<<L_kubus(s1)<<endl;

		} else {
			cout<<"Masukkan anda salah!"<<endl;
		}
	} else {
		cout<<"Masukkan anda salah!"<<endl;
	}
	cout<<"Anda ingin hitung lagi lagi? (y/n)"<<endl;
	cin>>eneh;
	system("CLS");
  } while(eneh=='y'||eneh=='Y');
  cout<<"Terima kasih"<<endl;
}
