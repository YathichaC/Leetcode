class Solution {
public:
    int strStr(string haystack, string needle) {
        bool check = false;
        int pos = haystack.length()-1;
        for(int i = 0; i < haystack.length(); i++){
            if(haystack[i] == needle[0]){
                check = true;
                pos = i;
                for(int j = 1; j < needle.length(); j++){
                    if(i+j < haystack.length()){
                        if(haystack[i+j] != needle[j]){
                            check = false;
                        }
                    }
                    else{
                        return -1;
                    }
                    
                }
                if(check == true){
                    return pos;
                }
            }
        }
        return -1;
    }
};