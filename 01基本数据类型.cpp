#include <iostream>
using namespace std;
#define day 7	//#define常量
#include <string> //用C++風格字符串時,要包含這個頭文件


int main() {

	cout << "一周里總共有" << day << "天" << endl;

	const int month = 12;
	cout << "一年裡總共有" << month << "個月份" << endl;
	//-------------------------------------------------------------------------------------
		//sizeof關鍵字
	cout << "int占用的內存空間:" << sizeof(int) << endl;
	//-------------------------------------------------------------------------------------
		//實型(浮點型)
	double d1 = 3.1415926 + 8.993872;

	cout << d1 << endl;
	//float和double占用的內存空間
	cout << "double占用的內存空間為:" << sizeof(double) << endl; //8字節
	cout << "float占用的內存空間為:" << sizeof(float) << endl;	  //4字節
//-------------------------------------------------------------------------------------
	//科學計數法
	float f2 = 3e2; //3 * 10 ^ 2
	cout << "f2=" << f2 << endl;

	float f3 = 3e-2; //3 * 0.1 ^ 2
	cout << "f3=" << f3 << endl;
	//-------------------------------------------------------------------------------------
		//字浮型變量創建方式
	char ch = 'a';
	cout << ch << endl;
	//字服型所站內存大小
	cout << "字服型所站內存大小為:" << sizeof(char) << endl;

	//字浮型對應ASCII編號
	//a - 97
	//A - 65
	cout << (int)ch << endl;
	//-------------------------------------------------------------------------------------
		//轉義字符

		//換行符 \n

	cout << "\nhello world" << endl;

	//反斜槓 \\

	cout << "\n\\" << endl;

	//水平制表符 \t  (整齊輸出)

	cout << "ok\thello world" << endl;
	//------------------------------------------------------------------------------------
		//C風格的字符串
	char str1[] = "hello world C";
	cout << str1 << endl;

	//C++風格的字符串
	//包含頭文件 #include <string>

	string str2 = "hello world C++";
	cout << str2 << endl;
	//------------------------------------------------------------------------------------
	   //創建bool數據類型
	bool flag = true; //true代表真
	cout << flag << endl;

	flag = false; //false代表假
	cout << flag << endl;

	//本質上1代表真  0代表假

	//bool類型所站內存空間

	cout << "bool類型所站內存空間為:" << sizeof(bool) << endl;


	//-------------------------------------------------------------------------------------


		//數據的輸入

		//整形
	int a = 0;
	cout << "寢葛整型變量a賦值:" << endl;
	cin >> a;
	cout << "整形變量a=" << a << endl;


	//浮點型
	float f = 3.14f;
	cout << "請給浮點型變值f賦值:" << endl;
	cin >> f;
	cout << "浮點型變量f=" << f << endl;


	//字符型
	char c = 'a';
	cout << "請給字符型變值c賦值" << endl;
	cin >> c;
	cout << "字符型變量c=" << c << endl;


	//字符串型
	string str = "hello";
	cout << "請給字符串型變量str賦值" << endl;
	cin >> str;
	cout << "字符串str=" << str << endl;


	//布耳類型
	bool fl = false;
	cout << "請給布耳類型flag賦值" << fl << endl;
	cin >> fl; //bool類型只要是非0的值都代表真
	cout << "布耳類型flag=" << fl << endl;

	system("pause");

	return 0;
}