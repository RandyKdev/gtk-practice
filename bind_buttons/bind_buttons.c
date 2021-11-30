#include <gtk/gtk.h>

void quit_application(GtkWidget *widget, gpointer data) {
    gtk_main_quit();
}

void print(GtkWidget *widget, gpointer data) {
    g_print("%s ", (char*) data);
    g_print("Hello world\n");
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window, *button;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(quit_application), NULL);

    button = gtk_button_new_with_label("Print Hello world");
    g_signal_connect(button, "clicked", G_CALLBACK(print), "Button 1");

    gtk_container_add(GTK_CONTAINER(window), button);

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}