//Write a C program to create new array from a given array of integers shifting all even numbers before all odd numbers.

#include <stdio.h>
#include <stdlib.h>
int main(void){ 
    int arr_size;
    int a1[] = {1, 2, 5, 3, 5, 4, 6, 9, 11};
    arr_size = sizeof(a1)/sizeof(a1[0]);
    printf("Elements in original array are: ");  
    print_array(a1, arr_size);
    
     int size = arr_size, index = 0;
            for (int i = 0; i < size; i++)
            {
                if (a1[i] % 2 == 0)
                {
                    int temp = a1[index];
                    a1[index] = a1[i];
                    a1[i] = temp;

                    index++;
                }
            }    
    printf("\nElements in new array are: ");  
    print_array(a1, arr_size);
    }         

 print_array(int parray[], int size)
  {
   int i;      
   for( i=0; i<size-1; i++)  
    {  
        printf("%d, ", parray[i]);  
    } 
   printf("%d ", parray[i]);  
   printf("\n");   
  }