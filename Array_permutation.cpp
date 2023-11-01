#include <iostream>

// Swap two elements in an array
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Recursive function to generate permutations
void generate_permutations(int arr[], int start, int end)
{
    // Base case: When only one element is left to be considered
    if (start == end)
    {
        // Print the permutation
        for (int i = 0; i <= end; ++i)
        {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
    else
    {
        // Loop through elements to swap and generate permutations
        for (int i = start; i <= end; ++i)
        {
            bool should_swap = true;

            // Check if arr[i] is already placed before start
            for (int j = start; j < i; ++j)
            {
                if (arr[j] == arr[i])
                {
                    should_swap = false;
                    break;
                }
            }

            // If not a duplicate, proceed with swapping
            if (should_swap)
            {
                swap(arr[start], arr[i]);                   // Swap elements
                generate_permutations(arr, start + 1, end); // Recurse on the next index
                swap(arr[start], arr[i]);                   // Swap back to backtrack
            }
        }
    }
}

int main()
{
    int input_array[] = {1, 2, 2}; // Replace with your input array
    int n = sizeof(input_array) / sizeof(input_array[0]);

    generate_permutations(input_array, 0, n - 1);

    return 0;
}
