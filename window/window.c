#include <gtk/gtk.h>
#include <stdio.h>

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);

    GtkWidget *window;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    // sets a default size for window
    gtk_window_set_default_size(GTK_WINDOW(window), 700, 500);

    // sets the initial position for the window
    gtk_window_set_position(GTK_WINDOW(window), GTK_WIN_POS_CENTER);

    // hides the title bar of the window
    // gtk_window_set_decorated(GTK_WINDOW(window), FALSE);

    // sets the title of the window
    gtk_window_set_title(GTK_WINDOW(window), "A window perspective");

    // makes the window to be maximized
    // gtk_window_maximize(GTK_WINDOW(window));

    // makes window not resizable
    // gtk_window_set_resizable(GTK_WINDOW(window), FALSE);

    int width, height;

    // gets width and height of window
    gtk_window_get_size(GTK_WINDOW(window), &width, &height);

    printf("The width is %d and height is %d \n", width, height);

    // gets whether the title bar is hidden
    printf("The decorated %d \n", gtk_window_get_decorated(GTK_WINDOW(window)));

    // gets whether the window is resizable
    printf("The resizable %d \n", gtk_window_get_resizable(GTK_WINDOW(window)));

    // gets the title of the window
    printf("The decorated %s \n", gtk_window_get_title(GTK_WINDOW(window)));

    gtk_widget_show_all(window);

    gtk_main();
}