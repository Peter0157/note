#include<iostream>
using namespace std;


int main() {
	//三目運算符

	//創建三個變量 a b c
	//將a和b做比較 將比較大的直賦給變量c

	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);

	cout << "c =" << c << endl;

	//在C++中三目運算符返回的是變量 可以繼續賦直
	(a < b ? a : b) = 100;
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
	//-------------------------------------------------------------
		//switch語句

	int score = 0;
	cout << "請給電影打分" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
		cout << "經典電影" << endl;
		break;
	case 9:
		cout << "經典電影" << endl;
		break;
	case 8:
		cout << "很好的電影" << endl;
		break;
	case 7:
		cout << "很好的電影" << endl;
		break;
	case 6:
		cout << "普通電影" << endl;
		break;
	case 5:
		cout << "普通電影" << endl;
		break;
	default:
		cout << "爛電影" << endl;
		break;
	}

	//if和switch的區別?
	//switch 缺點: 判斷的時候只能是整數或字符型,不可以是一個區間
	//switch 優點: 結構清晰 執行效率高

//-------------------------------------------------------------





	system("pause");

	return 0;
}