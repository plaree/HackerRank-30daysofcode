/*
scanf("%*[\n] %[^\n]", s2);
Uzun stringleri bu şekilde tanımlamak mı gerekiyor? neden? 
bu kısmı anlamadım... Daha çok Çalışmalıyım.
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int i2;
    double d2;
    char s2[101];
    // Read and save an integer, double, and String to your variables.
    scanf("%d", &i2);
    scanf("%lf", &d2);
    scanf("%*[\n] %[^\n]", s2);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i2+i);
    
 
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d2+d);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    printf("%s", s);
    printf("%s", s2);
    
    return 0;
}