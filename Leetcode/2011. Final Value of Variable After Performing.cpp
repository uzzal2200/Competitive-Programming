class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int x = 0;
        for(string val : operations)
        {
            if(val == "X++" || val=="++X")
            {
               x++;
            }
            else
            {
                x--;
            }
        }
        return x;
    }
};