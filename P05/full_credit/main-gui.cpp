#include "mainwin.h"
#include <gtkmm.h>

int main (int argc, char *argv[]) {
  // Your main function code goes here!
	auto app = Gtk::Application::create(argc, argv, "edu.uta.cse1325.dgv0388_sweetshop");
	Mainwin win;
	return app->run(win);

}

