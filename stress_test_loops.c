#include <stdio.h>
#include <stdlib.h>

// I want you to change the increment and n and see at what point you end up with an extra loop

int main(int argc, char** argv){

    float i;
    float increment = 0.00000000000000001; //originally 0.000000001
    float n = 0.0000000000000001; //originally 0.00000001
    int count = 1;

    for (i=0.0; i<n; i+=increment) {
        printf("Loop Number: %d\n", count);
        count++;
    }

    return 0;
} //after 16 zeroes and 1 for increment and 15 zeroes and 1 for n, there is an extra 11th loop
