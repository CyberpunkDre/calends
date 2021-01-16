#include <gtk/gtk.h>

static void print_hello(GtkWidget *widget, gpointer data){
    g_print("Hello world\n");
}

static void activate (GtkApplication* app, gpointer user_data){
  GtkWidget *window;
  GtkWidget *grid;
  GtkWidget *button;

  /* Create new window and set Title */
  window = gtk_application_window_new (app);
  gtk_window_set_title (GTK_WINDOW (window), "Calends");
  gtk_window_set_default_size (GTK_WINDOW (window), 200, 200);
  
  // Container for button packing
  grid = gtk_grid_new();

  /* Pack the container in the window */
  gtk_container_add(GTK_CONTAINER(window), grid);
  
  button = gtk_button_new_with_label("Button 1");
  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

  /* Place the first button in the grid cell (0,0)
   * and fill 1 cell horizontaly and vertically (no spanning)
   */
  gtk_grid_attach(GTK_GRID(grid), button, 0, 0, 1, 1);

  button = gtk_button_new_with_label("Button 2");
  g_signal_connect(button, "clicked", G_CALLBACK(print_hello), NULL);

  /* Place the second button in the grid cell (1,0)
   * and fill 1 cell horizontaly and vertically (no spanning)
   */
  gtk_grid_attach(GTK_GRID(grid), button, 1, 0, 1, 1);

  button = gtk_button_new_with_label("Quit");
  g_signal_connect_swapped(button, "clicked", G_CALLBACK(gtk_widget_destroy), window);
  
  /* Place the Quit button in the grid cell (0,1)
   * and make it span 2 columns
   */
  gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 2, 1);
  
  /* Now that we are done packing widgets, show them all
   * in one go, by calling gtk_widget_show_all() on all widgets
   * that are contained in the window, directly or indirectly
   */
  gtk_widget_show_all (window);
}

int main (int argc, char **argv) {
  GtkApplication *app;
  int status;

  // See https://wiki.gnome.org/HowDoI/ChooseApplicationID for ApplicationID naming scheme
  app = gtk_application_new ("com.github.cyberpunkdre.calends", G_APPLICATION_FLAGS_NONE);

  g_signal_connect (app, "activate", G_CALLBACK (activate), NULL);
  
  status = g_application_run (G_APPLICATION (app), argc, argv);
  
  g_object_unref (app);

  return status;
}