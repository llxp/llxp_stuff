#include "defined.h"
char *titel_="Hallo";
int main()
{
    print_header();
    print_html_header(titel_);
    var_copy=getenv("QUERY_STRING");
    //char *bla = (char *) malloc(size+1);
    //char *bla_x = (char *) malloc(size+1);
    //strcpy(bla, var_copy);
    //strcpy(bla_x, var_copy);
    add_tag("textarea", "style={width:500;height:500}");
    //cut_string("=", bla);
    //printf("%s", stringReplace(cut_string("=", bla), "", bla_x));
    printf("%s", parse_content(var_copy, "=", "&&", 0));
    printf("%s", ausgabe_content);
    addslash("textarea");
    //char *text="Hallo";
   // print_content(text);
    //printf("Hello world!\n");
    add_tag("form", "action=http://localhost/cgi-bin/framework/webframework method=get");
        add_tag("input", "type='test' name='site'");
        add_tag("input", "type='submit' id='edit' value='suchen'");
        addslash("input");
    addslash("form");
    //get_get_var(20);
   // (char *)get_get_var();
    //print_tag_content("hallo", 4);

   // printf("%s", var_copy);
    print_footer();
    return 0;
}
