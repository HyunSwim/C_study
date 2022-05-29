%{
/* Definition section */
#include<stdio.h>
#include "y.tab.h"
extern int yylval;
%}
number [0-9]+\.?|[0-9]*\.[0-9]+
/* Rule Section */
%%
{number} {
		yylval=atoi(yytext);
		return NUMBER;

	}
. return yytext[0];

%%

int yywrap()
{
return 1;
}
