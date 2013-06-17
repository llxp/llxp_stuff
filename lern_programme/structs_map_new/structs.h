struct index {
    int id;
    char username[30];
    struct users *db_name;
};
struct index indexdb;

struct users{
int id;
char name;
int rights;
};
struct users userdb;

struct messages{
int mid;
int key;
char type;
char message;
};
struct messages messagesdb;
//messagesdb->message=*field;
