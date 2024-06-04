class Solution{
public:
    int evenlyDivides(int N){
        //code here
        int n=N,c=0;
        while(n>0)
        {
            if((n%10)==0)
            {n=n/10;
            continue;
            }
            if(N%(n%10)==0)
            c++;
            n=n/10;
        }
        return c;
    }
};
