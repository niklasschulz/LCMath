#pragma once

namespace lcmath
{
	// Calculates the square root of number
	template<typename T>
	T sqrt(T number, T error = 0.00001)
	{
		T s = number;

		while ((s - number / s) > error)
		{
			s = (s + number / s) / 2;
		}
		return s;
	}

	// Calculates the cubic root of number
	template<typename T>
	T cbrt(T number, T error = 0.00001)
	{
		T d = 1.0;
		while (error >= 0)
		{
			d = d / 10;
			error--;
		}
		T l = 0.0, u = number;
		T mid = (l + u) / 2;
		T cube = mid * mid * mid;

		while (cube != number && (cube > (number + d) || cube < (number - d)))
		{
			if (cube < number)
				l = mid + d;
			else
				u = mid - d;
			mid = (l + u) / 2;
			cube = mid * mid * mid;
		}

		return mid;
	}

	// Rounds number
	template<typename T>
	int round(T number)
	{
		return (int)(number + 0.5);
	}

	// Rounds number up
	template<typename T>
	int ceil(T number)
	{
		int inum = (int)number;
		if (number == (float)inum) {
			return inum;
		}
		return inum + 1;
	}

	// Rounds number down
	template<typename T>
	int floor(T number)
	{
		int t;
		if(number < 0){
			t=(int)number +(-1);
			return t;
		}
		else return number;
	}


}