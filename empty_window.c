#include <gtk/gtk.h>

int main(int argc, char **argv) {
    // initializes gtk
    gtk_init(&argc, &argv);

    // defining a widget
    GtkWidget *window;
    
    // creates new window - GTK_WINDOW_TOPLEVEL to indicate it is not a popup
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    
    // binds a callback to the close button of the widget
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // show widget to screen
    gtk_widget_show_all(window);
    
    // calls the main instance of gtk
    gtk_main();
}