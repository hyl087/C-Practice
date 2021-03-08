// Computer.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class Memory
{
public:
    virtual void Storage() = 0;
    virtual ~Memory() {};

};

class CPU
{
public:
    virtual void Calculate() = 0;
    virtual ~CPU() {};
};

class GPU
{
public:
    virtual void Display() = 0;
    virtual ~GPU() {};
};

class Computer
{
private:
    Memory* m_memory;
    CPU* m_Cpu;
    GPU* m_gpu;
public:
    Computer(Memory* memory, CPU* Cpu, GPU* gpu)
    {   
        m_memory = memory;
        m_Cpu = Cpu;
        m_gpu = gpu;
    }
    void Work()
    {
        m_memory->Storage();
        m_Cpu->Calculate();
        m_gpu->Display();
    }
    ~Computer() 
    {
        delete m_memory;
        m_memory = NULL;
        delete m_Cpu;
        m_Cpu = NULL;
        delete m_gpu;
        m_gpu = NULL;
    }
    
};

//Intel
class IntelMemory :public Memory
{
public:
    void Storage()
    {
        cout << "Intel内存测试开始。。。" << endl;
    }
    ~IntelMemory()
    {   
        cout << "Intel内存测试结束。。" << endl;
    }
};

class IntelGPU :public GPU
{
public:
    void Display()
    {
        cout << "Intel显卡测试开始。。。" << endl;
    }
    ~IntelGPU()
    {
        cout << "Intel显卡测试结束。。" << endl;
    }
};

class IntelCPU :public CPU
{
public:
    void Calculate()
    {
        cout << "IntelCPU测试开始。。。" << endl;
    }
    ~IntelCPU()
    {
        cout << "IntelCPU测试结束。。" << endl;
    }
};
//联想
class LenovoMemory :Memory
{
public:
    void Storage()
    {
        cout << "Lenovo内存测试开始。。。" << endl;
    }
    ~LenovoMemory()
    {
        cout << "Lenovo内存测试结束。。" << endl;
    }
};

class LenovoGPU :public GPU
{
public:
    void Display()
    {
        cout << "Lenovo显卡测试开始。。。" << endl;
    }
    ~LenovoGPU()
    {
        cout << "Lenovo显卡测试结束。。" << endl;
    }
};

class LenovoCPU :public CPU
{
public:
    void Calculate()
    {
        cout << "LenovoCPU测试开始。。。" << endl;
    }
    ~LenovoCPU()
    {
        cout << "LenovoCPU测试结束。。" << endl;
    }
};

void test01()
{
    Computer* computer = new Computer(new IntelMemory(), new LenovoCPU(), new IntelGPU());
    computer->Work();
    delete computer;
    cout << "------------------" << endl;
    computer = new Computer(new IntelMemory(), new IntelCPU(), new LenovoGPU());
    computer->Work();
    delete computer;
}
int main()
{
    std::cout << "Hello World!\n";
    test01();
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
