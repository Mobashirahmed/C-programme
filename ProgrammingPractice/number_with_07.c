// A C program to print all the numbers with user input range that ends with 7


#include<stdio.h>
#include<stdbool.h>


int digitExtract(int i);
bool checkDigit( int i);

int getNumber1(int i, int e);
int getNumber2(int i, int e);
int getNumber3(int i, int e);

void loopNumber(int i, int e);
int loopNumber07(int i, int e);

int main(){
    int i, e;

    printf("Enter the initial value of Range ");
    scanf("%d",&i);
    printf("Enter the terminal value of Range ");
    scanf("%d",&e);
    
    // printf("%d\n",getNumber1(i,e)); // Working but ends with an extra output equivalent to ++e
    // printf("%d\n",getNumber2(i,e)); // Working but ends with an extra output equivalent to ++e
    // printf("%d\n",getNumber3(i,e)); // Working but ends with an extra output equivalent to ++e
    
    // printf("%d\n",loopNumber07(i,e)); // Working but ends with an extra output equivalent to ++e
    loopNumber(i, e); // Works the Best
}


int digitExtract(int i){
    return i%10;
}

bool checkDigit(int i){
    return digitExtract(i) == 7;
}

int getNumber1(int i, int e){
    while(i<=e){
        if(checkDigit(i)){
        printf("%d\n",i);    
        }
        ++i;
    }
}

int getNumber2(int i, int e){
    for(i=i; i<=e; ++i){
        if(checkDigit(i)){
            printf("%d\n",i);
        }
    }
}

int getNumber3(int i, int e){
    for(i=i; i<=e; ++i){
    checkDigit(i) ? printf("%d\n",i) : 0;
    }
}

void loopNumber(int i, int e){
    while(i<=e){
        int last_digit = i % 10;
        if(last_digit == 7){
            printf("%d\n",i);
        }
        ++i;
    }
}

int loopNumber07(int i, int e){
    while(i<=e){
        int last_digit = i % 10;
        if(last_digit == 7){
            // return i; 
            /*On writting a return statement: on single True execution of the loop the value is returned to the Function. And hence the Function itself terminates .i.e; the Loop also terminates*/
            printf("%d\n",i);
        }
        ++i;
    }
}