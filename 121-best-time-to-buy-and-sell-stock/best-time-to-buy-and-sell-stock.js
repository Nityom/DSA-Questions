function maxProfit(prices) {
  if (prices.length === 0) {
    return 0; // Empty array, no profit can be made
  }

  let minPrice = prices[0];
  let maxProfit = 0;

  for (let i = 1; i < prices.length; i++) {
    // Update the minimum price if a lower price is found
    minPrice = Math.min(minPrice, prices[i]);

    // Update the maximum profit if a higher selling price is found
    maxProfit = Math.max(maxProfit, prices[i] - minPrice);
  }

  return maxProfit;
}

// Example usage:
const prices = [7, 1, 5, 3, 6, 4];
const result = maxProfit(prices);
console.log(result); // Output: 5 (buy at 1, sell at 6 for a profit of 6-1 = 5)
