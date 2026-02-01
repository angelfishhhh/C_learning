#include <iostream>
#include <iomanip>

int main()
{
	for (int count = 1 , i = 0; i < 5; count++ , i++)
	{
		std::cout << "hello , c++" <<std::setw(15) << " " << std::setfill('*') 
				  << std::setw(5) << count << std::endl << std::setfill(' ');
	}
	std::cout << std::setw(60) << std::setfill('*') << "*" << std::endl << std::setfill(' ');

	int i = 0 , count = 1;
	while (i < 5)
	{
		std::cout << "hello , c++" << std::setw(15) << " " << std::setfill('*')
			<< std::setw(5) << count << std::endl << std::setfill(' ');
		i++ , count++;
	}

	return 0;
}