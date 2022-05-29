%{
/* Definition section */
#include<stdio.h>
int flag=0;
%}

%token NUMBER

%left '+' '-'

%left '*' '/' '%'

%left '(' ')'

/* Rule Section */
%%

ArithmeticExpression: expr{

		printf("%d\n", $$);
		};
lines   : lines expr '\n' {printf("%g\n", $2);}
        | lines '\n'
        | /* empty */
        ;
expr    : expr'+'expr {$$=$1+$3;}
        | expr'-'expr {$$=$1-$3;}
        | expr'*'expr {$$=$1*$3;}
        | expr'/'expr {$$=$1/$3;}

|'('expr')' {$$=$2;}

| expr ';' {$$ = $1;}
| NUMBER

;

%%

//driver code
void main()
{
    yyparse();
}

void yyerror()
{
printf("error\n");
}
