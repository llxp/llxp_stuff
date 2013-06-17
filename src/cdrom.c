#include <stdio.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <stdlib.h>
#include <linux/cdrom.h>
#include <errno.h>
/*#include <linux/cdrom.h>
#include <stdio.h>
#include <fcntl.h>
#include <fcntl.h>
#include <sys/types.h>
#define CDROM "/dev/sr0"
#define EXIT_FAILURE "Fehler!"*/
#define CDROM "/dev/sr0"

static void capability_cdrom (int cdrom) {
   const char *j[] = {"nein", "ja"};
   int caps = ioctl (cdrom, CDROM_GET_CAPABILITY);
   if (caps == -1) {
      perror ("CDROM_GET_CAPABILITY");
      return;
   }
   printf ("CDROM-Fähigkeiten:\n"
      "\tCD-R    : %s\n"
      "\tCD-RW   : %s\n"
      "\tDVD     : %s\n"
      "\tDVD-R   : %s\n"
      "\tDVD-RAM : %s\n",
      j[!!(caps & CDC_CD_R)],
      j[!!(caps & CDC_CD_RW)],
      j[!!(caps & CDC_DVD)],
      j[!!(caps & CDC_DVD_R)],
      j[!!(caps & CDC_DVD_RAM)]);
}
static int open_cdrom (void) {
   int fd = open (CDROM, O_RDONLY | O_NONBLOCK);
   if (fd == -1) {
      if (errno == ENOMEDIUM)
         printf ("Keine CD im Laufwerk!\n");
      else
         perror ("Fehler bei open()");
      exit (EXIT_FAILURE);
   }
   return fd;
}
static void open_tray (int cdrom) {
   if (ioctl (cdrom, CDROMEJECT) == -1) {
      perror ("Eject yourself");
      exit (EXIT_FAILURE);
   }
}
/* Funktioniert nicht überall */
static void close_tray (int cdrom) {
   if (ioctl (cdrom, CDROMCLOSETRAY) == -1) {
      printf ("CD-Tray bitte von Hand schließen\n");
   }
}


int main(void){
int fd;
int gfd;
int fd_cdrom;
int auswahl;
gfd = getenv("bla");
//capability_cdrom(gfd);
fd_cdrom = open_cdrom();
while(1){
scanf("%d", &auswahl);
switch(auswahl){
case 1: open_tray(fd_cdrom);break;
case 2: close_tray(fd_cdrom);break;
case 3: capability_cdrom(fd_cdrom);break;
case 4: return 0;
}
}
return 0;
}
