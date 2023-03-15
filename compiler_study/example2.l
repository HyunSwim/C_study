<<<<<<< HEAD
%option noyywrap
%{
#include "y.tab.h"
extern double yylval;
%}
number [0-9]+\.?|[0-9]*\.[0-9]+
%%
[ ] { /* skip blanks */ }
{number} { sscanf(yytext, “%lf”, &yylval);
return NUMBER;
}
\n|. { return yytext[0]; }
%%
=======
%{
#include "y.tab.h"
void yyerror(char *);
%}
delim [ \t]
ws {delim}+
digit [0-9]
deci (0|({digit}{digit}*))
number {deci}(\.{digit}+)?((E|e)[+\-]?{digit}+)?
operator [-+/*=()]
fin ;
newline \n
%%

{number} { yylval.rval = atof(yytext); return NUMBER; }
{operator} { return yytext[0]; }
{ws} ;
{fin} { return yytext[0]; }
{newline} { return yytext[0]; }
. { return OTHER; }

%%
int yywrap(void)
{
  return 1;
}
>>>>>>> compiler_assignment_2
