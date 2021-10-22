%{
    #include<stdio.h>
    #include<stdlib.h>
    #include <string.h>
%}

* on commence les definitions *


typedef enum {
*Mots Cles*
ID_TOKEN, PROGRAM_TOKEN,CONST_TOKEN, VAR_TOKEN,BEGIN_TOKEN,END_TOKEN,IF_TOKEN,THEN_TOKEN,WHILE_TOKEN,DO_TOKEN,READ_TOKEN,WRITE_TOKEN,

*les symboles speciaux*
PV_TOKEN,PT_TOKEN,PLUS_TOKEN,MOINS_TOKEN,MULT_TOKEN,DIV_TOKEN,VIR_TOKEN,AFF_TOKEN,INF_TOKEN,INFEG_TOKEN,SUP_TOKEN,SUPEG_TOKEN,DIFF_TOKEN,PO_TOKEN,PF_TOKEN,FIN_TOKEN,EOF_TOKEN, ERREUR_TOKEN

*les regles*
ID_TOKEN,NUM_TOKEN
} CODES_LEX ;


*on definie une liste qui contient tous nous elements*
Const char* mots_cles_tokens[]={"program","const","var","begin","end","if","then","while","Do","read","write"};
Const char* symboles_token[]={";",".","+","-","*","/",",",":=","<","<=",">",">=","<>","(",")","EOF"};
Const int Regles_token ={ID, NUM};