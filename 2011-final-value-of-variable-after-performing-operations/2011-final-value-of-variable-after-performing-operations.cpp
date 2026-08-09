class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0,i=0;
        for(i=0;i<n;i++){
            if(operations[i] == "++X" || operations[i]== "X++"){
                x++;
            }
            else{
                x--;
            }
        }
        return x;
    }
};