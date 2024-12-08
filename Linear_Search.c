#include<stdio.h>
int main(){
    int A[6]={25, 10, 36, 6, 56, 84};
    int i, key, flag = 0;
    printf("Enter search key value: ");
    scanf("%d", &key);
    
    for(i = 0; i<=6; i++){
        if(key==A[i]){
            flag = 1;
            break;
        }
    }
    
    if(flag == 1)
        printf("Key is found at index %d", i);
    else
        printf("Key is not found");
    return 0;
}