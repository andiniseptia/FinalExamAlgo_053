#include <iostream>
#include <string>
using namespace std;

//isi disini
class Mahasiswa {
	const int MAX_MAHASISWA = 100;
	int NIM[100];
	string nama[100];
	int tahunMasuk[100];
	int jumlahMahasiswa = 0;
	char jurusan;

};

//isi disini
class Queues {

	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	int FRONT, REAR;
	const int MAX_MAHASISWA = 100;
	int NIM[100];
	string nama[100];
	string jurusan;
	int tahunMasuk[100];
	int jumlahMahasiswa = 0;

	void tambahMahasiswa() {
		if (jumlahMahasiswa < MAX_MAHASISWA) {
			cout << "========== TAMBAH MAHASISWA ==========" << endl;
			cout << "NIM : ";
			cin >> NIM[jumlahMahasiswa];
			cin.ignore();
			cout << "Nama : ";
			getline(cin, nama[jumlahMahasiswa]);
			cout << "Jurusan : ";
			(cin, jurusan[jumlahMahasiswa]);
			cout << "Tahun Masuk: ";
			cin >> tahunMasuk[jumlahMahasiswa];
			cin.ignore();
			jumlahMahasiswa++;
			cout << "Mahasiswa berhasil ditambahkan!" << endl;
		}
		else {
			cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
		}

		// Cek apakah antrian penuh
		if ((FRONT == 0 && REAR == MAX_MAHASISWA - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueue overflow\n";
			return;
		}

		// Cek apakah antrian kosong
		if (FRONT == -1) {
			FRONT = 0;
			REAR = 0;
		}
		else {
			// Jika REAR berada di posisi terakhir array, kembali ke awal array
			if (REAR == MAX_MAHASISWA - 1)
				REAR = 0;
			else
				REAR = REAR + 1;
		}
		queue_array[REAR] = num;
	};

	//isi disini

	void tampilkanSemuaMahasiswa();
	//isi disini
	

	void algorithmacariMahasiswaByNIM();
	//isi disini

	void algorithmaSortByTahunMasuk();

};

int main() {
	Queues q;
	char ch;
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//isi disini
			q.tambahMahasiswa();
			break;
		case 2:
			//isi disini

			break;
		case 3:
			//isi disini

			break;
		case 4:
			//isi disini

			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}



// 2. Queue

// 3. Stack : menyimpan data dengan cara ditumpuk, sedangkan Queue : dengan cara mengantri.
// Dimana, pada Stack menggunakan LIFO (Last In First Out), sedangkan Queue menggunakan FIFO(First In First Out).
// Pada Stack, data hanya dapat diakses melalui 1 sisi yaitu TOP, data terakhir yang dimasukkan adalah data yang pertama dikeluarkan.
// Sedangkan Queue, data dapat diakses melalui 2 sisi, data pertama yang dimasukkan adalah data pertama yang akan dikeluarkan.

// 4. Stack digunakan untuk menyimpan data secara fisik jika data tsb akan diambil berurutan.

// 5. a). 5
// b). Salah, Benar, Benar