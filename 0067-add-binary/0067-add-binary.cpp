class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length() < b.length()){
            swap(a,b);
        }
        while(b.length()<a.length()){
            b="0"+b;
        }
        int c=0;
        string res="";
        for(int i=a.length()-1;i>=0;i--){
            int bitA=a[i]-'0';
            int bitB=b[i]-'0';
            int sum=bitA+bitB+c;
            res=char((sum%2)+'0')+res;
            c=sum/2;
        }
        if(c==1){
            res="1"+res;
        }
        return res;
    }
};