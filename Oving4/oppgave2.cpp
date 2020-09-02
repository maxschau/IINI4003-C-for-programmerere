#include <gtkmm.h>
#include <iostream>
using namespace std;

class Window : public Gtk::Window {
public:
    Gtk::VBox vbox;
    Gtk::Entry entryFirstName;
    Gtk::Entry entryLastName;
    Gtk::Button button;
    Gtk::Label label;
    Gtk::Label labelFirstName;
    Gtk::Label labelLastName;


    Window() {
        button.set_label("Combine names");
        labelFirstName.set_text("First name:");
        vbox.pack_start(labelFirstName);
        vbox.pack_start(entryFirstName);  //Add the widget entry to vbox
        labelLastName.set_text("Last name:");
        vbox.pack_start(labelLastName);
        vbox.pack_start(entryLastName);  //Add the widget entry to vbox
        vbox.pack_start(button); //Add the widget button to vbox
        vbox.pack_start(label);  //Add the widget label to vbox

        add(vbox);  //Add vbox to window
        show_all(); //Show all widgets
        button.set_sensitive(false);

        entryFirstName.signal_changed().connect([this]() {
            if (entryFirstName.get_text() != "" && entryLastName.get_text() != "") {
                button.set_sensitive(true);
            } else {
                button.set_sensitive(false);
            }
        });
        entryLastName.signal_changed().connect([this]() {
            cout << "Noe skjedde" << endl;
            cout << entryLastName.get_text() << endl;
            if (entryFirstName.get_text() != "" && entryLastName.get_text() != "") {
                button.set_sensitive(true);
            } else {
                button.set_sensitive(false);
            }

        });


        button.signal_clicked().connect([this]() {
            label.set_text(entryFirstName.get_text() + " " + entryLastName.get_text());
        });
    }
};

int main() {
    Gtk::Main gtk_main;
    Window window;
    gtk_main.run(window);
}
