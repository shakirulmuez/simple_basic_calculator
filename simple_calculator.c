// Title: Basic Calculator using C
// Author: Shakirulmuez
// Date: July 30, 2019

#include<stdio.h>
int operation = 1, value1, value2, result; // declare the variable

// main program start
int main(void){
    printf("\nWelcome to basic calculator\n\n");    
    
 while(operation > 0){
        printf("Select the operation\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
        printf("Press 0 to exit\n");
        scanf("%d", &operation);   
        if(operation == 1){
            printf("Selected operation is addition\n");
            printf("Insert the interger:\n");
            scanf("%d%d", &value1, &value2);        
            printf("%d + %d = %d\n\n", value1, value2, result = value1 + value2);
        }else if(operation == 2){
            printf("Selected operation is subtraction\n");
            printf("Insert the interger:\n");
            scanf("%d%d", &value1, &value2);
            printf("%d - %d = %d\n\n", value1, value2, result = value1 - value2);
        }else if(operation == 3){
            printf("Selected operation is multiplication\n");
            printf("Insert the interger:\n");
            scanf("%d%d", &value1, &value2);        
            printf("%d * %d = %d\n\n", value1, value2, result = value1 * value2);
        }else if(operation == 4){
            printf("Selected operation is division\n");
            printf("Insert the interger:\n");
            scanf("%d%d", &value1, &value2);        
            printf("%d / %d = %d\n\n", value1, value2, result = value1 / value2);
        }
    }
return(0);
}