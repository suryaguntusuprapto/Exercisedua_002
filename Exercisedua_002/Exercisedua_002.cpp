#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input(){}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar {
public:
	void input() {
		int r;
		cout << "Masukkan Jejari: ";
		cin >> r;
		setX(r);
	}

	float Luas(int r) {
		return 3.14 * r * r;
	}

	float Keliling(int r) {
		return 2 * 3.14 * r;
	}
};

class BujurSangkar :public bidangDatar {
public:
	void input() {
		int sisi;
		cout << "Masukkan Sisi: ";
		cin >> sisi;
		setX(sisi);
	}
	
	float Luas(int sisi) {
		return sisi * sisi;
	}

	float Keliling(int sisi) {
		return 4 * sisi;
	}
};

int main() {
	Lingkaran lkr;
	BujurSangkar BS;

	cout << "=====Menghitung Luas dan Keliling Lingkaran=====" << endl;
	lkr.input();
	int r = lkr.getX();
	cout << "Luas Lingkaran = " << lkr.Luas(r) << endl;
	cout << "Keliling Lingkaran = " << lkr.Keliling(r) << endl;
	
	cout << endl;
	cout << endl;

	cout << "=====Menghitung Luas dan Keliling BujurSangkar====="<<endl;
	BS.input();
	int sisi = BS.getX();
	cout << "Luas BujurSangkar = " << BS.Luas(sisi) << endl;
	cout << "Keliling BujurSangkar = " << BS.Keliling(sisi) << endl;

	return 0;
}