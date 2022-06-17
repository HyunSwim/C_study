%{
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

FILE *yyin, *outfile;

int yylex(void);
void yyerror(const char *msg);
int lookup_sym_tab(const char *);

struct symbol {
    char word[200];
    int type;
};

struct symbol sym_tab[200];
char word[5];
int word_index = 0;
int sym_index = 0;
int word_type;
int int_type = 1;
int float_type = 2;
int idx;
%}

%union  {
                float f_val;
                int i_val;
                char s_val[256];
        }

%token <s_val> FLOAT
%token <s_val> INT
%token <i_val> TYPE
%token <s_val> IDENTIFIER
%token <s_val> EQ
%token OTHER

%left '+' '-'
%left '*' '/'
%right UMINUS

%type <s_val> expr

%%
lines : lines mid
      | lines '\n'
      | /* empty */
      ;

mid   : last ';'
      ;

last : asignment
     | declare
     ;

asignment : IDENTIFIER EQ expr  { idx = lookup_sym_tab($1);
                                if (idx == -1) {
                                fprintf(outfile, "Error!\n%s is unknown id\n", $1);
                                exit(0);
                                }

                                fprintf(outfile, "%s = %s\n", $1, $3);
                                if (word_type != sym_tab[idx].type) {
                                  fprintf(outfile, "//warning: type mismatch\n");
                                }

                                word_type = 0;}
     ;

declare : TYPE IDENTIFIER { if (lookup_sym_tab($2) != -1) {
                          fprintf(outfile, "Error!\n(%s is already declared)\n", $2);
                          exit(0);
                         }
                         strcpy(sym_tab[sym_index].word, $2);
                         sym_tab[sym_index++].type = $1; }
     ;

expr : INT                 { word_type |= int_type;
                             strcpy($$, $1); }
     | FLOAT               { word_type |= int_type;
                             strcpy($$, $1); }
     | IDENTIFIER          { idx = lookup_sym_tab($1);
                             if (idx == -1) {
                                fprintf(outfile, "Error!\n(%s is unknown id)\n", $1);
                                exit(0);
                             }
                             word_type |= sym_tab[idx].type;
                             strcpy($$, $1);}
     | expr '+' expr       { sprintf(word, "t%d", word_index++);
                             strcpy($$, word);
                             fprintf(outfile, "%s = %s + %s\n", word, $1, $3); }
     | expr '-' expr       { sprintf(word, "t%d", word_index++);
                             strcpy($$, word);
                             fprintf(outfile, "%s = %s - %s\n", $$, $1, $3); }
     | expr '*' expr       { sprintf(word, "t%d", word_index++);
                             strcpy($$, word);
                             fprintf(outfile, "%s = %s*%s\n", $$, $1, $3); }
     | expr '/' expr       { sprintf(word, "t%d", word_index++);
                             strcpy($$, word);
                             fprintf(outfile, "%s = %s / %s\n", $$, $1, $3); }
     | '(' expr ')'        { strcpy($$, $2); }
     | '-' expr %prec UMINUS { sprintf(word, "t%d", word_index++);
                               strcpy($$, word);
                               fprintf(outfile, "%s = -%s\n", $$, $2); }
     ;
%%

void yyerror(const char *s)
{
  printf("%s\n", s);
}

int main(int argc, char **argv)
{
  yyin = fopen(argv[1], "r");
  outfile = fopen("output.txt", "w");
  yyparse();
  fclose(yyin);
  fclose(outfile);
  return 0;
}

int lookup_sym_tab(const char *word)
{
  int index = -1;
  for (int i = 0; i < sym_index; i++) {
    if (!strcmp(sym_tab[i].word, word)) {
      index = i;
      break;
    }
  }
  return index;
}