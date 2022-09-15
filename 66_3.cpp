#include <iostream>
#include <algorithm>

struct Triangle
{
    int A, B, C;

    Triangle(int& a, int& b, int& c)
        : A(a), B(b), C(c) {}

    void SortSides()
    {
        if (A > B) std::swap(A, B);
        if (A > C) std::swap(A, C);
        if (B > C) std::swap(B, C);
    }

    bool IsRight()
    {
        SortSides();

        if (A * A + B * B == C * C)
            return true;

        return false;
    }
};

int main()
{
    for (int i = 0; i < 1000; i++)
    {
        int a, b, c;
        std::cin >> a >> b >> c;

        Triangle t(a, b, c);

        if (t.IsRight())
            std::cout << a << " " << b << " " << c << std::endl;
    }
}

