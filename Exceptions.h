#pragma once
#include<iostream>
class Exception {
public:

	Exception(int l) {
		line = l;
	}

	void msg() {
		std::cout << "Error detected in line: " << line << '\n';
	}
	void msg(const char* m) {
		std::cout << "Error detected, message: " << m << '\n';
	}

private:
	int line;
};




