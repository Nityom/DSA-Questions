class Solution {
public:
    bool isPowerOfTwo(int n) {
        // base case
        if(n<=0){
            return false;
        }
        
          return (n & (n - 1)) == 0;
      
    }
};