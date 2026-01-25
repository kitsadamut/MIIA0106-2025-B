// TODO 1) เติม field และ method ใน class Student 
// TODO 2) เขียนฟังก์ชัน printStudent(Student s) 
// TODO 3) เรียกใช้งาน printStudent จาก main
#include  <string>
#include  <iostream>	
using namespace std;
class Student
{
public:
	string id;
	string nickname;
	string lineId;
	string phone;

	void input()
	{
		cout << "Enter ID: ";
		cin >> id;
		cout << "Enter Nickname: ";
		cin >> nickname;
		cout << "Enter Line Id: ";
		cin >> lineId;
		cout << "Enter Phone: ";
		cin >> phone;
	}	
	
};
void printStudent(Student s)
{
	cout << "ID: " << s.id << endl;
	cout << "Nickname: " << s.nickname << endl;
	cout << "Line Id: " << s.lineId << endl;
	cout << "Phone: " << s.phone << endl;

}
int main()
{
	Student s1;
	cout << "=== Input Student 1 ===\n";
	s1.input();

	cout << "\n=== Output (from function) ===\n";
	printStudent(s1);

	return 0;
}
