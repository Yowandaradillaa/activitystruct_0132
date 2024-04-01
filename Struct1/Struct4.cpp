#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
};

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	int umur;
};

int main() {
	for (int i = 0; i < 3; i++) {
		Mahasiswa mhs[3];
		cout << "Nomor Induk Mahasiswa : ";
		getline(cin, mhs[i].nim);
		cout << "Nama Mahasiswa : ";
		getline(cin, mhs[i].nama);

		cout << "Alamat Mahasiswa : " << endl;
		cout << "\t Nama Desa : ";
		cin >> mhs[i].alamat;
		cout << "\t Nama Kota : ";
		cin >> mhs[i].alamat;
		cout << "Umur Mahasiswa : ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		cout << endl;
		cout << "\n NIM : " << mhs[i].nim;
		cout << "\n Nama : " << mhs[i].nama;
		cout << "\n Alamat : ";
		cout << "\n\t Desa : " << mhs[i].alamat.desa;
		cout << "\n\t Kota : " << mhs[i].alamat.kota;
		cout << "\n Umur : " << mhs[i].umur;
		cout << endl;
	}
}