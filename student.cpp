#include "student.h"
Student::Student() {
	cout << "hhhhhh";
}
	void Student::ShowStudent() {
		cout << "ÄêÁä:" << getName() << endl;
		cout << "ĞÕÃû£º" << getAge() << endl;
	}
	void Student::SetName(string name) {
		m_Name = name;
	}
	string Student::getName() {
		return m_Name;
	}
	void Student::SetAge(int age) {
		m_Age = age;
	}
	int Student::getAge() {
		return m_Age;
	}
	bool Student::isSame(Student& s) {
		if (getName() == s.getName() && getAge() == s.getAge()) { return true; }
		else { return false; }
	}