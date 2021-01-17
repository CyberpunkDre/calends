



# Prelude

This document will describe how I build my Calends, which is an application/window to interact with my files and help manage my goals.



## Chapter 1

We need to build an application window and I want to use the WxWidgets framework so that I can start with something that is cross-platform to start.
But on more reflection, I am going to work with GTK to be able to ramp knowledge for the GlScopeClient project better and I only really intend to use this
on Linux for now. Compromises help the other projects!

### 1.1

1/14/21: Downloading Glade to facilitate in building desired UI and loading from XML. 
Too complicated out the gate. Their tutorial is a 2009 blogspot and the mock interface image isn't loading.
Still had good advice for starting with an image of my desired interface and so I sketched out some initial features I want to see/interact with.

Built GTK example window (https://developer.gnome.org/gtk3/stable/gtk-getting-started.html)

> gcc `pkg-config --cflags gtk+-3.0` -o bin/meus_calends src/main.c `pkg-config --libs gtk+-3.0`

### 1.2

1/15/21

Spent way too much time last night sketch out an ideal interface and widget. I am very pleased with the progress/drawings/thoughts/states I did think out and document. I need to get better with the scanner so I can directly embedded/manipulate the images I draw.

### 1.3

1/16/21

Next example is to start using the UI XML which is good and an output of the Glade program if I understand correctly.

Small issue with locating the "builder.ui" file, default looking for it where I run the program

Copying from source here for future reference

```
Note that GtkBuilder can also be used to construct objects that are not widgets, such as tree models, adjustments, etc. That is the reason the method we use here is called gtk_builder_get_object() and returns a GObject* instead of a GtkWidget*.

Normally, you would pass a full path to gtk_builder_add_from_file() to make the execution of your program independent of the current directory. A common location to install UI descriptions and similar data is /usr/share/appname.

It is also possible to embed the UI description in the source code as a string and use gtk_builder_add_from_string() to load it. But keeping the UI description in a separate file has several advantages: It is then possible to make minor adjustments to the UI without recompiling your program, and, more importantly, graphical UI editors such as glade can load the file and allow you to create and modify your UI by point-and-click.
```
https://developer.gnome.org/gtk3/stable/ch01s03.html


