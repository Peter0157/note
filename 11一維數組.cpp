#include<iostream>
using namespace std;

int main() {
	//數組
	
	//1.數據類型 數組名[數組長度]
	int arr[5];
	//給數組中的元素進行賦直
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//訪問數據元素
	cout << arr[0] << endl;
	cout << arr[1] << endl;
	cout << arr[2] << endl;
	cout << arr[3] << endl;
	cout << arr[4] << endl;
	//------------------------------------------------------------------------	 
		//2.數據類型 數組名[數組長度] = {直1, 直2 ...}
		//如果在初始化數據時 沒有全部寫完 會用0來填補剩餘的數據

	int arr2[5] = { 10,20,30,40,50 };

	cout << arr2[0] << endl;
	cout << arr2[1] << endl;
	cout << arr2[2] << endl;
	cout << arr2[3] << endl;
	cout << arr2[4] << endl;
	//利用循環 輸出數組中的元素
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << endl;
	}
	//------------------------------------------------------------------------
		//3.數據類型 數組名[] = {直1, 直2 ...}
		//定義數組的時候 必須有初始長度
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };

	for (int i = 0; i < 9; i++)
	{
		cout << arr3[i] << endl;
	}
	//------------------------------------------------------------------------	
	system("pause");
	return 0;
}