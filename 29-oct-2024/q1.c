#include <stdio.h>

int main() {
    int number, modifiedNumber = 0;
    int place = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit=number%10;

        
        if (digit==0) {
            modifiedNumber+=1*place;
        } else if (digit==1) {
            modifiedNumber += 0*place;
        } else {
            modifiedNumber += digit*place; 
        }

        number/=10;
        place*=10;  
    }

    printf("Modified number: %d\n", modifiedNumber);

    return 0;
}


