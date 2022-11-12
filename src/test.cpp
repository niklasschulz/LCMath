#include <iomanip>
#include "lcmath.hpp"
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
	testvector1 += testvector2;
	std::cout << testvector1 << std::endl;
	lcmath::vector2i testvector3 = testvector1 + testvector2;

	std::cout << std::endl << testvector3.x << "  " << testvector3.y << std::endl;

	testvector1 = {2,2};
	testvector2 = {2,2};

	std::cout << "area: " << testvector1.area() << std::endl;

	if (testvector2 == testvector1)
	{
		testvector3 = testvector1 - testvector2;
		std::cout << std::endl << testvector3 << std::endl;
	}
	else
		std::cout << ":(" << std::endl;


	int array[5] = {12,1,1,2,3};

	std::cout << lcmath::avg(array, std::end(array)-std::begin(array)) << std::endl;

	lcmath::sphere testsphere{4};
	std::cout << "surface area: " << testsphere.getSurface() << std::endl;
	std::cout << "circumference: " << testsphere.getCircumference() << std::endl;
	std::cout << "volume: " << testsphere.getVolume() << std::endl;



	std::cout << " raw   clamped to int8_t   clamped to uint8_t\n";
	for(int const v: {-129, -128, -1, 0, 42, 127, 128, 255, 256}) {
		std::cout << std::setw(04) << v
				  << std::setw(20) << lcmath::clamp(v, INT8_MIN, INT8_MAX)
				  << std::setw(21) << lcmath::clamp(v, 0, UINT8_MAX) << '\n';
	}
}