#include <stdio.h>

    void main() {
        int a,b,result;
        char oprator;

        printf("Enter the first number \n"); // \n is used for line break
        scanf("%d",&a);

        printf("Enter the second number \n"); 
        scanf("%d",&b);

        printf("Enter the oprator (+,-,*,/) \n"); 
        scanf(" %c",&oprator);

    

        switch (oprator) {        
        case '+':
            result = a+b;
            printf("%d",result);
            break;
        
        case '-':
            result = a-b;
            printf("%d",result);
            break;
        
        case '*':
            result = a*b;
            printf("%d",result);
            break;
        
        case '/':
            result = a/b;
            printf("%d",result);
            break;
        
        default:
            printf("oprator isn't valid");
            break;
        }
        
        
    }