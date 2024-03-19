class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int> count(26, 0);
        for (char task : tasks) {
            count[task - 'A']++;
        }
        
        sort(count.begin(), count.end(), greater<int>());

        int maxi = count[0];
        int slot = (maxi - 1) * n;

        for (int i = 1; i < count.size(); ++i) {
            slot -= min(maxi - 1, count[i]);
        }

        if(slot<0){
            slot=0;
        }
        
        return tasks.size() + slot;
    }
};