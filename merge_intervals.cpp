class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector <int>> final;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++){
            if(final.empty() || final.back()[1]<intervals[i][0]){
                final.push_back(intervals[i]);
            }
            else{
                int max = final.back()[1], temp = intervals[i][1];
                if(temp>max){
                    max = temp;
                }
                final.back()[1] = max; 
            }
        }
        return final;
    }
};
