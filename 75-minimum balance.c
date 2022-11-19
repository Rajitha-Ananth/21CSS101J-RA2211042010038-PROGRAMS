#include <stdio.h>
float main() {
    float balance,minimum_balance=1000;
    printf("RA2211042010038\n")
    printf("enter the balance :");
    scanf("%f",&balance);
    if(balance>minimum_balance) {
        printf("the balnce is sufficient");
    }
    else {
        printf("the balance is insufficient");
    }
    return 0;
}
