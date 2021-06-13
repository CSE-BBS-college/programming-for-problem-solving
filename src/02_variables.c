#include <stdio.h>

    int main(int argc, char const *argv[])
    {
        /*
        * data type int is used for integers. 
        * data type float is used for floating values
        * data type char is used for a charecter
        *   
        *  eg: 
        *    data_type  variable_name =  var_value;
        *    int   age = 26;
        *   
        *  while printing the value we have to use format specifiers at place of variables
        *   > %d is format specifier for integers
        *   > %f for floating valuers
        *   > %c for charecters
        *   > %s for string
        *
        *  eg: 
        *      printf("format specifier", variable_name);
        *      printf("%d", age); 
        *
        */

            //integer value
            int number = 3;
            printf("%d \n",number);

            // floating value
            float percentage = 68.3;
            printf("%f \n", percentage);

            // charecter
            char first_letter_of_name = 'A' ;    // charecter always needs to be in single quotation marks
            printf("%c \n", first_letter_of_name);



        /* for using string we have to use a arrey of charecter
        *   eg:    char name[8] = "abhishek";
        *   
        *       printf("%s \n ", name)
        */

            char name[] = "abhishek";
            printf("%s \n ", name) ;

        return 0;
    }
