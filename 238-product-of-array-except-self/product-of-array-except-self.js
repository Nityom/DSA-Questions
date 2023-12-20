function productExceptSelf(nums) {
    const n = nums.length;
    const prefixProducts = new Array(n);
    const suffixProducts = new Array(n);
    const answer = new Array(n);

    let prefixProduct = 1;
    for (let i = 0; i < n; i++) {
        prefixProducts[i] = prefixProduct;
        prefixProduct *= nums[i];
    }

    let suffixProduct = 1;
    for (let i = n - 1; i >= 0; i--) {
        suffixProducts[i] = suffixProduct;
        suffixProduct *= nums[i];
    }

    for (let i = 0; i < n; i++) {
        answer[i] = prefixProducts[i] * suffixProducts[i];
    }

    return answer;
}