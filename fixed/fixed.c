#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *fixed;
    GtkWidget *button1;
    GtkWidget *button2;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);

    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // fixed is same as box but with child widgets having fixed coordinates
    fixed = gtk_fixed_new();

    button1 = gtk_button_new_with_label("Button 1");
    button2 = gtk_button_new_with_label("Button 2");

    gtk_fixed_put(GTK_FIXED(fixed), button1, 100, 50);
    gtk_fixed_put(GTK_FIXED(fixed), button2, 150, 100);

    gtk_container_add(GTK_CONTAINER(window), fixed);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}