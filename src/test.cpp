#include "lcmath.h"
#include "iostream"

int	main()
{
	std::cout << lcmath::sqrt(77.4) << std::endl;
	std::cout << lcmath::cbrt(77.4) << std::endl;
	std::cout << lcmath::round(77.4) << std::endl;
	std::cout << lcmath::ceil(77.3) << std::endl;
	std::cout << lcmath::floor(77.8) << std::endl;
	std::cout << lcmath::abs(-77.8) << std::endl;
	std::cout << lcmath::max(72.3, 55.0) << std::endl;
	std::cout << lcmath::min(82.6, 95.2) << std::endl;
	std::cout << lcmath::sin(12.56, 50) << std::endl;
	std::cout << lcmath::cos(64) << std::endl;
	std::cout << lcmath::lround(2147483688.6) << std::endl;

	lcmath::vector2i testvector1{3,2};
	lcmath::vector2i testvector2{2,2};
	lcmath::vector2i testvector3 = testvector1 + testvector2;
	std::cout << std::endl << testvector3.x << "  " << testvector3.y << std::endl;

	testvector1 = {2,2};
	testvector2 = {2,2};
	if (testvector2 == testvector1)
	{
		testvector3 = testvector1 - testvector2;
		std::cout << std::endl << testvector3.x << "  " << testvector3.y << std::endl;
	}
	else
		std::cout << ":(" << std::endl;



	int array[5] = {12,1,1,2,3};

	std::cout << lcmath::avg(array, std::end(array)-std::begin(array)) << std::endl;
}