#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int field[64], setpoint, player[64];
int i, x, y, p;
char c[2];

int inner_print(int *field_){
return 0;
}
int print_field(int *field){
    for(x=0; x<64; x++) {
	if(x%8<=0){
	    printf("\n");
	    printf("%i ", field[x]);
	}else{
        printf("%i ", field[x]);
	}
}
return 0;
}
int setplayer(int setpoint){
    //int setpoint=(int )&setpoint;
    //sprintf("%i", setpoint);
//    if(setpoint!<=field[] or setpoint !>=field[]){
        for(y=0; y<64; y++) {
            field[y] = 0;
            if(y==setpoint){
                field[y] = 1;
            }
        }
 //   }
    return 0;
}
int get_player(int *player){
for(p=0; p<64; p++) {
    if(player[p] == 1){
        return p;
    }
}
return 0;
}
//int move_player()
int main()
{
    for(i=0; i<64; i++) {
            field[i] = 0;
        }
while(1){
    fgets(c, 2, stdin);
//scanf("%c",&c);
if(strstr(c,"w")!=NULL){
setplayer(get_player(field)-8);
print_field(field);
}
if(strstr(c,"s")!=NULL){
setplayer(get_player(field)+8);
print_field(field);
}
if(strstr(c,"a")!=NULL){
setplayer(get_player(field)-1);
print_field(field);
}
if(strstr(c,"d")!=NULL){
setplayer(get_player(field)+1);
print_field(field);
}
}
setplayer(9);
print_field(field);
    //printf("Hello world!\n");
    return 0;
}
