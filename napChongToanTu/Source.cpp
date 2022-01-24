#include<iostream>
using namespace std;
class phanso {
private:
	int tu, mau;
public:
	phanso() {
		tu = mau = 0;
	}
	~phanso() {
		tu = mau = 0;
	}
	friend istream& operator>>(istream& is, phanso& ps) {
		cout << "Nhap tu so: ";
		is >> ps.tu;
		cout << "\nNhap mau so: ";
		is >> ps.mau;
		return is;
	}
	friend ostream& operator<<(ostream& os, phanso ps) {
		os << ps.tu << "/" << ps.mau;
		return os;
	}
	friend phanso operator+(phanso a, phanso b) {
		phanso c;
		c.tu = a.tu * b.mau + b.tu * a.mau;
		c.mau = a.mau * b.mau;
		return c;
	}
};
int main() {
	phanso a, b, c;
	cin >> a;
	cin >> b;
	cout << a + b;
	return 0;
}