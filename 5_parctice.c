#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks (0 - 100):  ");
    scanf("%d",&marks);

    if (marks <30)
    {
        printf("c \n");
    }

    else if (marks >=30 && marks <=70 )
    {
        printf("B \n");
    }
     
    else if (marks >=70 && marks <=90 )
    {
        printf("A \n");
    }

    else
    {
        printf("A+ \n");
    }

    return 0;

}


/*
O/P:-
/tmp/qbCiIgtd6z.o
Enter marks (0 - 100):  99
A+ 


=== Code Execution Successful ===*/