class Solution {
public:

int winner(vector<int> arr,int start, int k){
    if (arr.size()==1){
        return arr[0];
    }
   

    int remove_index = (start+k-1) % arr.size();
     arr.erase(arr.begin()+remove_index);
     return winner(arr,remove_index,k);

}


    int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=0; i<n ;i++){
            arr.push_back(i+1);
        }
        return winner(arr,0,k);
        
    }
};