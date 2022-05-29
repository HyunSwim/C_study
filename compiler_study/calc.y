%{
	#include<stdio.h>
%}

%token NAME NUMBER
%left '-' '+'
%left '*' '/'
%left '(' ')'
%right UMINUS

%%
statement	: exp ';' {printf("%d\n",$1);}
			;

exp : NUMBER {$$ == $1;}
	|exp '+' exp {$$ = $1 + $3 ;}
	|exp '-' exp {$$ = $1 - $3 ;}
	|exp '*' exp {$$ = $1 * $3 ;}
	|exp '/' exp {$$ = $1 / $3 ;}
	| '(' exp ')' {$$ = $2 ;}
	| '-' exp %prec UMINUS {$$ = -$2 ;}
	| exp 'E' exp {
		if($3 > 0){
			int a = $1;
			for(int i=0;i<$3-1;i++){
				a *= $1;
			}
			$$ = a;
		}
		else if($3 == 0)
			$$ = $1;
		else{
			float a = $1;
			int j = -$3;
			for(int i=0;i<j;i++){
				a /= $1;
			}
			$$ = a;
		} 
		;}
	;

%%

int main()
{
yyparse();
}

int yyerror()
{
	printf("error\n");
}

int yywrap()
{
return 1;
}
