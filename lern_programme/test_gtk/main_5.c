#include <stdlib.h>
#include <gtk/gtk.h>
#include <webkit.h>
//#include <gtkmozembed.h>
//#include <gtkhtml/gtkhtml.h>
//#include <gtkhtml/gtkhtml-stream.h>
/* Create a new hbox with an image and a label packed into it
 * and return the box. */

static GtkWidget *xpm_label_box( gchar     *xpm_filename,
                                 gchar     *label_text )
{
    GtkWidget *box;
    GtkWidget *label;
    GtkWidget *image;

    /* Create box for image and label */
    box = gtk_hbox_new (FALSE, 0);
    gtk_container_set_border_width (GTK_CONTAINER (box), 2);

    /* Now on to the image stuff */
    image = gtk_image_new_from_file (xpm_filename);

    /* Create a label for the button */
    label = gtk_label_new (label_text);

    /* Pack the image and label into the box */
    gtk_box_pack_start (GTK_BOX (box), image, FALSE, FALSE, 3);
    gtk_box_pack_start (GTK_BOX (box), label, FALSE, FALSE, 3);

    gtk_widget_show (image);
    gtk_widget_show (label);

    return box;
}

/* Our usual callback function */
static void callback( GtkWidget *widget,
                      gpointer   data )
{
    g_print ("Hello again - %s was pressed\n", (char *) data);
}
int quit(){
return 0;
}

int main( int   argc,
          char *argv[] )
{
    /* GtkWidget is the storage type for widgets */
    GtkWidget *window;
    GtkWidget *button;
    GtkWidget *button_quit;
    GtkWidget *box;
    GtkWidget *box_quit;
      GtkWidget *quit;
      GtkAccelGroup *accel_group = NULL;

    gtk_init (&argc, &argv);

    /* Create a new window */
    window = gtk_window_new (GTK_WINDOW_TOPLEVEL);

    gtk_window_set_title (GTK_WINDOW (window), "Pixmap'd Buttons!");

    /* It's a good idea to do this for all windows. */
    g_signal_connect (window, "destroy",
	              G_CALLBACK (gtk_main_quit), NULL);

    g_signal_connect (window, "delete-event",
	 	      G_CALLBACK (gtk_main_quit), NULL);

    /* Sets the border width of the window. */
    gtk_container_set_border_width (GTK_CONTAINER (window), 10);

    /* Create a new button */
    button = gtk_button_new ();
    button_quit = gtk_button_new ();
  accel_group = gtk_accel_group_new();
  gtk_window_add_accel_group(GTK_WINDOW(window), accel_group);
    /* Connect the "clicked" signal of the button to our callback */
    g_signal_connect (button, "clicked",
		      G_CALLBACK (main), (gpointer) "Neues Fenster");
    g_signal_connect (button_quit, "clicked",
		      G_CALLBACK (gtk_main_quit), (gpointer) "Neues Fenster");

    /* This calls our box creating function */
    box = xpm_label_box ("/usr/share/icons/gnome/24x24/actions/filenew.png", "Neues Fenster");
    box_quit = xpm_label_box ("/usr/share/icons/gnome/24x24/actions/gtk-quit.png", "Beenden");

    /* Pack and show all our widgets */
    gtk_widget_show (box);
    gtk_widget_show (box_quit);

    gtk_container_add (GTK_CONTAINER (button), box);
    gtk_container_add (GTK_CONTAINER (button_quit), box_quit);


    gtk_widget_show (button);
    gtk_widget_show (button_quit);

    gtk_container_add (GTK_CONTAINER (window), button);

    gtk_widget_show (window);

    /* Rest in gtk_main and wait for the fun to begin! */
    gtk_main ();

    return 0;
}
