#include<iostream>
using namespace std;
class price {
private:
	string name;
	string date;
	float cost;
public:
	price(string name, string date, float price) {
		this->name = name;
		this->date = date;
		this->cost = price;
	}
	~price() {
		this->name = "";
		this->date = "";
		this->cost = 0;
	}
	//Nap chong toan tu nhap
	friend istream& operator>>(istream& is, price& pr) {
		cout << "\nNhap ten: ";
		is >> pr.name;
		cout << "\nNhap ngay: ";
		is >> pr.date;
		cout << "\nNhap gia: ";
		is >> pr.cost;
		return is;
	}
	//Nap chong toan tu xuat
	friend ostream& operator<<(ostream& os, price& pr) {
		os << "\nTen: " << pr.name;
		os << "\nNgay: " << pr.date;
		os << "\nGia: " << pr.cost;
		return os;
	}
	float giaVe() {
		return this->cost;
	}
};
int main() {
	return 0;
}