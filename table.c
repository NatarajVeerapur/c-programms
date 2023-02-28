    #include <stdio.h>  
    void main()  
    {  
        int num, i;  
        printf (" Enter a number for it's table\n");  
        scanf (" %d", &num);  
        printf ("Table of %d\n", num);  
        for ( i = 1; i <= 10; i++)  
        {  
            printf ("%d * %d = %d\n", num, i, (num*i));  
        }    
    }  