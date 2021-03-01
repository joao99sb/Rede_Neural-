#pragma once
#include <stdio.h>
#include <fstream> // for file access
#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>
#include <cmath>

using std::vector;
using std::tuple;
#include "Exceptions.h"

class Matrix {

private:
	unsigned m_rowSize;
	unsigned m_colSize;
	vector<vector<double> > m_matrix;



public:
	Matrix(unsigned, unsigned, double);
	Matrix(const char*);


	// Matrix Operations
	Matrix operator+(Matrix&);
	Matrix operator-(Matrix&);
	Matrix operator*(Matrix&);
	Matrix transpose();

	Matrix operator+(double);
	Matrix operator-(double);
	Matrix operator*(double);
	Matrix operator/(double);


	// Aesthetic Methods
	double& operator()(const unsigned&, const unsigned&);
	void print() const;
	unsigned getRows() const;
	unsigned getCols() const;


	// Power Iteration
	tuple<Matrix, double, int> powerIter(unsigned, double);

	// Deflation
	Matrix deflation(Matrix&, double&);


	friend std::ostream& operator<<(std::ostream& stream, const Matrix& m);
};


