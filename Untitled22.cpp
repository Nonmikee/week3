#include<stdio.h>
 
int main()
{   
    int loop;
    int input;
    int i;
    int min;
     
    printf(" Enter number for loop : ");
    scanf("%d", &loop);
    printf("\n");
     
    for(i = 0; i < loop; i++)
    {
        printf(" Number #%d : ", i+1);
        scanf("%d", &input);
         
        if(i==0 || input < min)
        {
            min = input;
        }
    }
     
    printf("\n Minimum is %d\n\n", min);
     
    return 0;
}
