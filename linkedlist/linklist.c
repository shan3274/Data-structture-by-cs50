 #include<stdio.h>
 #include<stdlib.h>

typedef struct node
 {
    int number;
    struct node *next;
 }node;
 

 int main(int argc, char *argv[])
 {
    node *list = NULL;

    for (int i = 0; i < argc; i++)
    {
        int number = atoi(argv[i]);
        node *n = malloc(sizeof(node));
        if (n == NULL)return 1;
        n->number = number;
        n->next = list;
        list = n;
    }
    
    // printing whole list
    node *ptr = list;
    while (ptr != NULL)
    {
       printf("%i",ptr->number);
       ptr = ptr->next;
    }
    




    // node *n1 = malloc(sizeof(node));
    // node *n2 = malloc(sizeof(node));
    // node *n3 = malloc(sizeof(node));

    // n1->number = 1;
    // n1->next = n2;

    // n2->number = 2;
    // n2->next = n3;

    // n3->number = 3;
    // n3->next = NULL;

    // list = n1;

    // while (list != NULL && list->next != NULL)
    // {
    //     printf("%i\n",list->number);
    //     list = list->next;
    // }
    

    return 0;
 }
 