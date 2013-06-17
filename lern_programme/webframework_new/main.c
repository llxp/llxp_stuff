#include "defined.h"
unsigned long size;
char *titel_="Hallo";
char *default_string="a";
int main(void)
{

     print_header();
    print_html_header(titel_);
    //parser_get("method=normal&action=post");
    parser(getdata());
//    parser_post("site=hallo&submit=suchen");
//printf("a%s", getdata());

/*switch(not NULL){
case getdata_force("GET"):parser_get(getdata_force("GET"));
case getdata_force("POST"):parser_post(getdata_force("POST"));
case default: goto weiter;
}*/
    //char *str=getdata_force("POST");
    //hex2ascii(str);
/*    if(str!=NULL){
        if(strcmp(str, "hallo")!=0){
    parse_content(str, "=", "&", "GET");
        }else{
        printf("hallo");}
    }*/
//    printf("<h1>!%s!!</h1>", _POST[0][1]);
    if(error==1){
printf("xddddddd!!!");
}

//printf("%s\n", shifter(masterhash));
//shifter("HALLO");
/*exit:*/    add_tag("textarea", "style={width:500;height:500}");
printf("1. Variable: %s=%s\n", _GET[0][0], _GET[0][1]);
printf("2. Variable: %s=%s\n", _GET[1][0], _GET[1][1]);
        //printf("!");
        //printf("!");
        //parser_post("site=hallo&submit=suchen");

    addslash("textarea");
    add_tag("form", "name='form_1' action=http://localhost/cgi-bin/framework/webframework_new?method=normal&action=post method=post");
        add_tag("input", "type='hidden' name='post'");
        add_tag("input", "type='test' name='site'");
        add_tag("input", "type='submit' id='edit' name='submit' value='suchen'");
        addslash("input");
    addslash("form");
    print_footer();
    return 0;
}
