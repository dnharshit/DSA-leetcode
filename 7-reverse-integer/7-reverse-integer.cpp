class Solution {
public:
    int reverse(int x) {
        string s = to_string(x);
        bool wasNegative = -1;
        if(s[0]=='-'){
            ::reverse(s.begin()+1, s.end());
            wasNegative = 1;
        }
        else{
            ::reverse(s.begin(), s.end());
        }
        // cout << s;
        long long int y;
        try{
            y = stoi(s);    
        }
        catch(...){
            return 0;
        }
        
        return y;
        
    }
};