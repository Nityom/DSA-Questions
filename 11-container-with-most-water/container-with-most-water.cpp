class Solution {
public:
    int maxArea(vector<int>& height) {
   int left =0;
   int right = height.size()-1;
   int area= 0;
   int currentarea = 0;
   while(left<right){
    currentarea = std::min(height[left],height[right]) * (right-left);
    if(currentarea > area){
        area = currentarea;
    }
    if(height[left]<height[right]){
        left++;
    }
    else{
        right--;
    }
    
   }
    return area;
}

};