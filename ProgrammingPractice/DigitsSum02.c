#include<stdio.h>

int getDigitSum(int num); // Function declare karne waqt Parenthesis empty ho sakta hai ya phir input variables along with type declaration

void main(){
    // main method
    int num;
    printf("Enter a positive number: ");
    scanf("%d",&num);

    printf("Sum digit %d",getDigitSum(num)); // Function call karne waqt expression ya uska value ya empty rakh sakte hai Parenthesis ko
}

int getDigitSum(int num){

    if(!(0 <= num <= 2^31 - 1)){
        return 0;
    }

    int sum_digit = 0;
    int count_dgit = 0;

    // 1. loop
    while(num>0){
        int last_digit = num % 10;
        sum_digit = sum_digit + last_digit;
        num = num / 10;
        // count_dgit++;
    }
    printf("Sum test %d \n",sum_digit);
    // 2. loop 
    int tem_sum = sum_digit;
    while (tem_sum>0){
        count_dgit++;
        tem_sum/=10;
    }


    num=sum_digit;
    printf("Sum count test %d \n",count_dgit);
    printf("Orignal Num test %d \n",num);
    
    if (count_dgit >1)
    {
        printf("Sum count2 test %d \n",count_dgit);
        getDigitSum(num);
    }   
    return sum_digit;
}
