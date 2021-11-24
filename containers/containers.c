#include <gtk/gtk.h>

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);
    GtkWidget *window;

    // defining a pointer to a button widget
    GtkWidget *button;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // creating a button with label "click"
    button = gtk_button_new_with_label("Click");
    
    // Adding the button to the window
    gtk_container_add(GTK_CONTAINER(window), button);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}