#pragma once
#include<iostream>
using namespace std;

class Student {
private:
	string m_Name;
	int m_Age;
public:
	Student();
	void ShowStudent();
	void SetName(string name);
	string getName();
	void SetAge(int age);
	int getAge();
	bool isSame(Student& s);
};
