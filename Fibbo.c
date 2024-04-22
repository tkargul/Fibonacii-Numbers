
#include <stdio.h>
#include <stdbool.h> // bool type
int Fibonacii[] = {
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,
144, 233, 377, 610, 987, 1597, 2584, 4181,
6765, 10946, 17711, 28657, 46368, 75025, 121393,
196418, 317811, 514229, 832040 }; 

int s = (sizeof(Fibonacii)/sizeof(Fibonacii[0])); // calc size of Array with Fibo numbers

bool Fi (int Array[], int size, int val){ // args: Array[] - contain known Fibonacci numbers, size - size of this Array, val - number to check
 int i = 0;
 do{
    if (val == Array[i]) return true;
    i++;
 } while(i<size);
 
 return 0;
}
    

int main(){
    
   int n;
 
    do{
       printf("😸: Wprowadź liczbę do sprawdzenia (lub -1, żeby zakończyć): "); 
       scanf("%d", &n);
      
       if(n ==-1) break;
       if(n>832040 || n<0){ printf("🙀: Wprowadź wartość z zakresu (min:0 - max:832040)\n"); continue;}
      
       if(Fi(Fibonacii, s, n)){ 
        
         printf("\t😻: Tak, to Liczba Fibo\n");
      }
        else printf("😿: Nie to nie jest liczba Fibo\n");
  
    
    } while(n!=-1);
    
    printf("\n😽 😽 😽 😽\nWcisnieto -1, do widzenia!\n");
    return 0;
}
