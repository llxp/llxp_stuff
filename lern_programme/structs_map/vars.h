#define field_a  4
#define field_b 1024
#define field_c 1000
#define ROWLEN 20
int field[field_a][field_b][field_c], setpoint, player[field_a][field_b][field_c];
int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, word, string, counter_putintable, column, column_, row, lastrow = 0, row_, lastrowx, mode, limiter, limiter_, limiter_column, puffer_;
char character[1];
char character_, file_;
char content[field_c];
char *zero = "13";
struct index lib;
FILE *file;
char puffer[ROWLEN], puffer__[ROWLEN];
