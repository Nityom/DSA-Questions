class Solution {
public:

int winner(vector<int> arr,int k,int start){
    if(arr.size()==1){
        return arr[0];
    }

    int remove_index = (start+k-1) % arr.size();
      arr.erase(arr.begin() + remove_index);
      return winner( arr, k, remove_index);
}


    int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=0;i<n;i++){
            arr.push_back(i+1);
        }
        return winner(arr,k,0);
    }
};