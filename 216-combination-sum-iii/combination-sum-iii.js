var combinationSum3 = function(k, n) {
    const result = [];

    const backtrack = (start, target, currentCombination) => {
        if (target === 0 && currentCombination.length === k) {
            result.push([...currentCombination]);
            return;
        }

        for (let i = start; i <= 9; i++) {
            if (target - i >= 0) {
                currentCombination.push(i);
                backtrack(i + 1, target - i, currentCombination);
                currentCombination.pop();
            }
        }
    };

    backtrack(1, n, []);

    return result;
};

// Example usage:
const k = 3;
const n = 7;
const result = combinationSum3(k, n);
console.log(result);
