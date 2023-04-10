#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nim;
	string nama;
public: void	cetak() {
	cout << "NIM = " << nim;
	cout << "\nNama = " << nama;
}
};

class matakuliah {
private:
	string kode;
	string namaM;
	int sks;
public:
	void input() {
		cout << " Masukkan Kode Matakuliah :";
		cin >> kode;
		cout << "Masukkan Nama Matakuliah :";
		cin >> namaM;
		cout << " Jumlah SKS";
		cin >> sks;

	}
	void tampil() {
		cout << " Kode matakuliah : ";
		cin >> kode;
		cout << "Nama Matakuliah : ";
		cin >> namaM;
		cout << " Jumlah SKS:";
		cin >> sks;
	}
};

int main ()
{
	mahasiswa mhs1;
	matakuliah mk;

	cout << "Masukan NIM ";
	cin >> mhs1.nim;
	cout << " Masukkan Nama :";
	cin >> mhs1.nama;
	mhs1.cetak();

	mk.input();
	mk.tampil();

}