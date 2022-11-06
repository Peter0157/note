#include<iostream>
using namespace std;

int main() {
	//創建三隻校豬的體重變量
	int pigA = 0;
	int pigB = 0;
	int pigC = 0;

	//讓user來輸入小豬的體重
	cout << "輸入pigA的重量" << endl;
	cin >> pigA;

	cout << "輸入pigB的重量" << endl;
	cin >> pigB;

	cout << "輸入pigC的重量" << endl;
	cin >> pigC;

	cout << "pigA體重為:" << pigA << endl;
	cout << "pigB體重為:" << pigB << endl;
	cout << "pigC體重為:" << pigC << endl;

	//判斷哪隻最重
	//先判斷A和B的重量
	if (pigA > pigB) //A比B重
	{
		if (pigA > pigC) // A比C重
		{
			cout << "\npigA最重" << endl;
		}
		else  // C比A重
		{
			cout << "\npigC最重" << endl;
		}
	}
	else  // B比A重
	{
		if (pigB > pigC) //B比C重
		{
			cout << "\npigB最重" << endl;
		}
		else //C比B重
		{
			cout << "\npigC最重" << endl;
		}
	}

	system("pause");

	return 0;
}