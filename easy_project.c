#include <stdio.h>

int main() {
   int first_number;
   int second_number;

   printf("Enter first number: ");
   scanf("%d", &first_number);

   printf("Enter second number: ");
   scanf("%d", &second_number);

   int summary = first_number + second_number;

   printf("%d + %d = %d\n", first_number, second_number, summary);

   printf("Enter any key to continue...");
   scanf("%d");
}
