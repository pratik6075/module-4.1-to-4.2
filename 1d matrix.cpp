#include <iostream>
using namespace std;
class Matrix 
{
  private:
    int *data;
    int rows, cols;

  public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data = new int[r * c];
    }

    int operator()(int row, int col) const 
	{
        return data[row * cols + col];
    }

    int& operator()(int row, int col) 
	{
        return data[row * cols + col];
    }

    Matrix operator+(const Matrix& other) const 
	{
        Matrix result(rows, cols);
        for (int i = 0; i < rows * cols; i++) 
		{
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    ~Matrix() 
	{
        delete[] data;
    }
};

int main() 
{
    Matrix m1(2, 2);
    m1(0, 0) = 1; m1(0, 1) = 2;
    m1(1, 0) = 3; m1(1, 1) = 4;

    Matrix m2(2, 2);
    m2(0, 0) = 5; m2(0, 1) = 6;
    m2(1, 0) = 7; m2(1, 1) = 8;

    Matrix m3 = m1 + m2;

    std::cout << m3(0, 0) << " " << m3(0, 1) << std::endl;
    std::cout << m3(1, 0) << " " << m3(1, 1) << std::endl;

    
}

