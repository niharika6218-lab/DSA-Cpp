class Solution {
public:
    bool isPalindrome(int x) {
        string n= to_string(x);
        int length=n.size();
        int first=0;
        int last=length-1;
        while(first<last){
            swap(n[first++],n[last--]);
            /*char temp=n[first];
            n[first]=n[last];
            n[last]=temp;
            first++;
            last--;*/
        }
        if(to_string(x)==n){
            return true;
        }
        else{
            return false;
        }
    }
};