class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        
        int n = words.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            for(auto c : words[i])
           {
             if(c == x)
            {
             v.push_back(i);
             break;
            }
           }
        }
        return v;
    }
};