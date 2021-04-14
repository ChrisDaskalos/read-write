#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char ch;

    fp=fopen("demo.txt","w");
    printf("Enter data (ctrl+d or '#' to quit):\n");

    if(fp==NULL)
    {
        fprintf(stderr,"Error opening file!\n");
    }
    while ((ch = getchar()) != EOF)
         {
            if(ch=='#')
                break;
            
                else
                    putc(ch, fp);
         }
    fclose(fp);

    fp=fopen("demo.txt","r");

    if(fp==NULL)
    {
        fprintf(stderr,"Error opening file!\n");
    }
    printf("\nData entered:\n");
    while ((ch = getc(fp)) != EOF) 
        {   
                 printf("%1c", ch);       
        }

    fclose(fp);

    return 0;


}