#ifndef MAINWIN_H
#define MAINWIN_H

#include <gtkmm.h>

const std::string VERSION{"0.1.0"};
const std::string APP_NAME{"edu.uta.cse1325.sweets.v0_1_0"};

class Mainwin : public Gtk::Window
{
    public:
        Mainwin();
        virtual ~Mainwin();
    protected:
        void on_quit_click();                 // Exit the program
	void on_create_animal();
	void on_animals_list();
    private:
	Gtk::Label *data;                     // Information display
        Gtk::Label *msg;                      // Status message display


};
#endif 

