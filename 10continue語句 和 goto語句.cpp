#include<iostream>
using namespace std;

int main() {

	//continue語句

	for (int i = 0; i < 100; i++)
	{
		//如果是基數就輸出 有數布輸出
		if (i % 2 == 0)
		{
			continue; //可以篩選條件 執行到此就不再向下執行 執行下一次循環
					  //break會退出循環 而continue不會		
		}
		cout << i << endl;
	}

	//======================================================

	//goto語句

	cout << "1.xxxx" << endl;

	cout << "2.xxxx" << endl;
	goto FLAG;
	cout << "3.xxxx" << endl;

	cout << "4.xxxx" << endl;

FLAG:
	cout << "5.xxxx" << endl;

	//注意: 在程序中不見義使goto語句 以免造成混亂


	system("pause");

	return 0;
}