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
        cout << s;
        long long int y;
        try{
            y = stoi(s);    
        }
        catch(...){
            return 0;
        }
        // long long int z = (long long int) y;
        // if(y>2147483648){
        //     return 0;
        // }
        // if(wasNegative==1){
        //     cout << "*";
        //     return z*-1;
        // }
        
        return y;
        
    }
};