class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int output=0;
        
        for(int i=left;i<=right;i++){
            int temp=i;
            int one_count=0;
            int cnt=0;
            while(temp>0){
                if(temp%2==1){one_count+=1;}
                temp/=2;
            }
            if(one_count>1){
                for(int j=1;j<=one_count;j++){
                    if(one_count%j==0){cnt+=1;}
                }
            }
            else continue;
            if(cnt==2){output+=1;}

        }
        return output;
    }
};