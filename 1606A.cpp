#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == target) {
            return {nums[left], nums[right]};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    return {}; // Return an empty vector if no such pair exists
}

int main() {
    std::vector<int> nums = {-2, 1, 2, 4, 7, 11};
    int target = 13;
    std::vector<int> result = twoSum(nums, target);
    if (!result.empty()) {
        std::cout << "Pair with sum " << target << " found: " << result[0] << ", " << result[1] << std::endl;
    } else {
        std::cout << "No pair with sum " << target << " found." << std::endl;
    }
    return 0;
}
