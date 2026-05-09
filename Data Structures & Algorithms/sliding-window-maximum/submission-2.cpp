class Solution {
public:

    void p(deque<pair<int ,int>> d){
        cout << "Current stack : ";
        while(!d.empty()){
            cout << d.front().first;
            d.pop_front();
        }
        cout << '\n';
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;

        deque<pair<int, int>> sizeIndex; // Sorted decreasing
        for(int currentIndex = 0; currentIndex < nums.size(); currentIndex++){
            int currentNumber = nums[currentIndex];
            cout << "Current number : " << currentNumber << ", sizeIndex front : " << sizeIndex.front().first << "\n";

            while(!sizeIndex.empty() && sizeIndex.front().second <= currentIndex - k){
                cout << "Pop because top is out of bounds\n";
                sizeIndex.pop_front();
            }

            while(!sizeIndex.empty() && currentNumber > sizeIndex.back().first){
                cout << "Pop to maintain order\n";
                sizeIndex.pop_back();
            }
            
            while(!sizeIndex.empty() && currentNumber > sizeIndex.front().first){
                cout << "Pop because new best\n";
                sizeIndex.pop_front();
            }

            sizeIndex.emplace_back(pair{currentNumber, currentIndex});
            p(sizeIndex);

            if(currentIndex >= k - 1){
                int front = sizeIndex.front().first;
                // cout << currentIndex - k + 1 << ' ' << currentIndex << " -> " << front << '\n';
                result.emplace_back(sizeIndex.front().first);
            }
            
        }

        return result;
    }
};



