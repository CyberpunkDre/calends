#include <gtk/gtk.h>

#include "exampleapp4.h"

int
main (int argc, char *argv[])
{
  return g_application_run (G_APPLICATION (example_app_new ()), argc, argv);
}