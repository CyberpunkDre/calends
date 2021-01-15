



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




