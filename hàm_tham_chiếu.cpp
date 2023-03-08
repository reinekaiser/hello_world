#include <iostream>
using namespace std;



int& max(int &a, int &b)
{
	return a > b ? a : b; // trả về tham chiếu của biến lớn hơn
}

int main()
{
	int x = 6;
	int y = 9;

	max(x, y) = 69; // gán biến lớn hơn bằng 69

	cout << "x = " << x << '\n'; // 6
	cout << "y = " << y << '\n'; // 69: y lớn hơn nên bị thay đổi

	system("pause");
	return 0;
}

