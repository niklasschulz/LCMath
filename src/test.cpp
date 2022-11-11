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
}