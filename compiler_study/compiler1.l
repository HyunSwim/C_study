%{
    #include <stdio.h>
    #define NUMBER 256
    #define PLUS 255
    #define MINUS 254
%}
/*regexp definitions */
num [0-9]+
%option noyywrap

%%
{num} {return NUMBER;}
"+" return PLUS;
"-" return MINUS;
.|\n { }
%%

int
main(){
    int token;
    char* one;
    int i = 0;
    int j = 0;
    int k = 0;
    char ch;
    while((token=yylex())){
        switch(token){
            case NUMBER:
                if(k==0)
                    k = 1;
                else{
                    printf("Error\n");
                    return 0;
                }
                break;
            case PLUS:
                if(k==1)
                    k = 0;
                else{
                    printf("Error\n");
                    return 0;
                }
                break;
            case MINUS:
                if(k==1)
                    k = 0;
                else{
                    printf("Error\n");
                    return 0;
                }
                break;
            default:
                printf("Error\n");
                return 0;
        }   
    }
    while((token=yylex())){
        switch(token){
            case NUMBER:
                if(i == 0){
                    printf("%s ",yytext);
                    i = 1;
                }
                else{
                    printf("%s %s ",yytext,one);
                    j = 0;
                }
                break;
            case PLUS:
                if(j==1)
                    printf("Error\n");
                one = "+";
                j = 1;
                break;
            case MINUS:
                if(j==1)
                    printf("Error\n");
                one = "-";
                j = 1;
                break;
            default: printf("Error\n");
        }   
    }
    printf("\n");
}