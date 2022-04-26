%{
#include<stdio.h>
int lineno = 1;
%}

line .*\n
%option noyywrap
%%
{line} {printf ("%5d %s", lineno++, yytext);}
%%
int main()
{while(1){yylex();} return 0;}