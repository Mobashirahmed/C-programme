#include<stdio.h>

void getEven(int num);
int checkEven(int num);

int main(){
    getEven(13);
    printf("%d \n",checkEven(13));
}

// getEven number
void getEven(int num){
    if (checkEven(num) == 1)printf("Number is even %d \n", num);
    else printf("number is odd \n"); 
}


// check even or not
int checkEven(int num){
    if (num%2 ==0)return 1;
    return 0;
}
