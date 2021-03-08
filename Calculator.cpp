// Calculator.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;

 class Method
{   public:
        virtual int GetResult()=0;//纯虚函数 虚函数=0
        void Answer() { GetResult(); cout << "This is the answer!!"; }
};

class Calculator:public Method
{
    public:
        int m_num1;
        int m_num2;
 
        int GetResult()
        {
            return 14;
        }

};
class AddCalculator :public Calculator
{
    int GetResult()
    {
        return m_num1+m_num2;
    }
};
class SubCalculator :public Calculator
{
public:
    virtual int GetResult()
    {
        return m_num1 - m_num2;
    }
};
class MulCalculator :public SubCalculator
{
    int GetResult()
    {
        return m_num1 * m_num2;
    }
};
class DivCalculator :public MulCalculator
{
     int GetResult()
    {
        return m_num1 / m_num2;
    }
};
class Beauty
{
   public:
      virtual void Dress() = 0;
      virtual void MakeUp() = 0;
      virtual void Reading() = 0;
      virtual void Shape() = 0;
      void Show() //大家都要做的放在公共类里
      {
          Dress();
          MakeUp();
          Reading();
          Shape();
      }
};
class ChineseBeauty:public Beauty
{
public:
    void Dress() 
    {
        cout << "旗袍"<<endl;
    }
    virtual void MakeUp()
    {
        cout << "胭脂" << endl;
    }
    virtual void Reading()
    {
        cout << "诗经" << endl;
    }
    virtual void Shape()
    {
        cout << "摇曳生姿" << endl;
    }

};
class AmericanBeauty :public Beauty
{
public:
    void Dress()
    {
        cout << "牛仔服" << endl;
    }
    virtual void MakeUp()
    {
        cout << "粉底" << endl;
    }
    virtual void Reading()
    {
        cout << "Facebook" << endl;
    }
    virtual void Shape()
    {
        cout << "力量狂野" << endl;
    }

};

template <typename T>
void Swap(T& a, T& b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
void GiveMeColor(Beauty* beauty)
{
    beauty->Show();
    delete beauty;
}

void test01()
{
    SubCalculator* abc = new DivCalculator();
    abc->m_num1 = 150;
    abc->m_num2 = 30;
    cout << abc->GetResult() << endl;
    Method* method = new SubCalculator();
    method->Answer();
}
void test02()
{
    GiveMeColor(new ChineseBeauty);
    cout << "-----------------" << endl;
    GiveMeColor(new AmericanBeauty);
}
string longestCommonPrefix(string* strs)
{
    string common;
    return strs[3];
}
int main()
{
    cout << "Hello World!\n";
    string str[2]{"flower","flow"};
    cout << strlen((const char*)str);
    
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
