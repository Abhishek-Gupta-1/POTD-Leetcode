class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        // Creating an storing the first element inside priority queue
        priority_queue<int> pq;

        for(const auto& invector : points){
            pq.push(invector.front());
        } 

        // Checking the difference between two consecutive elements
        int maxdiff=0;
        int firstnumb= pq.top();
        pq.pop();

        while(!pq.empty()){
             int currentnumb = pq.top();
             pq.pop();

             int differ = firstnumb - currentnumb;
             maxdiff = max(maxdiff, differ);

             firstnumb = currentnumb;

        }
        // returning the maximum difference
        
        return maxdiff;
       

    }
};