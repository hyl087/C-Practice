#include "manager.h"

void Manager::Show() 
{
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "$$$$$$$$$ʱ������ʦ$$$$$$$$$$" << endl;
	cout << "$$$$$���˶���������$$$$$$$$$$" << endl;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
}
Manager::Manager() {}
Manager::~Manager() 
{
}
void Manager::ExitSystem() 
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}