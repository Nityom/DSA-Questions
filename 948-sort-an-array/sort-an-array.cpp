class Solution {


void merge(vector<int>&nums, int l,int mid, int h){
  int n1 = mid-l+1;
  int n2 = h-mid;
  vector<int> left(n1), right(n2);
  for(int i=0;i<n1;i++) left[i] = nums[l+i];
  for (int j = 0; j < n2; j++) right[j] = nums[mid + 1 + j];
   
      int i = 0, j = 0, k = l;
        while (i < n1 && j < n2) {
            if (left[i] <= right[j]) {
                nums[k++] = left[i++];
            } else {
                nums[k++] = right[j++];
            }
        }  

        while (i < n1) nums[k++] = left[i++];
        while (j < n2) nums[k++] = right[j++];
    
}



    void mergeSort(vector<int>& nums,int l , int h){
        if(h<=l) return  ;

           int mid = (l+h)/2;
            mergeSort(nums,l,mid);
            mergeSort(nums,mid+1,h);
            merge(nums,l,mid,h);
        }
    
public:
    vector<int> sortArray(vector<int>& nums) {
      
       mergeSort(nums,0,nums.size()-1);
       return nums;
    }
};