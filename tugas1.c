#include <stdio.h>
#include <stdlib.h>

//Refrensi diambil dari w3school
//https://www.w3schools.in/c-program/check-whether-the-given-number-is-a-prime/

int main(){
    int number = 20210;
    int primeCheck, isPrime = 0;

    for(int i = 1; i<= number; i++){

        if(number % i == 0){
            isPrime++;
        }
    }
     if(isPrime == 2){
        printf("Angka %d adalah angka prima\n", number);

    }else{
         printf("Angka %d adalah BUKAN angka prima\n", number);

    }
}
