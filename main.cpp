#include <iostream>
#include "base1.hpp"
#include "base2.hpp"

int main()
{
                int x, y, z;
	x = sum(38, 72);
                y = difference(85, 54);
                z = multi(x, y);
                std::cout << "z = " << z << std::endl;
	system("pause");
	return 0;
}
