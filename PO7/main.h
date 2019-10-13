#include <gtkmm.h>

class Mainwin : public Gtk::Window {
  public:
    Mainwin();
    virtual ~Mainwin();
  protected:
    void on_radiobutton_click(int button, int sp);
    void on_scale_value_changed();
  private:
    // These are the widgets demonstrated in order
    Gtk::Frame* frame; // Contains the 2 radio buttons
    Gtk::RadioButton* radiobutton1;
    Gtk::RadioButton* radiobutton2;
    Gtk::RadioButton* radiobutton3; // need 2 to demo groups

    Gtk::Button* dialog_button;
    void dialog();
};