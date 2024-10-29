# Question 1:Write a c program to replace 0 and 1 in a number

## Answer:

**Code**:
```
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

```

**Explanation**:
In this program , the user have to enter a number .It will use the loop to extract digit from the number .it will take two cases ,first one If the digit is 0, it adds 1 to the modified number, second one If the digit is 1, it effectively does nothing (adds 0) and  Other digits are added unchanged. : Finally, it prints the modified number