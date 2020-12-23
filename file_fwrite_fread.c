#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    // ***************** file open for write ********************

    FILE *fptr_write = fopen ("file.txt","w");

    // char str[16];

    // Dynamically allocate memory using malloc() 
    char *str;
    str = (char*)malloc(10 * sizeof(char));    

    // // Dynamically allocate memory using calloc()        
    // char *str;
    // str = (char *)calloc(15, sizeof(char)); 

    printf ("enter your message : ");
    scanf ("%s", str);

    if (fptr_write == NULL)
        printf ("\nfile couldnt be created");
    
    else 
        fwrite (str, 1, 10, fptr_write);

    // printf("%ld\n", sizeof(str));
    // free(str);
    fclose (fptr_write);



    // *************** file open for read ******************

    FILE *fptr_read = fopen ("file.txt","r");

    // char buffer[100];   // create a char arry for copy

    char *buffer;   // create a char arry for copy
    buffer = (char*)malloc(100* sizeof(char));    
    

    if (fptr_read == NULL) 
        printf ("\nfile couldnt be created");
    
    else{
        fread (buffer, 1, 10, fptr_read);
    } 


    printf ("%s\n", buffer);
    // printf("%ld\n", sizeof(str));

    fclose (fptr_read);  
    free (buffer);
    printf ("\n");
    return 0;
}