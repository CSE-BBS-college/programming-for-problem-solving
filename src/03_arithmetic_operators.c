#include <stdio.h>

 int main() {
   
    /*  Arithmetic Operators 
    *     + => 	Addition
    *     -	=>  Subtraction
    *     *	=>  Multiplication
    *     /	=>  Division
    *     %	=>  Modulus  
    * 
    *   eg: 
    *        15/5  will be equal 3
    */

    int  a = 15;
    int  b = 3;
    int add, subs, multip, divide, modul;

    add = a+b;
    printf("Addition of a & b is %d \n \n", add  );  // addition 

    subs = a-b;
    printf("Substraction of a & b is %d \n \n", subs );  // substraction

    multip = a*b;
    printf("multiplication of a & b is %d \n \n", multip );  // multiplication
    
    divide = a/b;
    printf("division of a & b is %d \n \n", divide );  // division

    modul = a%b;
    printf("modulus of a & b is %d \n \n", modul );    // modulus

    

     return 0;
 }