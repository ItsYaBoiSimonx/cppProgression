#include <iostream>
#include <string>
#include "bundledimports.h"

class Human {
	int height;
	int age;
	std::string name;

public:
	// Constructor to initialize member variables
	Human() : height(0), age(0), name("") {}

	void getHeight() {
		std::cout << "This is " << name << "'s height : " << height << "\n";
	}

	void getName() {
		std::cout << "This is my name  " << name << std::endl;
	}
	void setHeight(int input) {
		height += input;
	}
	void setAge(int inputAge) {
		age += inputAge;
	}
	void setName(std::string inputName) {
		name = inputName;
	}
};



int main() {
	Human giovanni;
	giovanni.setHeight(185);
	giovanni.setAge(16);
	giovanni.setName("Peppe Il Fravecatore");

	giovanni.getHeight();


	// test n.1 
	Vector2 twoDimensions;
	twoDimensions.x, twoDimensions.y = 23, 2;
	std::cout << (isOblique(twoDimensions) ? "Yes" : "No") << " the vector " << (isOblique(twoDimensions) ? "is" : "isn't") << " oblique - " << twoDimensions.x << " " << twoDimensions.y << std::endl;

	// test n.2
	Vector3 threeDimensions;
	threeDimensions.x, threeDimensions.y, threeDimensions.z = 1, 3, 2;
	isThreeDimensional(threeDimensions);

	Vector4 color1(255, 255, 255, 1); // Valid color
	Vector4 color2(256, 0, 0, 1); // Invalid color (red is too high)
	Vector4 color3(0, 256, 0, 1); // Invalid color (green is too high)
	Vector4 color4(0, 0, 256, 1); // Invalid color (blue is too high)
	Vector4 color5(0, 0, 0, 1.1); // Invalid color (alpha is too high)
	Vector4 color6(0, 0, 0, -0.1); // Invalid color (alpha is too low)

	isValidColor(color1);
	isValidColor(color2);
	isValidColor(color3);
	isValidColor(color4);
	isValidColor(color5);
	isValidColor(color6);

}




