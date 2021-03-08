#include "basicFunction.h"

int test(int a, int b, int c, int d = 10) {
    return a + b + c;
}//声明和实现只能有一个有默认参数//默认形参在实参后
void showNumber(const int& a) {
    cout << a << endl;
}
void swap(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int* give() {
    int a = 123;
    int* p = new int(1123);
    return p;
}

//int main()
//{
//    Circ* circle = new Circ(12, 13);
//    circle->DrawCircle();
//    int a = 10;
//    int c = 24;
//    int& b = a;//引用必须要初始化，且初始化后不可修改,引用就是指针常量（即指向特定区域的指针）
//    showNumber(c);
//    int* ptr = give();
//    cout << *ptr << endl;
//    cout << a << endl;
//    cout << c << endl;
//    swap(a, c);
//    cout << a << endl;
//    cout << c << endl;
//    int arr[10] = {1,2,3,4,5,6,7,8,9,0};
//    int* p = arr;
//    for (int i = 0; i < 10; i++) {
//        *p = i * i;
//        p++;
//    }
//    for (int i = 0; i < 10; i++) {
//        cout<<arr[i]<<endl;
//    }
////删除堆中数组加[]
////如果函数作为左值，则返回必须为引用
//    //cout << *p<<endl;
//    //cout << *p << endl;
//}