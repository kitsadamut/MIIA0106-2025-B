#include <iostream>
using namespace std;

struct Phone {
	string home;
	string mobile;
};

struct Parent {
    string name;
    string relationship;
    Phone contact;

};

struct Student {
	string id;
	string nickname;
	string lineID;
	Phone myContact;
	Parent myParent;
};

int main() {
    Student s1;

    cout << "Enter Student Information:\n";
    
	cout << "ID: "; cin >> s1.id;
	cout << "NickName: "; cin >> s1.nickname;
	cout << "Line ID: "; cin >> s1.lineID;
	
	cout << "Phone - Home: "; cin >> s1.myContact.home;
	cout << "Phone - Mobile: "; cin >> s1.myContact.mobile;

	cout << "Parent Name: "; cin >> s1.myParent.name;
	cout << "Parent Relationship: "; cin >> s1.myParent.relationship;

	cout << "Parent Phone - Home: "; cin >> s1.myParent.contact.home;
	cout << "Parent Phone - Mobile: "; cin >> s1.myParent.contact.mobile;
	
	cout << "\n===== Output =====\n";
	///// 1.
	cout << "\n1.Student Data(Student) :\n";
	cout << "	ID: " << s1.id << endl;
	cout << "	NickName: " << s1.nickname << endl;

	//// 2.

	cout << "\n2. Student's Contact Info (Student's Phone - myContact):\n";
	cout << "	Mobile Number " << s1.myContact.mobile << endl;
	cout << "	Home Number " << s1.myContact.home << endl;

	//// 3.

	cout << "\n3. Parent Info (Parent - myParent):\n";
	cout << "	Parent's Name: " << s1.myParent.name << endl;
	cout << "	Parent's Relationship: " << s1.myParent.relationship << endl;

	//// 4.

	cout << "\n4. Parent's Contact Info (Parent's Phone - contact):\n";
	cout << "	Parent's Mobile Number " << s1.myParent.contact.mobile << endl;
	cout << "	Parent's Home Number " << s1.myParent.contact.home << endl;
	
    return 0;

}
