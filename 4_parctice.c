#include<stdio.h>
int main(){
    int marks;
    printf("Enter marks(0 - 100): ");
    scanf("%d",&marks);

    if(marks >=0 && marks <=30){
        printf("FAIL \n");
    }

    else if (marks >=30 && marks <=100){
        printf("PASS \n");
    }
    else{
        printf("Invalid Marks \n");
    }
    return 0;
}

/*
O/P:-
Enter marks(0 - 100): 1000
Invalid Marks 


=== Code Execution Successful ===
*/