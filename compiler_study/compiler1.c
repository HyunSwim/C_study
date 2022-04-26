%{
    #include <stdio.h>
    #define NUMBER 256
%}
/*regexp definitions */
num [0-9]+

%%
{num}{return NUMBER;}
%%
int
main(){
    int token;
    while((token==yylex())){
        switch(token){
            case NUMBER: printf("NUMBER: %s, LENGTH:%d\n", yytext, yyleng); break;

            default: print("Error: %s not recognized\n", yytext);
        }
    }
}