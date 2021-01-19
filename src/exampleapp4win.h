#ifndef __EXAMPLEAPP4WIN_H
#define __EXAMPLEAPP4WIN_H

#include <gtk/gtk.h>
#include "exampleapp4.h"

#define EXAMPLE_APP_WINDOW_TYPE (example_app_window_get_type ())

G_DECLARE_FINAL_TYPE (ExampleAppWindow, example_app_window, EXAMPLE, APP_WINDOW, GtkApplicationWindow)

ExampleAppWindow * example_app_window_new(ExampleApp *app);

void example_app_window_open(ExampleAppWindow *win, GFile *file);


#endif /* __EXAMPLEAPP4WIN_H */
