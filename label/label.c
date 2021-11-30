#include <gtk/gtk.h>

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window, *label;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // used to display plain text
    label = gtk_label_new("Hey this is just a plain text");
    gtk_container_add(GTK_CONTAINER(window), label);
    
    // gtk_label_set_text(GTK_LABEL(label), "Overwriting the text");

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}