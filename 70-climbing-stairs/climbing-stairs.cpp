class Solution {
public:
    int climbStairs(int n) {
  if(n<=2) return n;
  vector<int> m(n+1);
  m[1] =1;
  m[2] =2;

  for(int i=3 ;i<=n ; i++){
    m[i] = m[i-1] + m[i-2];
  }
  return m[n];
    }
};