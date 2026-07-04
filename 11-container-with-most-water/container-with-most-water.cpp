class Solution {
public:
    int maxArea(vector<int>& arr) {
        int n = arr.size();
        int first = 0 , last = n-1;
        int maxArea = 0;

        while(last > first){
            if (arr[first] > arr[last]){
                int Area = arr[last] * (last - first);
                if (maxArea < Area){
                    maxArea = Area;
                }
                last--;
            } else {
                int Area = arr[first] * (last - first);
                if (maxArea < Area){
                    maxArea = Area;
                } 
                first++;
            }
        }

        return maxArea;
    }
};