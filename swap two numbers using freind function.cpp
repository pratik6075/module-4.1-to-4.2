#include <iostream>
using namespace std;

class numbers 
{
    int x, y;
    public:
        numbers(int x, int y) 
		{
            this->x = x;
            this->y = y;
        }

        friend void swap(numbers &n);
        void print() 
		{
            cout << "x = " << x << ", y = " << y << endl;
        }
};

void swap(numbers &n) 
{
    n.x = n.x + n.y;
    n.y = n.x - n.y;
    n.x = n.x - n.y;
}

int main() 
{
    numbers num(10, 20);
    cout << "Before swap: ";
    num.print();
    swap(num);
    cout << "After swap: ";
    num.print();
    return 0;
}

