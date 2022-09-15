#include <iostream>
#include <algorithm>

int main()
{
    int biggestSequence = 0;
    int count = 0;

    for (int i = 0; i < 1000; i++)
    {
        static int currentSequence = 0;

        int a, b, c;
        std::cin >> a >> b >> c;
        
        if (a > b) std::swap(a, b);
        if (a > c) std::swap(a, c);
        if (b > c) std::swap(b, c);

        if (a + b > c)
        {
            count++;
            currentSequence++;
        }
        else
        {
            biggestSequence = std::max(biggestSequence, currentSequence);
            currentSequence = 0;
        }
    }

    std::cout << count << " " << biggestSequence << std::endl;
}

