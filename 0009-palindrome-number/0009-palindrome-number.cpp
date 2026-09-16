class Solution {
public:
    bool isPalindrome(int x) {
        string n= to_string(x);
        int length=0;
        while(n[length]!='\0'){
            length++;
        }
        int first=0;
        int last=length-1;
        while(first<last){
            char temp=n[first];
            n[first]=n[last];
            n[last]=temp;
            first++;
            last--;
        }
        if(to_string(x)==n){
            return true;
        }
        else{
            return false;
        }
    }
};