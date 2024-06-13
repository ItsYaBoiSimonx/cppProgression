#pragma once
#include <iostream>
#include "vector.h"

bool isOblique(const Vector2& vector) {
	// Check if the vector is neither horizontal nor vertical
	if (vector.x != 0 && vector.y != 0) {
		// Check if the vector is not diagonal (45 degrees or 135 degrees)
		if (vector.y != vector.x && vector.y != -vector.x) {
			return true;
		}
	}
	return false;
}

void isThreeDimensional(Vector3 vec) {
	if (vec.z != 0) {
		std::cout << "The vector extends in the third dimension\n";
	}
	else {
		std::cout << "The vector doesn't extend in the third dimension\n";
	}
}

void isValidColor(Vector4 vec) {
	if (vec.a < 0 || vec.a > 1 || vec.r < 0 || vec.r > 255 || vec.g < 0 || vec.g > 255 || vec.b < 0 || vec.b > 255) {
		std::cout << "The color vector is invalid, check the structure.\n";
	}
	else {
		std::cout << "Yep, the color is valid\n";
	}
}