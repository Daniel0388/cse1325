#include "mainwin.h"
#include <iostream>
#include <gtkmm.h>
#include "entrydialog.h"
#include <cstring>

Mainwin::Mainwin() : Mainwin{*(new Store)} { }
Mainwin::Mainwin(Store& store) : _store{&store} {

    // /////////////////
    // G U I   S E T U P
    // /////////////////
	set_default_size(400,200);
	set_title("DGV0388 SweetShop");

    // Set up a vertical box to hold the main window elements
	Gtk::Box *vbox = Gtk::manage(new Gtk::Box(Gtk::ORIENTATION_VERTICAL, 0));
	add(*vbox);

    // ///////
    // M E N U
    // Add and configure a menu bar as the top item in the vertical box
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
	
    //         N E W   S T O R E
    // Append New to the File menu
    Gtk::MenuItem *menuitem_newstore = Gtk::manage(new Gtk::MenuItem("_New Store", true));
    menuitem_newstore->signal_activate().connect([this] {this->new_store();});
    filemenu->append(*menuitem_newstore);

    //     S W E E T S
    // Create a Sweets menu and add to the menu bar
    Gtk::MenuItem *menuitem_sweets = Gtk::manage(new Gtk::MenuItem("_Sweets", true));
    menubar->append(*menuitem_sweets);
    Gtk::Menu *sweetsmenu = Gtk::manage(new Gtk::Menu());
    menuitem_sweets->set_submenu(*sweetsmenu);

    //         A D D   S W E E T S
    // Append New to the Sweets menu
    Gtk::MenuItem *menuitem_newsweet = Gtk::manage(new Gtk::MenuItem("_Add", true));
    menuitem_newsweet->signal_activate().connect([this] {this->add_sweet();});
    sweetsmenu->append(*menuitem_newsweet);

    //         A D D   L I S T
    // Append New to the Sweets menu
    Gtk::MenuItem *menuitem_newlist = Gtk::manage(new Gtk::MenuItem("_List", true));
    menuitem_newlist->signal_activate().connect([this] {this->show_list();});
    sweetsmenu->append(*menuitem_newlist);
    
    //     H E L P
    // Create a Help menu and add to the menu bar
    Gtk::MenuItem *menuitem_help = Gtk::manage(new Gtk::MenuItem("_Help", true));
    menubar->append(*menuitem_help);
    Gtk::Menu *helpmenu = Gtk::manage(new Gtk::Menu());
    menuitem_help->set_submenu(*helpmenu);

    //           A B O U T
    // Append About to the Help menu
    Gtk::MenuItem *menuitem_about = Gtk::manage(new Gtk::MenuItem("About", true));
    menuitem_about->signal_activate().connect([this] {this->on_about_click();});
    helpmenu->append(*menuitem_about);



    // /////////////
    // T O O L B A R
    // Add a toolbar to the vertical box just below the menu (bonus level)



    // ///////////////////////
    // D A T A   D I S P L A Y
    // Provide a text entry box to show the sweets and orders
    data = Gtk::manage(new Gtk::Label());
    // sticks->set_has_frame(false);
    data->set_hexpand(true);
    data->set_vexpand(true);
    vbox->add(*data);



    // ///////////////////////////////////    
    // S T A T U S   B A R   D I S P L A Y
    // Provide a status bar for transient messages


    // Make the vertical box and everything in it visible
	vbox->show_all();

}

Mainwin::~Mainwin() { }

// /////////////////
// C A L L B A C K S
// /////////////////

void Mainwin::on_quit_click() {
    hide();
}

void Mainwin::new_store() {
	_store = new Store();
};

void Mainwin::add_sweet() {
	EntryDialog edialog{*this, "What type of sweet?"};
	edialog.set_text("Sweet Name");
	edialog.run();
	std::string sweetname = edialog.get_text();
	EntryDialog e2dialog{*this, "What is the price of the sweet?"};
	e2dialog.set_text("Sweet Price");
	e2dialog.run();
	std::string::size_type sz;     
	double sweetprice = std::stod(e2dialog.get_text(), &sz);
	//Gtk::MessageDialog mdialog{*this, edialog.get_text()};
	//mdialog.run();

	Sweet sweet{sweetname, sweetprice};
	_store->add(sweet);
};

void Mainwin::show_list() {
	//data->set_text("hello");
	for(int i=0; i<_store->num_sweets(); ++i) {
	//std::string str = str + _store->sweet(i).name();
	data->set_text(_store->sweet(i).name());
	};
	//std::string str = "        " + i + ") " + _store->sweet(i);
};

void Mainwin::on_about_click() {
	Glib::ustring s = R"(
	<span size='24000' weight='bold'>UTA SweetShop</span>
	<span size='large'>Copyright 2019 by George F. Rice &and Daniel Vargas</span>
	<span size='small'>Licensed under Creative Commons Attribution 4.0</span>

	System that is able to update and track the listing of sweets, prices and orders at multiple stores.)";
    	Gtk::MessageDialog dlg(*this, s, true, Gtk::MESSAGE_INFO, Gtk::BUTTONS_OK, true);
    	dlg.run();
	};







// /////////////////
// U T I L I T I E S
// /////////////////


