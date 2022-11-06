#include<iostream>
using namespace std;

int  main() {

	//do...while語句
	//在屏幕中輸出 0 到 9這十個數字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	//do...while和while循環區別在於 do..while會先執行一次循環語句
//----------------------------------------------------------------
	//do...while練習 (水仙花數)
	//水仙花數是指一個3位數 它的每個位數的3次方之和等於它本身

	//1.先打印所有的三位數
	int num1 = 100;

	do
	{
		//2.從所有三位數中找到水仙花數
		int a = 0; //個位
		int b = 0; //十位
		int c = 0; //百位

		a = num1 % 10; //獲取個位
		b = num1 / 10 % 10; //獲取十位
		c = num1 / 100; //獲取百位

		if (a * a * a + b * b * b + c * c * c == num1) //如果是水仙花數就打印
		{
			cout << num1 << endl;
		}

		num1++;
	} while (num1 < 1000);




	system("pause");

	return 0;
}