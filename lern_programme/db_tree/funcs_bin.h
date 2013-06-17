typedef struct knoten KNOTEN;
extern int zahl;
KNOTEN *einordnen(KNOTEN *zeiger) {
       if(zeiger==NULL) {
           zeiger=(KNOTEN*)malloc(sizeof(KNOTEN));
           zeiger->wert=zahl;
           zeiger->links=zeiger->rechts=NULL;
       }
      // else if(zeiger->verweis == ) //Hier weiterarbeiten an der Erstellung des Baumes, vergleich Verweiß der kommenden Zahl, vielleicht mit dem letzten gegebenen Wert.
       else if(zeiger->wert >= zahl){
           zeiger->links=einordnen(zeiger->links);
       }
       else if(zeiger->wert < zahl){
           zeiger->rechts=einordnen(zeiger->rechts);
       }
       return 0;
}
