#include <stdio.h>
#include <string.h>



int main() {
    char nameString[100];
    char charArray[20];            


    printf("Enter your full name (String): ");
    scanf("%s", nameString); 

    printf("\n--- Results ---\n");

    // Checking the String
    printf("String Output: %s\n", nameString);
    printf("String Memory Size: %zu bytes\n", sizeof(nameString));
    printf("Actual Text Length: %zu\n", strlen(nameString));


    return 0;
}
