#include<iostream>
using namespace std;
class person
{
	int m_a;
	static int m_b;
	void func1()
	{

	}
	static void func2()
	{

	}
};
void test01()
{
	person p1;
	cout << "sizeof(p1)=" << sizeof(p1) << endl;
}
int main()
{
	test01();
	system("pause");
	return 0;
}
//这串代码是用来测试静态变量的内存大小的
