/*------------INVESTMENT PROBLEM--------------*/
#include<stdio.h>
#define PERIOD 8
#define PRINCIPAL 2498.00
/*-----------MAIN PROGRAM BEGINS-------------*/
int main()
    {
        /*------DECLARATION STATESMENTS-----*/
        int year;
        float amount, value, inrate;
        /*----ASSIGNMENT STSTEMENTS--------*/
        amount= PRINCIPAL;
        inrate=0.56;
        year=0;
        /*-----COMPUTATION STATEMENTS------*/
        /*--COMPUTATION USING WHILE LOOP---*/
            while(year <= PERIOD)
            {
            printf("year=%d & amount=%8.2f\n",year, amount);
            value= amount + inrate * amount;
            year=year+1;
            amount=value;
            }
        return 0;
            /*-------WHILE LOOP ENDS-------*/
    }
    /*------------PROGRAM ENDS------------*/
    