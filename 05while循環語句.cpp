#include<iostream>
using namespace std;
#include<ctime>

int main() {
	//while循環語句	
	int num = 0;

	//while()中填入循環條件
	//注意事項:在寫循環一定要避免死循環的出現
	while (num < 10)
	{
		cout << num << endl;
		num++;
	}
	//----------------------------------------------------------------
		//while循環練習

		//系統生成隨機數
	srand((unsigned int)time(NULL));

	int num1 = rand() % 100 + 1; //rand()%100+1生成0+1~99隨機數
	//cout<<num1<<endl;

	int user = 0;

	while (1)
	{
		cin >> user;

		if (user > num1)
		{
			cout << "猜測過大" << endl;
		}
		else if (user < num1)
		{
			cout << "猜測過小" << endl;
		}
		else
		{
			cout << "恭喜你猜對了!!" << endl;

			break;
		}

	}
	system("pause");

	return 0;
}