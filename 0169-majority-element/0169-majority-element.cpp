class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int threshold = nums.size() / 2;
        unordered_map<int, int> frequencies;

        // Record each value and test its updated frequency.
        for (int value : nums) {
            frequencies[value]++;

            // The first frequency above the threshold identifies the majority.
            if (frequencies[value] > threshold) {
                return value;
            }
        }

        return -1;
    }
};