#include <iostream>
#include "student.h"

using namespace std;

class Node {
	public:
		int num=0;
		Node* node=nullptr;
		void ShowNode(Node* head) {
			while (head->node != nullptr) {
				cout << head->num << endl;
				head = head->node;
			}
		}
		void DeleteNode(Node* head, int j) {
			for (int i = 0; i < j-1; i++) {
				head = head->node;
			}
			head->node = head->node->node;
		}
		void InsertNode(Node* head, int j, int number) {
			for (int i = 0; i < j - 1; i++) {
				head = head->node;
			}
			Node* temp = new Node();
			temp->num = number;
			temp->node = head->node;
			head->node = temp;
		
		}
};
class Person {
private:
	int m_age;
public:
	Person() { m_age = 0; }
	void setAge(int age) {
		if (age > 1000) {
			cout << "Dragon!!!";
			return;
		}
		if (age < 0) {
			cout << "Time Traveller";
			return;
		}
		m_age = age;
	}
	int getAge() { return m_age; }
	virtual void SayHello() { cout << "nonono"; }
};

class Teacher :public Person {
public:
	Teacher() { setAge(24); }
	void SayHello() { cout << "I am awesome!!"; }

};
void Swap2(int &a, int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void doSpeak(Person& person) {
	person.SayHello();
}
void testInherit() {
	Person person1;
	Person* person = new Person();
	cout << person->getAge() << endl;
	Teacher* teacher = new Teacher();
	cout << teacher->getAge() << endl;
	doSpeak(person1);
}
void testNode() {
	Node* head = new Node();
Node* end = head;
head->node = end;
for (int i = 1; i < 10; i++) {
	Node* temp = new Node();
	temp->num = i * i;
	end->node = temp;
	end = temp;
}
head->ShowNode(head);
head->DeleteNode(head, 2);
head->ShowNode(head);
head->InsertNode(head, 3, 46);
head->ShowNode(head);
}
void testSwap() {
	int a=12, b=25;
	Swap2(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main() {
	testInherit();
}


