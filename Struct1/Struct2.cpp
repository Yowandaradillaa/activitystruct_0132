#include<iostream>
using namespace std;

struct DetailAlamat;
string desa;
string kota; 

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	Mahasiswa mhs;
	cout << "Nomor Induk Mahasiswa : ";
	cin >> mhs.nim;
	cout << "Nama Mahasiswa : ";
	cin >> mhs.nama;

	cout << "Alamat Mahasiswa : " << endl;
	cout << "\t Nama Desa : ";
	cin >> mhs.alamat;
	cout << "\t Nama Kota : ";
	cin >> mhs.alamat;

	cout << "Umur Mahasiswa : ";
	cin >> mhs.umur;

	cout << endl;
	cout << "\n NIM : " << mhs.nim;
	cout << "\n Nama : " << mhs.nama;
	cout << "\n Alamat : ";
	cout << "\n\t Desa : " << mhs.alamat;
	cout << "\n\t Kota : " << mhs.alamat;
	cout << "\n Umur : " << mhs.umur;
}