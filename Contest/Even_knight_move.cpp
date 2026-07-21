//Parity: it is the decision, where we choose something is even or odd
//Problem statement: Knight will reach in even number of moves
// If a block parity ((x+y)%2) is same with it's destination, then it consider to be even number of moves as well as it is considered color are same in both start and target block
//Knight will move by changing color. Means in odd move it will change color and in even move it will remains same. As there are two colors

class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target){
        return (start[0] + start[1]) % 2 == (target[0]+target[1]%2);
    }//true or false
}; 