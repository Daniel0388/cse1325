#include "mainwin.h"
#include <string>
#include <sstream>
#include "animal.h"
#include "shelter.h"

Mainwin::Mainwin() { // : Mainwin{*(new Store)} { }
//Mainwin::Mainwin(Store& store) : _store{&store} {
    Shelter* shelter = new Shelter();
    // /////////////////
    // G U I   S E T U P
    // /////////////////

    set_default_size(640, 480);
    set_title("Mav's Ultimate Sweet Shop");

    // Put a vertical box container as the Window contents
    Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
    add(*vbox);

    // ///////
    // M E N U
    // Add a menu bar as the top item in the vertical box
    Gtk::MenuBar *menubar = Gtk::manage(new Gtk::MenuBar());
    vbox->pack_start(*menubar, Gtk::PACK_SHRINK, 0);

    //     F I L E
    // Create a File menu and add to the menu bar
    Gtk::MenuItem *menuitem_file = Gtk::manage(new Gtk::MenuItem("_File", true));
    menubar->append(*menuitem_file);
    Gtk::Menu *filemenu = Gtk::manage(new Gtk::Menu());
    menuitem_file->set_submenu(*filemenu);

    //         Q U I T
    // Append Quit to the File menu
    Gtk::MenuItem *menuitem_quit = Gtk::manage(new Gtk::MenuItem("_Quit", true));
    menuitem_quit->signal_activate().connect([this] {this->on_quit_click();});
    filemenu->append(*menuitem_quit);

    //     A N I M A L
    // Create a Animal menu and add to the menu bar
    Gtk::MenuItem *menuitem_animal = Gtk::manage(new Gtk::MenuItem("_Animal", true));
    menubar->append(*menuitem_animal);
    Gtk::Menu *animalmenu = Gtk::manage(new Gtk::Menu());
    menuitem_animal->set_submenu(*animalmenu);

    //         N E W
    // Append New to the Animal menu
    Gtk::MenuItem *menuitem_new = Gtk::manage(new Gtk::MenuItem("_New", true));
    menuitem_new->signal_activate().connect([this] {this->on_create_animal();});
    animalmenu->append(*menuitem_new);

    //         L I S T   A V A I L A B L E
    // Append List Available to the Animal menu
    Gtk::MenuItem *menuitem_list_available = Gtk::manage(new Gtk::MenuItem("_List Available", true));
    menuitem_list_available->signal_activate().connect([this] {this->on_animals_list();});
    animalmenu->append(*menuitem_list_available);


    // Make the box and everything in it visible
    vbox->show_all();
}

Mainwin::~Mainwin() { }

// /////////////////
// C A L L B A C K S
// /////////////////


void Mainwin::on_quit_click() {
    close();
}

void Mainwin::on_create_animal() {
    Animal* animal = new Animal();
    Shelter::add_animal(animal);
}

void Mainwin::on_animals_list() {
    std::string s;
    for(int i=0; i<shelter->num_animals(); ++i) 
        s += shelter->animal(i) + "\n";
    msg->set_text("");
}






// /////////////////
// Utilities
// /////////////////


