#include<iostream>
using namespace std;

int main() {

	//利用嵌套循環實現星圖

	//打印一行星圖
	//外層循環執行一次 內層執行1輪
	//外層循環
	for (int i = 0; i < 10; i++)
	{
		//內層循環
		for (int p = 0; p < 10; p++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//-----------------------------------------------------------------
		//嵌套循環練習 (乘法表)

		//打印數字
	for (int a = 1; a <= 9; a++)
	{
		//cout << a << endl;
		for (int b = 1; b <= a; b++)
		{
			cout << b << "*" << a << "=" << b * a << "\t";
		}
		cout << endl;
	}

	system("pause");

	return 0;
}