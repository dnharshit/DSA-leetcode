class Solution {
public:
    string reverseWords(string s) {
        int lastspace = -1;
        for(int i=0; i<=s.size(); i++){
            if(s[i]==' ' || s[i]==NULL){
                reverse(s.begin()+lastspace+1, s.begin()+i);
                lastspace = i;  
                // cout << i << " ";
            }
        }
        
        return s;
    }
};