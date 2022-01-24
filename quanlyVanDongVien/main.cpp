/*
* Đề bài

Xây dựng lớp vận động viên VanDongVien gồm:

Thuộc tính: hoten (chuỗi ký tự), tuoi (số nguyên), monthidau (chuỗi ký tự), cannang (số thực), chieucao (số thực).
Phương thức:
Thiết lập không tham số.
Thiết lập 5 tham số
Hủy bỏ
Nạp chồng toán tử nhập >>
Nạp chồng toán tử xuất <<
Nạp chồng toán tử so sánh > (một vận động viên là lớn hơn nếu chiều cao lớn hơn,
trong trường hợp chiều cao bằng nhau thì xét cân nặng lớn hơn)
Xây dựng chương trình chính:

Khai báo p là đối tượng lớp Vandongvien (sử dụng hàm thiết lập 5 tham số), hiển thị thông tin của p ra màn hình.
Nhập vào một mảng gồm n vận động viên.
Hiển thị danh sách đã nhập ra màn hình.
Sắp xếp mảng đã nhập theo thứ tự tăng dần, hiển thị danh sách đã sắp ra màn hình.
*/
#include<iostream>
using namespace std;
class athlete {
protected:
		string name;
		int age;
		string sub;
		float weight;
		float height;
public:
	athlete() {
		this->name = this->sub = "";
		this->age = 0;
		this->height = this->weight = 0;
	}
	athlete(string name, int age, string sub, float weight, float height) {
		this->name = name;
		this->age = age;
		this->sub = sub;
		this->weight = weight;
		this->height = height;
	}
	~athlete() {
		this->name = this->sub = "";
		this->age = 0;
		this->height = this->weight = 0;
	}
	//-----------------------------------------//
	//Nap chong toan tu nhap
	friend istream& operator >>(istream & is,athlete &a) {
		cout << "\nNhap ten: ";
		is >> a.name;
		cout << "Nhap tuoi: ";
		is >> a.age;
		cout << "\nNhap mon: ";
		is >> a.sub;
		cout << "\nChieu cao: ";
		is >> a.height;
		cout << "\nCan nang: ";
		is >> a.weight;
		return is;
	}
	//Nap chong toan tu xuat
	friend ostream& operator<<(ostream& os, athlete a) {
		cout << "\nTen: ";
		os << a.name;
		cout << "\nTuoi: ";
		os << a.age;
		cout << "\nNhap mon: ";
		os << a.sub;
		cout << "\nChieu cao: ";
		os << a.height;
		cout << "\nCan nang: ";
		os << a.weight;
		return os;
	}
	//Nap chong toan tu so sanh
	bool operator>(athlete a){
		if (this->height > a.height) {
			return true;
		}
		else if (this->height < a.height) {
			return false;
		}
		else {
			if (this->weight > a.weight) {
				return true;
			} 
			return false;
		}
	}
};
int main() {
	athlete a("Ngo Phi Hung", 20, "Game", 12, 23);
	athlete b("Ngo Phi Hung", 20, "Game", 21, 21);
	if (b > a) {
		cout << "YEs";
	}
	else {
		cout << "no";
	}
	cout << a;

	return 0;
}