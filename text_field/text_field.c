#include <gtk/gtk.h>

void print(GtkWidget *widget, gpointer data) {
    char *buffer = (char *)gtk_entry_get_text(GTK_ENTRY(data));
    g_print("%s", buffer);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window, *textfield, *button, *box;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    textfield = gtk_entry_new();
    button = gtk_button_new_with_label("Print Input Text");
    g_signal_connect(button, "clicked", G_CALLBACK(print), textfield);

    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_box_pack_start(GTK_BOX(box), textfield, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);

    gtk_container_add(GTK_CONTAINER(window), box);

    gtk_widget_show_all(window);
    gtk_main();
    return 0;
}