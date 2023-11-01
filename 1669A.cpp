#include <iostream>

int main()
{
    int t;
    std::cin >> t; // Number of test cases

    while (t--)
    {
        int rating;
        std::cin >> rating; // Rating for the current test case

        if (rating >= 1900)
        {
            std::cout << "Division 1" << std::endl;
        }
        else if (rating >= 1600)
        {
            std::cout << "Division 2" << std::endl;
        }
        else if (rating >= 1400)
        {
            std::cout << "Division 3" << std::endl;
        }
        else
        {
            std::cout << "Division 4" << std::endl;
        }
    }

    return 0;
}
