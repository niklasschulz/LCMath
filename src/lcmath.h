/*
BSD 3-Clause License

Copyright (c) 2022, Niklas Schulz
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its
   contributors may be used to endorse or promote products derived from
   this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#pragma once

#include <ostream>
namespace lcmath
{
	// Vector 2 int
	struct vector2i
	{
		int x, y;

		vector2i& operator=(vector2i vec)
		{
			x = vec.x;
			y = vec.y;
			return *this;
		}

		vector2i& operator+(vector2i vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			return *this;
		}

		vector2i& operator-(vector2i vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			return *this;
		}

		vector2i& operator*(vector2i vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			return *this;
		}

		vector2i& operator/(vector2i vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			return *this;
		}

		vector2i& operator++()
		{
			x++;
			y++;
			return *this;
		}

		vector2i& operator--()
		{
			x--;
			y--;
			return *this;
		}

		vector2i& operator+=(vector2i vec)
		{
			x += vec.x;
			y += vec.y;
			return *this;
		}

		vector2i& operator-=(vector2i vec)
		{
			x -= vec.x;
			y -= vec.y;
			return *this;
		}

		vector2i& operator*=(vector2i vec)
		{
			x *= vec.x;
			y *= vec.y;
			return *this;
		}

		vector2i& operator/=(vector2i vec)
		{
			x /= vec.x;
			y /= vec.y;
			return *this;
		}

		bool operator==(vector2i& vec) const
		{
			return (x == vec.x && y == vec.y);
		}

		bool operator!=(vector2i& vec) const
		{
			return (x != vec.x && y != vec.y);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector2i& vec){
			out << vec.x << ", " << vec.y;
			return out;
		}
	};

	// Vector 2 float
	struct vector2f
	{
		float x, y;

		vector2f& operator=(vector2f vec)
		{
			x = vec.x;
			y = vec.y;
			return *this;
		}

		vector2f& operator+(vector2f vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			return *this;
		}

		vector2f& operator-(vector2f vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			return *this;
		}

		vector2f& operator*(vector2f vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			return *this;
		}

		vector2f& operator/(vector2f vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			return *this;
		}

		vector2f& operator++()
		{
			x++;
			y++;
			return *this;
		}

		vector2f& operator--()
		{
			x--;
			y--;
			return *this;
		}

		vector2f& operator+=(vector2f vec)
		{
			x += vec.x;
			y += vec.y;
			return *this;
		}

		vector2f& operator-=(vector2f vec)
		{
			x -= vec.x;
			y -= vec.y;
			return *this;
		}

		vector2f& operator*=(vector2f vec)
		{
			x *= vec.x;
			y *= vec.y;
			return *this;
		}

		vector2f& operator/=(vector2f vec)
		{
			x /= vec.x;
			y /= vec.y;
			return *this;
		}

		bool operator==(vector2f& vec) const
		{
			return (x == vec.x && y == vec.y);
		}

		bool operator!=(vector2f& vec) const
		{
			return (x != vec.x && y != vec.y);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector2f& vec)
		{
			out << vec.x << ", " << vec.y;
			return out;
		}
	};

	// Vector 2 double
	struct vector2d
	{
		float x, y;

		vector2d& operator=(vector2d vec)
		{
			x = vec.x;
			y = vec.y;
			return *this;
		}

		vector2d& operator+(vector2d vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			return *this;
		}

		vector2d& operator-(vector2d vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			return *this;
		}

		vector2d& operator*(vector2d vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			return *this;
		}

		vector2d& operator/(vector2d vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			return *this;
		}

		vector2d& operator++()
		{
			x++;
			y++;
			return *this;
		}

		vector2d& operator--()
		{
			x--;
			y--;
			return *this;
		}

		vector2d& operator+=(vector2d vec)
		{
			x += vec.x;
			y += vec.y;
			return *this;
		}

		vector2d& operator-=(vector2d vec)
		{
			x -= vec.x;
			y -= vec.y;
			return *this;
		}

		vector2d& operator*=(vector2d vec)
		{
			x *= vec.x;
			y *= vec.y;
			return *this;
		}

		vector2d& operator/=(vector2d vec)
		{
			x /= vec.x;
			y /= vec.y;
			return *this;
		}

		bool operator==(vector2d& vec) const
		{
			return (x == vec.x && y == vec.y);
		}

		bool operator!=(vector2d& vec) const
		{
			return (x != vec.x && y != vec.y);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector2d& vec)
		{
			out << vec.x << ", " << vec.y;
			return out;
		}
	};

	// Vector 3 int
	struct vector3i
	{
		int x, y, z;

		vector3i& operator=(vector3i vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			return *this;
		}

		vector3i& operator+(vector3i vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			return *this;
		}

		vector3i& operator-(vector3i vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			return *this;
		}

		vector3i& operator*(vector3i vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			return *this;
		}

		vector3i& operator/(vector3i vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			return *this;
		}

		vector3i& operator++()
		{
			x++;
			y++;
			z++;
			return *this;
		}

		vector3i& operator--()
		{
			x--;
			y--;
			z--;
			return *this;
		}

		vector3i& operator+=(vector3i vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			return *this;
		}

		vector3i& operator-=(vector3i vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			return *this;
		}

		vector3i& operator*=(vector3i vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			return *this;
		}

		vector3i& operator/=(vector3i vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			return *this;
		}

		bool operator==(vector3i& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z);
		}

		bool operator!=(vector3i& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector3i& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z;
			return out;
		}
	};

	// Vector 3 float
	struct vector3f
	{
		float x, y, z;

		vector3f& operator=(vector3f vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			return *this;
		}

		vector3f& operator+(vector3f vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			return *this;
		}

		vector3f& operator-(vector3f vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			return *this;
		}

		vector3f& operator*(vector3f vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			return *this;
		}

		vector3f& operator/(vector3f vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			return *this;
		}

		vector3f& operator++()
		{
			x++;
			y++;
			z++;
			return *this;
		}

		vector3f& operator--()
		{
			x--;
			y--;
			z--;
			return *this;
		}

		vector3f& operator+=(vector3f vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			return *this;
		}

		vector3f& operator-=(vector3f vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			return *this;
		}

		vector3f& operator*=(vector3f vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			return *this;
		}

		vector3f& operator/=(vector3f vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			return *this;
		}

		bool operator==(vector3f& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z);
		}

		bool operator!=(vector3f& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector3f& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z;
			return out;
		}
	};

	// Vector 3 double
	struct vector3d
	{
		float x, y, z;

		vector3d& operator=(vector3d vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			return *this;
		}

		vector3d& operator+(vector3d vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			return *this;
		}

		vector3d& operator-(vector3d vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			return *this;
		}

		vector3d& operator*(vector3d vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			return *this;
		}

		vector3d& operator/(vector3d vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			return *this;
		}

		vector3d& operator++()
		{
			x++;
			y++;
			z++;
			return *this;
		}

		vector3d& operator--()
		{
			x--;
			y--;
			z--;
			return *this;
		}

		vector3d& operator-=(vector3d vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			return *this;
		}

		vector3d& operator+=(vector3d vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			return *this;
		}

		vector3d& operator*=(vector3d vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			return *this;
		}

		vector3d& operator/=(vector3d vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			return *this;
		}

		bool operator==(vector3d& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z);
		}

		bool operator!=(vector3d& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector3d& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z;
			return out;
		}
	};

	// Vector 4 int
	struct vector4i
	{
		int x, y, z, w;

		vector4i& operator=(vector4i vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			w = vec.w;
			return *this;
		}

		vector4i& operator+(vector4i vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			w = w + vec.w;
			return *this;
		}

		vector4i& operator-(vector4i vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			w = w - vec.w;
			return *this;
		}

		vector4i& operator*(vector4i vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			w = w * vec.w;
			return *this;
		}

		vector4i& operator/(vector4i vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			w = w / vec.w;
			return *this;
		}

		vector4i& operator++()
		{
			x++;
			y++;
			z++;
			w++;
			return *this;
		}

		vector4i& operator--()
		{
			x--;
			y--;
			z--;
			w--;
			return *this;
		}

		vector4i& operator+=(vector4i vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			w += vec.w;
			return *this;
		}

		vector4i& operator-=(vector4i vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			w -= vec.w;
			return *this;
		}

		vector4i& operator*=(vector4i vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			w *= vec.w;
			return *this;
		}

		vector4i& operator/=(vector4i vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			w /= vec.w;
			return *this;
		}

		bool operator==(vector4i& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z && w == vec.w);
		}

		bool operator!=(vector4i& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z && w != vec.w);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector4i& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w;
			return out;
		}
	};

	// Vector 4 float
	struct vector4f
	{
		int x, y, z, w;

		vector4f& operator=(vector4f vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			w = vec.w;
			return *this;
		}

		vector4f& operator+(vector4f vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			w = w + vec.w;
			return *this;
		}

		vector4f& operator-(vector4f vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			w = w - vec.w;
			return *this;
		}

		vector4f& operator*(vector4f vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			w = w * vec.w;
			return *this;
		}

		vector4f& operator/(vector4f vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			w = w / vec.w;
			return *this;
		}

		vector4f& operator++()
		{
			x++;
			y++;
			z++;
			w++;
			return *this;
		}

		vector4f& operator--()
		{
			x--;
			y--;
			z--;
			w--;
			return *this;
		}

		vector4f& operator+=(vector4f vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			w += vec.w;
			return *this;
		}

		vector4f& operator-=(vector4f vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			w -= vec.w;
			return *this;
		}

		vector4f& operator*=(vector4f vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			w *= vec.w;
			return *this;
		}

		vector4f& operator/=(vector4f vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			w /= vec.w;
			return *this;
		}

		bool operator==(vector4f& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z && w == vec.w);
		}

		bool operator!=(vector4f& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z && w != vec.w);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector4f& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w;
			return out;
		}
	};

	// Vector 4 double
	struct vector4d
	{
		int x, y, z, w;

		vector4d& operator=(vector4d vec)
		{
			x = vec.x;
			y = vec.y;
			z = vec.z;
			w = vec.w;
			return *this;
		}

		vector4d& operator+(vector4d vec)
		{
			x = x + vec.x;
			y = y + vec.y;
			z = z + vec.z;
			w = w + vec.w;
			return *this;
		}

		vector4d& operator-(vector4d vec)
		{
			x = x - vec.x;
			y = y - vec.y;
			z = z - vec.z;
			w = w - vec.w;
			return *this;
		}

		vector4d& operator*(vector4d vec)
		{
			x = x * vec.x;
			y = y * vec.y;
			z = z * vec.z;
			w = w * vec.w;
			return *this;
		}

		vector4d& operator/(vector4d vec)
		{
			x = x / vec.x;
			y = y / vec.y;
			z = z / vec.z;
			w = w / vec.w;
			return *this;
		}

		vector4d& operator++()
		{
			x++;
			y++;
			z++;
			w++;
			return *this;
		}

		vector4d& operator--()
		{
			x--;
			y--;
			z--;
			w--;
			return *this;
		}

		vector4d& operator+=(vector4d vec)
		{
			x += vec.x;
			y += vec.y;
			z += vec.z;
			w += vec.w;
			return *this;
		}

		vector4d& operator-=(vector4d vec)
		{
			x -= vec.x;
			y -= vec.y;
			z -= vec.z;
			w -= vec.w;
			return *this;
		}

		vector4d& operator*=(vector4d vec)
		{
			x *= vec.x;
			y *= vec.y;
			z *= vec.z;
			w *= vec.w;
			return *this;
		}

		vector4d& operator/=(vector4d vec)
		{
			x /= vec.x;
			y /= vec.y;
			z /= vec.z;
			w /= vec.w;
			return *this;
		}

		bool operator==(vector4d& vec) const
		{
			return (x == vec.x && y == vec.y && z == vec.z && w == vec.w);
		}

		bool operator!=(vector4d& vec) const
		{
			return (x != vec.x && y != vec.y && z != vec.z && w != vec.w);
		}

		friend std::ostream& operator<<(std::ostream& out, const vector4d& vec)
		{
			out << vec.x << ", " << vec.y << ", " << vec.z << ", " << vec.w;
			return out;
		}
	};

	// Power
	float pow(float base, int exp)
	{
		if (exp < 0)
		{
			if (base == 0)
				return -0;
			return 1 / (base * pow(base, (-exp) - 1));
		}
		if (exp == 0)
			return 1;
		if (exp == 1)
			return base;
		return base * pow(base, exp - 1);
	}

	// Factorial
	int fact(int n)
	{
		return n <= 0 ? 1 : n * fact(n - 1);
	}

	// Calculate sine
	double sin(double radians, int iterations = 20)
	{
		double t = radians;
		double sine = t;
		for (int a = 1; a < iterations; ++a)
		{
			double mult = -radians * radians / ((2 * a + 1) * (2 * a));
			t *= mult;
			sine += t;
		}
		return sine;
	}

#define PI 3.14159265359
#define TERMS 7
	// Cosine
	double cos(int deg)
	{
		deg %= 360; // make it less than 360
		double rad = deg * PI / 180;
		double cos = 0;

		int i;
		for (i = 0; i < TERMS; i++)
		{ // That's also Taylor series!!
			cos += pow(-1, i) * pow(rad, 2 * i) / fact(2 * i);
		}
		return cos;
	}

	// Rounds number to int
	template<typename T>
	int round(T number)
	{
		return (int)(number + 0.5);
	}

	// Rounds number to long int
	template<typename T>
	long long int lround(T number)
	{
		return (long long int)(number + 0.5);
	}

	// Rounds number up
	template<typename T>
	int ceil(T number)
	{
		int inum = (int)number;
		if (number == (float)inum)
		{
			return inum;
		}
		return inum + 1;
	}

	// Rounds number down
	template<typename T>
	int floor(T number)
	{
		int t;
		if (number < 0)
		{
			t = (int)number + (-1);
			return t;
		}
		else return number;
	}

	// Finds absolute of number
	template<typename T>
	T abs(T number)
	{
		if (number < 0)
		{
			number = (-1) * number;
		}
		return number;
	}

	// Finds the biggest number
	template<typename T>
	T max(T number1, T number2)
	{
		if (number1 < number2)
			return number2;
		else
			return number1;
	}

	// Finds the smallest number
	template<typename T>
	T min(T number1, T number2)
	{
		if (number1 > number2)
			return number2;
		else
			return number1;
	}

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

	// Calculates the average value from an array
	template<typename T>
	double avg(T array, int arrayLength)
	{

		double sum = 0;
		for (int i = 0; i < arrayLength; i++)
		{
			sum += array[i];
		}
		return sum / arrayLength;
	}
}