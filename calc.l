%{
#include "calc.tab.h"
#include <stdlib.h>

void yyerror(char *);

int_type = 1;
float_type = 2;
%}

/* regexp definitions */
delim [ \t]
ws {delim}+
digit [0-9]
letter [A-Za-z]
id {letter}({letter}|{digit})*
integer (0|([1-9]{digit}*))
number {integer}\.{digit}+((E|e)[+\-]?{digit}+)?
operator [-+()/*]
semicolon ;
newline \n

%%

{number}  { strcpy(yylval.s_val, yytext);
           return FLOAT;
          }
{integer} { strcpy(yylval.s_val, yytext);
            return INT;
          }
(int)     { yylval.i_val = int_type;
            return TYPE;
          }
(float)   { yylval.i_val = float_type;
            return TYPE;
          }
{id}      { strcpy(yylval.s_val, yytext);
            return IDENTIFIER;
          }
{operator}{ return *yytext; }
(=)       { strcpy(yylval.s_val, yytext);
            return EQ;
          }
{ws} ;
{semicolon} { return *yytext; }
{newline} { return *yytext; }
. { return OTHER; }

%%
int yywrap(void)
{
  return 1;
}