#include <stdio.h>

 int main(){
    unsigned short s;
    int i,j;
    
    printf("Please input [1-666]:");
    scanf("%d",&i);

    
    s = i;

    j = 666;
    if(s >= j){
        printf("You can't input more than %d\n",j);
        return -1;
    }
    
    if(s == (j-1)) { //66201
        printf("congratulations win :)\n");
    }else{
        printf("Sorry %d is not your lucky number\n", s);
    }

    return 0;
}




/*
longcat@kucingliar$gcc -o integer_overflow integer_overflow.c
longcat@kucingliar$./integer_overflow
Please input [1-666]:-1
You can't input more than 666
longcat@kucingliar$./integer_overflow
Please input [1-666]:100
Sorry 100 is not your lucky number
longcat@kucingliar$./integer_overflow
Please input [1-666]:6777
You can't input more than 666
longcat@kucingliar$./integer_overflow
Please input [1-666]:66201
congratulations win :)
*/
