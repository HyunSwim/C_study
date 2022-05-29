%{
	#include<stdlib.h>
	#include "y.tab.h"
	#define YYSTYPE double
%}
operator [+-+/()E]
%%

[0-9]+\.?|[0-9]*\.[0-9]+ {yylval=atof(yytext); return NUMBER;}

[\t\n];

. return yytext[0];

%%
