#include "defined.h"
unsigned long size;
char *titel_="Hallo";
char *default_string="a";

int main()
{
    //mysql_start();
    print_header();
    print_html_header(titel_);
    //var_copy=getenv("QUERY_STRING");
    parse_content(getdata_force("GET"), "=", "&", "POST");
    parse_content(getdata_force("POST"), "=", "&", "GET");
    //parse_content(getdata_force("POST"), "=", "&", "POST");
       // parse_content(getdata_force("POST"), "=", "&", 0);
//    printf("%s\n%s", getdata_force("GET"),getdata_force("POST"));
//char *post_query=(char*) malloc(100 * sizeof(char));
//char *get_query=(char*) malloc(strlen(default_string)*100* sizeof(char));
    //sprintf(post_query, "%s", getdata_force("POST"));
    //sprintf(get_query, "%s", getdata_force("GET"));
   // printf("%s", post_query);
    //strcpy(get_query, getdata_force("GET"));
    /*if(strcmp(_GET[0][0],"method")==0){
        if(strcmp(_GET[0][1], "normal")==0){
            if(strcmp(_GET[1][0],"action")==0){
                if(strcmp(_GET[1][1],"post")==0){

                    char *content_length = getenv("CONTENT_LENGTH");
                    if(content_length==NULL){

                        goto exit;
                    }
                    else{
                        size = (unsigned long) atoi(content_length);
                        if(size<=0){

                            goto exit;
                        }else{
                            content_post = (char *) malloc(size+1);
                            if(content_post==NULL){
                                free(content_post);
                                goto exit;
                            }*/
                            //scanf("%s", post_var);
                            //printf("%s", post_query);
                            //parse_content(post_query, "=", "&", "POST");
                            printf("<h1>!%s!!</h1>", _POST[0][1]);
                            //printf("Hallo!!!%s", _POST[0][1]);
                            //printf("%d", (int)strlen(*_POST[0]));
                           // for(a=0;a<(int)strlen(_POST[a]))
                            //for(b=0;b<(int)strlen(_POST[0][1]);b++){
                              //  stringReplace("+", "", _POST[0][1]);
                            //}
                            printf("\n%s=%s\n", _POST[0][0],_POST[0][1]);
                            add_tag("ul", "style={float:left;} id='left' class='left'");
                            addslash("ul");
                            //free(content_post);
                            //goto exit;

                        }
                    }
                }
            }
        }
    }else{
        goto exit;
    }
version();

if(error==1){
printf("xddddddd!!!");
}
/*exit:*/    add_tag("textarea", "style={width:500;height:500}");
printf("1. Variable: %s=%s\n", _POST[0][0], _GET[0][1]);
printf("2. Variable: %s=%s\n", _GET[1][0], _GET[1][1]);
    addslash("textarea");
    add_tag("form", "action=http://localhost/cgi-bin/framework/webframework?method=normal&action=post method=post");
        add_tag("input", "type='test' name='site'");
        add_tag("input", "type='submit' id='edit' name='submit' value='suchen'");
        addslash("input");
    addslash("form");
    print_footer();
    return 0;
}
