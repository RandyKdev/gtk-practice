#include <gtk/gtk.h>

int main(int argc, char **argv) {
    gtk_init(&argc, &argv);

    GtkWidget *window;
    GtkWidget *box;
    GtkWidget *button1, *button2;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    // creates a new box to be able to add multiple widgets to window
    box = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 0);

    gtk_container_add(GTK_CONTAINER(window), box);

    button1 = gtk_button_new_with_label("Button 1");
    button2 = gtk_button_new_with_label("Button 2");

    // add widget to start of box
    gtk_box_pack_start(GTK_BOX(box), button1, TRUE, TRUE, 10);
    gtk_box_pack_start(GTK_BOX(box), button2, TRUE, TRUE, 10);

    gtk_widget_show_all(window);

    gtk_main();

    return 0;
}