#include <stdio.h>
#include <string.h>

void main()
{
    char icode[10][30],str[20],opr[10];
    int i=0;
    printf("\nEnter the set of intermediate code:\n");
    do
    {
        scanf("%s",icode[i]);
    }while(strcmp(icode[i++],"Exit")!=0);
    printf("\nTarget Code generation");
    printf("\n*********");
    i=0;
    do
    {
        strcpy(str,icode[i]);
        switch(str[1])
        {
            case '+': strcpy(opr,"ADD");
                      break;
            case '-': strcpy(opr,"SUB");
                      break;
            case '*': strcpy(opr,"MUL");
                      break;
            case '/': strcpy(opr,"DIV");
                      break;
        }
        printf("\n\tMOV %c,R%d",str[0],i);
        printf("\n\t%s %c,R%d",opr,str[2],i);
    }while(strcmp(icode[++i],"Exit")!=0);
}
