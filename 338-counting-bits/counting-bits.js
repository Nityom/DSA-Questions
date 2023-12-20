function countBits(n) {
    const bitsCount = new Array(n + 1).fill(0);

    for (let i = 1; i <= n; i++) {
        bitsCount[i] = bitsCount[i >> 1] + (i & 1);
    }

    return bitsCount;
}