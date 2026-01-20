#include <iostream>
#include <iomanip> 


int main()
{
	const double Pi = 3.14159;

	std::cout << "请输入半径和高度" << std::endl;
	double r = 0, h = 0;
	std::cin >> r >> h;

	std::cout << std::fixed << std::setprecision(2);
	
	std::cout << "圆周长     :" << 2 * Pi * r << std::endl;
	std::cout << "圆面积     :" << Pi * r * r << std::endl;
	std::cout << "圆球表面积 :" << 4 * Pi * r * r << std::endl;
	std::cout << "圆球体积   :" << 4 * Pi * r * r * r / 3 << std::endl;
	std::cout << "圆柱体积   :" << Pi * r * r * h << std::endl;

	return 0;
}