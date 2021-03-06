#include <gtk/gtk.h>

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);
    GtkWidget *window;

    // defining a pointer to a button widget
    GtkWidget *button;
    GtkWidget *button1;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // creating a button with label "click"
    button = gtk_button_new_with_label("Click");
    button1 = gtk_button_new_with_label("Click 2");
    
    // Adding the button to the window
    gtk_container_add(GTK_CONTAINER(window), button);
    
    // removing a widget from window
    gtk_container_remove(GTK_CONTAINER(window), button);

    gtk_container_add(GTK_CONTAINER(window), button1);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}