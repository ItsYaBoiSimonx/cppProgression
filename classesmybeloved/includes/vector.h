#pragma once

struct Vector2 {
	int x;
	int y;
};

struct Vector3 {
	int x;
	int y;
	int z;
};

struct Vector4 {
	float r, g, b, a;

	// Constructor to initialize the vector
	Vector4(float red, float green, float blue, float alpha)
		: r(red), g(green), b(blue), a(alpha) {}
};