class Solution {
public:
    int reverse(int x) {
        long long rev=0;
        while(x!=0){
            int lastdigit=x%10;
            rev=rev*10+lastdigit;
            x=x/10;}
        if(x<0 )rev*=-1;
        if(rev>=-1*pow(2,31) && rev<=pow(2,31)-1) return rev;
        else return 0;
    }
};