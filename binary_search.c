#include<stdio.h>
int main(){
    int A[6] = {10, 20, 30, 40, 50, 60};
    int key, i, flag = 0;
    printf("Enter the search key value: ");
    scanf("%d", &key);

    int low = 0, high = 6;
    while(low<=high){
        int mid = (low+high) / 2;
        if( key == A[mid]){
            flag = 1;
            i = mid;            ;
            break;
        }
        else if(key < A[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(flag == 1){
        printf("Key element is found at index %d", i);
    }
    else{
        printf("Key element is not found");
    }
    return 0;
}