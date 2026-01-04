#include <iostream>
#include <string>
using namespace std;

struct Student {
    // TODO
	string id;
	string nickname;
	string lineID;
	string phone;
};

// TODO: เขียนฟังก์ชันนี้
void printStudent(Student s) {
    // TODO
	cout << "ID: " << s.id << "\n";
	cout << "Nickname: " << s.nickname << "\n";
	cout << "Line ID: " << s.lineID << "\n";
	cout << "Phone: " << s.phone << "\n";

}

int main() {
    Student s1;

    cout << "=== Input Student 1 ===\n";
    // TODO: cin >> ...
	cout << "Enter ID: ";
	cin >> s1.id;
	cout << "Enter Nickname: ";
	cin >> s1.nickname;
	cout << "Enter Line ID: ";
	cin >> s1.lineID;
	cout << "Enter Phone: ";
	cin >> s1.phone;

    cout << "\n=== Output (from function) ===\n";
    // TODO: เรียก printStudent
	printStudent(s1);

    return 0;
}
