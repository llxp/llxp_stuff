char * cut_string(char *search_c, char *string_content){
    char *searchStart_c;
    int string_find;
    searchStart_c = strstr(string_content, search_c);
	if(searchStart_c == NULL) {
		return string_content;
	}else{
	    string_find=strcspn(string_content, search_c);
	    string_content[string_find]='\0';
	}
return string_content;
}
