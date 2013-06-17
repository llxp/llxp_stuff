#include <gtk/gtk.h>

static void open_new(char *title);
static void new_box();

static void open_new(char *title){
    GtkWidget *window;
    GtkWidget *window_2;
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    window_2 = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    new_box(window);
    //new_box(window_2);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    //g_signal_connect(window_2, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    gtk_widget_show_all(window);
    //gtk_widget_show_all(window_2);
}

static void new_box(GtkWidget *win_box){
    GtkWidget *vbox;
    vbox = gtk_hbox_new(FALSE, 0);
    gtk_container_add(GTK_CONTAINER(win_box), vbox);
        gtk_box_pack_start(GTK_BOX(vbox), gtk_label_new("File"), FALSE, FALSE, 10);
    gtk_box_pack_end(GTK_BOX(vbox), gtk_label_new("Edit"), FALSE, FALSE, 10);
    gtk_box_pack_start(GTK_BOX(vbox), gtk_label_new("View"), FALSE, FALSE, 10);
}

int main(int argc, char *argv[])
{


    gtk_init(&argc, &argv);
    open_new("hallo");
    gtk_main();
    return 0;
}
