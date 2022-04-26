%{
#include<stdio.h>
%}

%option noyywrap
%%

[0-9]+ {printf("%s\n", yytext);}
.|\n { }

%%
main() {yylex();}