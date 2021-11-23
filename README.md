# gtk-practice
This repo is to practice building GUI with GTK


To compile a gtk application, use the command below
> gcc `pkg-config --cflags gtk+-3.0` -o output name_of_file.c `pkg-config --libs gtk+-3.0`