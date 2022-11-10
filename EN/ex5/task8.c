//
// Created by Stefan Andonov on 11/10/22.
//

#include<stdio.h>

int main () {
    int previous, current;
    int sum,maxSum,maxPosition;
    int currentPosition=2;
    scanf("%d %d", &previous, &current);
    sum=previous+current;
    maxSum=sum;
    maxPosition=1;

    previous=current;

    while(scanf("%d", &current)){
        sum=previous+current;
        if (sum>maxSum){
            maxSum=sum;
            maxPosition=currentPosition;
        }

        currentPosition++;
        previous=current;
    }


    printf("Max sum: %d Positions: %d,%d", maxSum, maxPosition-1, maxPosition);
    return 0;
}
