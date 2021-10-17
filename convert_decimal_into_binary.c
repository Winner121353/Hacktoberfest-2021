//Problem : wanted to convert given decimal number into its binary form
//converting a decimal number into binary

#include <stdio.h>
#include <stdlib.h>

void binary(int n);
int size_of_the_requiredArray(int n);


// main function
int main()
{
    //getting a decimal input from the user
    int number;
    printf("Enter a decimal number: ");
    scanf("%d", &number);

    binary(number);
    return 0;
}

// function to convert decimal to binary
void binary(int n){  //n =50

    //finding the size of the array == how many times the number divide by 2
    int size = size_of_the_requiredArray(n); //k = 6

    int binaryArray[size];

    // array starting index
    int i=0;

    while(n!=0){
       binaryArray[i] = n%2;
       n = n/2;
       i++;
   }

   for(int j=size; j>=0; j--){
      printf("%d",binaryArray[j]);
   }

}

// determine length size of binary number array
int size_of_the_requiredArray(int n){ // n=50

    int k = 0;
    while(n!=0){
       n = n/2;
       k++;
    }

    return k-1;
}
