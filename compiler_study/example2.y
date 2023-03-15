%{
#include <ctype.h>
#include <stdio.h>
<<<<<<< HEAD
#define YYSTYPE double
=======
>>>>>>> compiler_assignment_2
%}
%union {double rval;}
%token <rval> NUMBER
%token OTHER
%left '+' '-'
%left '*' '/'
%right UMINUS
<<<<<<< HEAD
%%
lines : lines expr '\n' { printf("%g\n", $2); }
| lines '\n'
| /* empty */
;
expr : expr '+' expr { $$ = $1 + $3; }
| expr '-' expr { $$ = $1 - $3; }
| expr '*' expr { $$ = $1 * $3; }
| expr '/' expr { $$ = $1 / $3; }
| '(' expr ')' { $$ = $2; }
| '-' expr %prec UMINUS { $$ = -$2; }
| NUMBER
;
%%
int yylex()
{ int c;
while ((c = getchar()) == ' ')
;
if ((c == '.') || isdigit(c))
{ ungetc(c, stdin);
scanf("%lf", &yylval);
return NUMBER;
}
return c;
}
int main()
{ if (yyparse() != 0)
fprintf(stderr, "Abnormal exit\n");
return 0;
}
int yyerror(char *s)
{ fprintf(stderr, "Error: %s\n", s);
=======
%type <rval> expr
%%
lines   : lines fin
        | lines expr '\n'
        | lines '\n'
        ;
fin     : expr ';' {fprintf("%d\n", $1);}
        ;
expr    : expr '+' expr                 { $$ = $1 + $3; }
        | expr '-' expr                 { $$ = $1 - $3; }
        | expr '*' expr                 { $$ = $1 * $3; }
        | expr '/' expr                 { $$ = $1 / $3; }
        | '(' expr ')'                  { $$ = $2; }
        | '-' expr %prec UMINUS         { $$ = -$2; }
        | NUMBER
        ;
%%
int yylex(){
        int c;
        while ((c=getchar()) == ' ');
        if((c=='.') || isdigit(c)){
                ungetc(c, stdin);
                scanf("%lf", &yylval);
                return NUMBER;
        }
        return c;
}
int main(){
        if(yyparse() != 0)
                fprintf(stderr, "Abnormal exit\n");
        return 0;
}
int yyerror(char *s){
        fprintf(stderr, "Error: %s\n", s);
>>>>>>> compiler_assignment_2
}