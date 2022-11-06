#include<iostream>
using namespace std;

int main() {
	//for循環
	//從數字0 打印到 數字9

	for (int i = 0; i < 10; i++)
	{
		cout << i << endl;
	}
	//-------------------------------------------------------------------------
		//for循環練習 (敲桌子)
		//1.先輸出1~100數字
	for (int a = 1; a <= 100; a++)
	{
		//2.從100個數字中找到特殊數字 打印"敲桌子"
		//如果是 7的倍數 個位數是7 或十位數是7 打印"敲桌子"
		if (a % 7 == 0 || a % 10 == 7 || a / 10 == 7)
		{
			cout << "\n敲桌子" << endl;
		}
		else
		{
			cout << "\n" << a << endl;
		}
	}
	system("pause");
	return 0;
}