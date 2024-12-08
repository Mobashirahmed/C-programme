#include<stdio.h>

#define MAXVAL 50
#define COUNTER 11
int main(){
    float   value[MAXVAL];
    int i, low, high;
    int group[COUNTER] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    printf("Enter the marks obtained by the class memebers\n");

    /*..........READING AND COUNTING................*/
    for(i=0; i<50; i++){
        /*.............READING OF VALUES............*/
        scanf("%f", &value[i]);
            /*.....COUNTING FREQUENCY OF GROUPS.........*/
            ++group [(int) (value[i]) /10];
    }
    
    /*...........PRINTING OF FREQUENCY TABLE............*/
    printf("\n");
    printf("GROUP    RANGE   FREQUENCY\n\n");
    for(i = 0; i<11; i++){
        low = i * 10;
        if(i == 10)
            high = 100;
        else
            high = low + 9;
        printf(" %2d   %3d to %3d    %d\n", i + 1, low, high, group[i] );
    }
    return 0;
}