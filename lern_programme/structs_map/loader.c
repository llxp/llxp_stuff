int loader(char *file_){
//    if(argc==1){
        file = fopen(file_, "r");
        if(NULL!=file){
            printf("opening: '%s' to read: \n\n", file_);
            while(fgets(puffer, ROWLEN, file)!=0)
    {
        printf("line: %s", puffer);
        /*for(w=0;w<strlen(puffer); w++){
        puffer_ = (CharToInt(puffer)-2);
        puffer__[w-1] = puffer_;
        //sprintf(puffer__[w], "%i", puffer_);
        puffer[0] = '\0';
        printf("%s\n", puffer__);
        }*/
        putintable_inlast(puffer, 0);
    }
            fclose(file);
        }else{
             printf("File not found\n");
            return EXIT_FAILURE;
        }

  //  }
  return EXIT_SUCCESS;

}
