#include <gtk/gtk.h>

void print_output(GtkWidget *widget, gpointer data[]) {
    char *output = (char *)gtk_entry_get_text((GtkEntry *) data[0]);
    g_print("%s\n", output);
    gtk_label_set_text(GTK_LABEL(data[1]), output);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window, *button, *textfield, *label, *box, *output;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_container_add(GTK_CONTAINER(window), box);

    label = gtk_label_new("Enter text in the text field below, then press print to print the output below");
    textfield = gtk_entry_new();
    output = gtk_label_new("");
    button = gtk_button_new_with_label("Print textfield");
    GtkWidget *widgets[] = {textfield, output};
    g_signal_connect(button, "clicked", G_CALLBACK(print_output), widgets);

    gtk_box_pack_start(GTK_BOX(box), label, TRUE, TRUE, 10);
    gtk_box_pack_start(GTK_BOX(box), textfield, TRUE, TRUE, 10);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 10);
    gtk_box_pack_start(GTK_BOX(box), output, TRUE, TRUE, 10);

    gtk_widget_show_all(window);

    gtk_main();
    return 0;
}