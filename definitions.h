#ifndef _definitions_h_
#define _definitions_h_


void rtrim(char *str){          //funcion que elimina espacios hacia la derecha
    size_t n;
    n = strlen(str);
    while (n > 0 && (isspace((unsigned char)str[n - 1]) || (unsigned char)str[n - 1] == ' ')) {
        n--;
    }
    str[n] = '\0';
}

void ltrim(char *str){          //funcion que elimina espacios hacia la izquierda
    size_t n;
    n = 0;
    while (str[n] != '\0' && isspace((unsigned char)str[n])) {
        n++;
    }
    memmove(str, str + n, strlen(str) - n + 1);
}

void trim(char *str){           //funcion que elimina espacios hacia la izquierda y derecha
    rtrim(str);
    ltrim(str);
}

void string_toupper(int num){   //funcion que convierte a mayusculas
    int i;
    for(i=0;i<num;i++)
        p[i]=toupper(p[i]);
    auxp=p;
    p=&p[i];
}

typedef struct t_cmddata{
    char    *name;
    char    val1;
    char    val2;
    char    *opcode;
} t_cmddata;

typedef struct t_asmoperand{
    char    name[20];
    char    val1;
    char    bin1[20];
    char    val2;
    char    bin2[20] ;
} t_asmoperand;

typedef struct t_data{
    char    data[20];
    int     type;
    int     value;
    char    var;
} t_data;



#endif _definitions_h_
