#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    // creating dynamic array
    int *list = malloc(3 * sizeof(int));
    if(list == NULL) return 1;
    list[0]= 1;
    list[1]= 2;
    list[2]= 3; 


    // resizeing array
    int *temp = malloc(3 * sizeof(int));
    if(temp == NULL) {
        free(list);
        return 1;
    }
     for (int i = 0; i < 3; i++){
        temp[i] = list[i];
     }
     temp[3] = 4;
    //  free old memroy
     free(list);
    //  assign new size
     list = temp;
    for (int i = 0; i < 4; i++)
    {
       printf("%i\n",list[i]);
    }
    
    return 0;
}
