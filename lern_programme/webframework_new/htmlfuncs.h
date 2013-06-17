/*char *tags[10][10] =
{
    {'html'},
    {'head'},
    {'body'},
    {'div'},
    {'p'},
    {'ul'},
    {'li'},
    {'table'},
    {'tbody'},
    {'tr'},
    {'td'},
    {'br'},
    {'\0'}
};*/
extern char tags[][20];
extern char vars[][20];
extern int vars_length;
extern char *var;
extern int pos, false_var_error, false_var_error_, ggv_c;
extern char *getvar;
extern char *var_copy, *puffer_x;
extern unsigned long size;

void print_header(void);
void print_html_header(char *titel);
int add_tag(char *tag, char *attr);
int print_html(char *html);
int print_content(char *content/*auszugebender text als div*/);
void print_footer();

void print_header(void) {
   printf("Content-Type: text/html\n\n");
}

void print_html_header(char *titel) {
   printf("<html><head>\n");
   printf("<title>%s</title>\n",titel);
   printf("</head><body>\n");
   //return 0;
}

int add_tag(char *tag, char *attr){
    printf("<%s %s>", tag, attr);
    return 0;
}
int print_tag_content(char *tc, int t_choice){
    printf("<%s>%s", tags[t_choice], tc);
    printf("</%s>", tags[t_choice]);
    return 0;
}
int addslash(char *name){
    printf("</%s>", name);
    return 0;
}
int print_content(char *content/*auszugebender text als div*/){
    add_tag("div", "");
    printf("%s\n", content);
    return 0;
}
int print_inline_css(char *element, char *attr_){
    return 0;
}
void print_footer(){
    printf("</body></html>");
}


char get_get_var(int position){
    var = getenv("QUERY_STRING");

    if(var!=NULL){
        ggv_c=1;
        if(strchr(var, (int)'=')){
            pos = strcspn(var, "=");
            var[pos] = '\0';
            //printf("%s\n", var);
            for(b=0;b<vars_length;b++){
                if(strcmp(vars[b], var)==0){
                    //printf("vars:%s\n",var);
                    //printf("sizeof(vars): %d\n", vars_length);
                    if(false_var_error_==position){
                    printf("%s", var);
                    }
                    false_var_error_++;
                }
                else{
                    false_var_error=1;
                }
            }
            if(false_var_error==1){
                if(false_var_error_==0){
                    printf("<h1>falsche variable</h1>\n");
                }
            }
            //printf("Sie browsen mit : %s\n",var);
            //printf("%s", var);
        }
        else{
            goto a;//printf("angegebner Parameter: %s\n", var);
        }
    }
    else{
a:        return 0;//printf("keine Parameter angegeben!\n");
    }
    return 0;
}

char get_post_var(int position){
    puffer_x = (char *) malloc(size+1);
    if(NULL==puffer_x){
        return 0;
    }
    return 0;
}
int save_hml(int on){
return 0;
}

char *build_menu(void){

    return NULL;
}
