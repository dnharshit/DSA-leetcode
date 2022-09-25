class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        k = k%size;
        if(size>1){
            reverse(nums.begin(), nums.begin()+(size-k));
            reverse(nums.begin()+(size-k), nums.end());
            for(int i=0; i<nums.size(); i++){
                cout << nums[i] << " ";
            }
            cout << "*";
            for(int i=0; i<=(nums.size()-1)/2; i++){
                swap(&nums[i], &nums[nums.size()-1-i]);
            }
        }
    }
    
    void swap(int* x, int* y){
        int temp = *x;
        *x = *y;
        *y = temp;
    }
};