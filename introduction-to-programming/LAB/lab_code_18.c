// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 18
// Experiment Name:  Check a string is palindrome or not ( without strcmp and with strcmp function)

#include <stdio.h>
#include <string.h>


int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;
    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    // Only need to loop halfway through the string
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("'%s' is a Palindrome.\n", str);
    } else {
        printf("'%s' is Not a Palindrome.\n", str);
    }

    return 0;
}