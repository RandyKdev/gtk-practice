#include <gtk/gtk.h>

void clearImage(GtkWidget *widget, gpointer *data) {
    gtk_image_clear(GTK_IMAGE(data));
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window, *image, *button, *box;

    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    image = gtk_image_new_from_file("test.jpeg");
    button = gtk_button_new_with_label("Clear Image");
    g_signal_connect(button, "clicked", G_CALLBACK(clearImage), image);

    
    box = gtk_box_new(GTK_ORIENTATION_VERTICAL, 0);
    gtk_box_pack_start(GTK_BOX(box), image, TRUE, TRUE, 0);
    gtk_box_pack_start(GTK_BOX(box), button, TRUE, TRUE, 0);
    
    gtk_container_add(GTK_CONTAINER(window), box);
    gtk_widget_show_all(window);
    
    gtk_main();

    return 0;
}