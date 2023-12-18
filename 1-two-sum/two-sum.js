/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const numMap = new Map();

    for (let i = 0; i < nums.length; i++) {
        const complement = target - nums[i];

        if (numMap.has(complement)) {
      
            return [numMap.get(complement), i];
        }

      
        numMap.set(nums[i], i);
    }

    return [];
};


const nums = [2, 7, 11, 15];
const target = 9;
const result = twoSum(nums, target);

if (result.length === 2) {
    console.log(`Indices of the two numbers: ${result[0]}, ${result[1]}`);
} else {
    console.log("No solution found.");
}