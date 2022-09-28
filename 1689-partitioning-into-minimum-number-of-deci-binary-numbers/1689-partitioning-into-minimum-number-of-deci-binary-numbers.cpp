class Solution {
public:
    int minPartitions(string n) {
        sort(n.begin(), n.end());
        return (int(n[n.size()-1])-48);
    }
};