
#include<stdio.h>
#include<string.h>
int main()
{
    FILE *input;
    input = fopen("input.txt","r");

    char Char,tmp[100],oper[105];
    int i, j= 0,opt = 0,keyy = 0;

    char keyword[40][10] =
    {
        "int","long","float","char","register","return","unsigned","void","volatile","while",
        "auto","break","case""const","continue","default","do","double","else","enum","extern",
        "for","goto","short","signed","sizeof","static","struct","switch","typedef","union","if"
    };


    while(Char=fgetc(input))
    {
        if(Char == EOF)
            break;

        tmp[j++] = Char;

        if(Char == '+' || Char == '-' || Char == '*' || Char == '/' || Char == '%' || Char == '=')
        {
            oper[opt] = Char;
            opt++;
        }
        else if(Char ==' ' || Char == '\n')
        {
            tmp[j-1] = '\0';
            for(i = 0; i<32; i++)
            {
                if(strcmp(keyword[i],tmp)==0)
                {
                    keyy++;
                    printf("Keywords : %d) %s\n",keyy, tmp);
                    break;
                }
            }
            j = 0;
        }

    }
    printf("Total number of keywords in the text = %d\n",keyy);

    oper[opt] = '\0';
    printf("\nOperators int the text: ");
    for(i = 0; i<opt; i++)
    {
        printf("%c,", oper[i]);
    }
    printf("\nTotal number of operator in the text = %d\n",opt);


    fclose(input);

    return 0;
}
