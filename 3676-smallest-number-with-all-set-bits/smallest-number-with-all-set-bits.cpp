class Solution {
public:
     bool isAllBitsSet(int x){
        return (x & (x+1)) == 0;
     }
    int smallestNumber(int n) {
        int result = n;


        while(!isAllBitsSet(result)){
            result++;
    }
        return result;
    }
};