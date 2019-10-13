#ifndef MAINWIN_H
#define MAINWIN_H

#include <gtkmm.h>
#include "store.h"
//#include "entrydialog.h"

class Mainwin : public Gtk::Window {
    public:
        Mainwin();
        Mainwin(Store& store);
        virtual ~Mainwin();

    private:
        Store *_store;
	Gtk::Label *data;

    // Lots more Mainwin members are needed!
    // (You ARE permitted to change the above as well if you like.)
	void on_quit_click();
	void new_store();
	void add_sweet();
	Gtk::Entry* entry;
	void show_list();
	void on_about_click();


};
#endif 

