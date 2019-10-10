#include "mainwin.h"
#include <cmath>


Mainwin::Mainwin() 

    // This is the Mainwin's initialization list, which
    //   specifies construction of all of the widgets
  : button{Gtk::manage(new Gtk::Button{"Click this button!"})},
    entry{Gtk::manage(new Gtk::Entry{})},
    comboboxtext{Gtk::manage(new Gtk::ComboBoxText{true})},
    togglebutton{Gtk::manage(new Gtk::ToggleButton{"Toggle Button"})},
    checkbutton{Gtk::manage(new Gtk::CheckButton{"Check Button (enables Scale)"})},
    frame{Gtk::manage(new Gtk::Frame{"This Frame visually groups the RadioButtons"})},
    radiobutton1{Gtk::manage(new Gtk::RadioButton{"Radio Button 1"})},
    radiobutton2{Gtk::manage(new Gtk::RadioButton{"Radio Button 2"})},
    spinbutton{Gtk::manage(new Gtk::SpinButton)},
    label{Gtk::manage(new Gtk::Label{"This Label is the square of SpinButton (above) or Scale (below)"})},
    scale{Gtk::manage(new Gtk::Scale)},
    progressbar{Gtk::manage(new Gtk::ProgressBar)},
    dialog_button{Gtk::manage(new Gtk::Button{"As a dialog..."})}

    // This is the constructor body, which configures and packs each widget
    //     into a VBox that has been added to the main window
{
    set_title("Daniel Vargas 18");
    Gtk::VBox *vbox = Gtk::manage(new Gtk::VBox);
    add(*vbox); // to Mainwin

    // https://developer.gnome.org/gtkmm/stable/classGtk_1_1Scale.html
    // https://developer.gnome.org/gtkmm-tutorial/stable/sec-scale-widgets.html.en
    vbox->pack_start(*scale);
    scale->set_range(0.0, 100.0);
    scale->set_increments(1.0, 1.0);
    scale->signal_value_changed().connect([this] {this->on_scale_value_changed();});

    // https://developer.gnome.org/gtkmm/stable/classGtk_1_1Frame.html
    // https://developer.gnome.org/gtkmm-tutorial/stable/sec-single-item-containers.html.en#sec-frame
    vbox->pack_start(*frame);  // Frames can include only one widget, so we need another VBox
    Gtk::VBox *vbox_frame = Gtk::manage(new Gtk::VBox);
    frame->add(*vbox_frame);

    // https://developer.gnome.org/gtkmm/stable/classGtk_1_1RadioButton.html
    // https://developer.gnome.org/gtkmm-tutorial/stable/sec-radio-buttons.html.en
    vbox_frame->pack_start(*radiobutton1); // Note: Added to the *frame* above
    vbox_frame->pack_start(*radiobutton2);
    vbox_frame->pack_start(*radiobutton3);
    radiobutton1->join_group(*radiobutton2); // Put radios in the same group (unlimited permitted)
    radiobutton1->join_group(*radiobutton3);
    radiobutton1->signal_clicked().connect([this] {this->on_radiobutton_click(1);});
    radiobutton2->signal_clicked().connect([this] {this->on_radiobutton_click(2);});
    radiobutton2->signal_clicked().connect([this] {this->on_radiobutton_click(3);});

vbox->show_all();
}

// /////////
// Callbacks
// /////////

void Mainwin::on_scale_value_changed() {
    int sp = scale->get_value();
}

void Mainwin::on_radiobutton_click(int button, int sp) {
    if (button == 1) {
	sp = sqrt(sp);
    };
    if (button == 2) {
	sp = log(sp);
    };
    if (button == 3) {
	sp = cos(sp);
    };
    Gtk::MessageDialog{*this, "Result is: " std::to_string(sp)}.run();
}

