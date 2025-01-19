class Solution {
public:
    int generateKey(int num1,int num2,int num3) {
    int first1=num1%10;
    int first2=num2%10;
    int first3=num3%10;
    num1/=10;
    num2/=10;
    num3/=10;
    int second1=num1%10;
    int second2=num2%10;
    int second3=num3%10;
    num1/=10;
    num2/=10;
    num3/=10;
    int third1=num1%10;
    int third2=num2%10;
    int third3=num3%10;
    num1/=10;
    num2/=10;
    num3/=10;
    int ans=min(first1,min(first2,first3))*1+min(second1,min(second2,second3))*10+min(third1,min(third2,third3))*100+min(num1,min(num2,num3))*1000;
    return ans;    
    }
};