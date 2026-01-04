#include <iostream>
#include <string>
using namespace std;

struct Student {
    //TODO 1) เติม field ใน struct Student ให้ครบ: studentID, nickname
	string studentID;
	string nickname;
};

int main() {
    Student s1;
    Student* p = nullptr;

    // TODO 2) ใช้ pointer p ชี้ไปที่ s1
        // TODO: p = &s1;
	p = &s1;

	cout << "Enter Student Information:\n";

    // TODO 3) กำหนดค่าโดยใช้ p->
        // TODO: p->studentID = ...
        // TODO: p->nickname = ...
	cout << "Enter Student ID: ";
	cin >> p->studentID;
	cout << "Enter Nickname: ";
	cin >> p->nickname;

	cout << "\n===== Output =====\n";

    // TODO 4) แสดงผลโดยใช้ p->
    cout << "ID: " << p->studentID << endl;
    cout << "Nickname: " << p->nickname << endl;

    return 0;
}
