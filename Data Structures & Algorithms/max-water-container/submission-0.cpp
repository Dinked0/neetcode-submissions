class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0; int j = heights.size() - 1;
        int area = 0;
        while(i < j){
            area = max((j - i) * min(heights[i], heights[j]) , area);
            
            if(heights[i] > heights[j]){
                j--;
            }
            else i++;
        }
        return area;
    }
};
