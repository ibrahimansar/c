#include <stdio.h>
#include <stdlib.h>
int main(void){
    int arr_size;
    int array1[] = {5, 5, 2 };
    arr_size = sizeof(array1)/sizeof(array1[0]);
    printf("%d",test(array1, arr_size));
    int array2[] = {5, 5, 2, 5, 5 };
    arr_size = sizeof(array2)/sizeof(array2[0]);
    printf("\n%d",test(array2, arr_size));
    int array3[] = {5, 6, 2, 9 };
    arr_size = sizeof(array3)/sizeof(array3[0]);
    printf("\n%d",test(array3, arr_size));
    }   
    
  int test(int nums[], int arr_size)
         {
            int ctr = 0;
            for (int i = 0; i < arr_size - 1; i++)
            {
                if (nums[i] == 5 && (nums[i + 1] == 5 || nums[i + 1] == 6)) ctr++;
            }
            return ctr;
        }