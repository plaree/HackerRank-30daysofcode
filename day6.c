/*
Objective
Today we will expand our knowledge of strings, combining it with what we have already learned about loops. Check out the Tutorial tab for learning materials and an instructional video.

Task
Given a string, , of length  that is indexed from  to , print its even-indexed and odd-indexed characters as  space-separated strings on a single line (see the Sample below for more detail).

Note:  is considered to be an even index.

Example


Print abc def

Input Format

The first line contains an integer,  (the number of test cases).
Each line  of the  subsequent lines contain a string, .

Constraints

Output Format

For each String  (where ), print 's even-indexed characters, followed by a space, followed by 's odd-indexed characters.

Sample Input

2
Hacker
Rank
Sample Output

Hce akr
Rn ak
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int numString;
    char string[10001];  
    scanf("%d", &numString);
    for(int i=0;i<numString;i++){
        scanf("%s", string);
        int len = strlen(string);
        for(int j=0;j<len;j++){
            if(j%2==0){
                printf("%c",string[j]);
            }
        }
        printf(" ");
        for(int j=0;j<len;j++){
            if(j%2!=0){
                printf("%c",string[j]);
            }
        }
        printf("\n");
    }
    return 0;
}


/* 7/10 yaptı testlerde.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
   
    int numString;
    char string[10001]; 
    scanf("%d", &numString);
    for(int i=0;i<numString;i++){
        scanf("%s", string);
        int t = 0;
        while(string[t]!= '\0' || string[t]!=0){
            printf("%c", string[t]);
            t+=2;
        }
     
        printf(" ");
        t = 1;
        while(string[t]!= '\0' || string[t]!=0){
            printf("%c", string[t]);
            t+=2;
        }
        for(int i=0; i<10001; i++){
        string[i] = '\0';
        }
        printf("\n");
    }
    return 0;
}
*/
