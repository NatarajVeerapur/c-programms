    #include <stdio.h>  
    void main()  
    {  
        int num, i, sum = 0;  
        printf(" Enter a positive number\n");  
        scanf("%d", &num);
        for (i = 0; i <= num; i++)  
        {  
            sum = sum + i;  
        }  
        printf("Sum of the first %d number is: %d\n", num, sum);     
    }  