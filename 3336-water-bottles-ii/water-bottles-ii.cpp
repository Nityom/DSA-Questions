class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int count = numBottles;
        int empty = numBottles;
        while (numExchange <= empty) {
     
            numBottles = 0;
           empty = empty-numExchange;
              count++;              
            empty++;              
            numExchange++;       
        }
        return count ;
    }
};