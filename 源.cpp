#include "manager.h"

void Manager::Show() 
{
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
	cout << "$$$$$$$$$时间管理大师$$$$$$$$$$" << endl;
	cout << "$$$$$打工人都是人上人$$$$$$$$$$" << endl;
	cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
}
Manager::Manager() {}
Manager::~Manager() 
{
}
void Manager::ExitSystem() 
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}