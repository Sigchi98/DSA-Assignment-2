class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int n = candyType.size();
        int maxTypes = n / 2;
    
        unordered_set<int> uniqueTypes;
        for (int type : candyType) {
            uniqueTypes.insert(type);
        }
    
        return min(maxTypes, static_cast<int>(uniqueTypes.size()));
    }
};
