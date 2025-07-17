class Solution {
public:
    int maxDepth(string s) {
        int current_depth=0;
        int max_depth=0;

        for(char ch:s){
            if(ch=='('){
                current_depth++;
                max_depth= max(max_depth,current_depth);
            }
            else if(ch==')'){
                current_depth--;
            }
        }
return max_depth;
        
    }
};