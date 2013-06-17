#define field_a  4
#define field_b 1024
#define field_c 1024
#define ROWLEN 20
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"
#include "funcs.h"
#include "funcs_bin.h"

char puffer_[field_c];
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, row_, lastrowx, mode, limiter, limiter_, limiter_column/*, puffer_*/, check, zahl;
char character[1], character__[sizeof(field_c)];
char character_, file_;
char content[field_c];
char *zero = "13";
FILE *file;
char puffer[ROWLEN], puffer__[ROWLEN];
int bla=0, lastrow = -1;


//Funktionsübersicht
int saver(char *file_);
int loader(char *file_);
int from_where(char *search);
int putintable(char *character_, int *column, int *row/*, int player[4][64][100]*/);
int putintable_inlast(char *content, int column_);
int print_field(int field[field_a][field_b][field_c], int mode, int limiter_row, int limiter_column, int limiter_);
int init(void);
//Funktionsübersicht

typedef struct knoten KNOTEN;
