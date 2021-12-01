# gtk-practice

This repo is to practice building GUI with GTK

## Compilation
To compile a gtk application, use the command below

> gcc `pkg-config --cflags gtk+-3.0` -o output name_of_file.c `pkg-config --libs gtk+-3.0`

Optionally run this if the gtk 3.0 not found error

> export PKG_CONFIG_PATH=/usr/lib/x86_64-linux-gnu/pkgconfig

and then this

> pkg-config --modversion gtk+-3.0

the above command should print the version of gtk and everything should be fine.


## Learning Resources
 - https://www.youtube.com/watch?v=TPyiNl_fmyQ&list=PLEs_0O72adQBUpcPJv7dKaElGwyzVljtk
 - https://www.youtube.com/c/MichaelB-GTK/playlists
 