#include<iostream>
using namespace std;

int main() {

	//break使用時機

	//1.出現在switch語句中
	cout << "1.簡單難度" << endl;
	cout << "2.普通難度" << endl;
	cout << "3.困難難度" << endl;

	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您選擇的是簡單難度" << endl;
		break; //退出switch語句
	case 2:
		cout << "您選擇的是普通難度" << endl;
		break;
	case 3:
		cout << "您選擇的是困難難度" << endl;
		break;
	default:
		break;
	}
	//-----------------------------------------------------------------
		//2.出現在循環語句中
	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			break; //退出循環
		}
		cout << i << endl;
	}
	//-----------------------------------------------------------------
		//3.出現在嵌套循環語句中
	for (int a = 0; a < 10; a++)
	{
		for (int p = 0; p < 10; p++)
		{
			if (p == 5)
			{
				break; //退出內層循環
			}
			cout << "* ";
		}
		cout << endl;
	}



	system("pause");

	return 0;
}