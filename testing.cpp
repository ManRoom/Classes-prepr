#include <iostream>

#define VALUE_SUB_NULL 0
#define EMPTY_STRING "empty"

using namespace std;

class CreateSpaceship {

private:

	int speed;
	int size;

	string color;

public:

	int set_speed(int speed) {
		return this->speed = speed;
	}

	int set_size(int size) {
		return this->size = size;
	}

	string set_color(string color) {
		return this->color = color;
	}

	void tools_gun(string type) {
		cout << "Install type of gun: " << type << endl;
	}

	void tools_protect(string protection) {
		cout << "Install type of protect: " << protection << endl;
	}

	void create_ship(string name) {
		if (!name.empty() & speed > VALUE_SUB_NULL & size > VALUE_SUB_NULL) {
			cout << "info about " << name << " spaceship" << "\n"
				 << "name: " << name << "\n"
				 << "color: " << color << "\n"
				 << "speed: " << speed << "\n"
				 << "size: " << size << "\n";
		}
		else
			cout << "Enter the parametrs for: " << name << 
				    ". values of SPEED, SIZE or NAME could not be equals: " 
					<< EMPTY_STRING << " or(and) " 
					<< VALUE_SUB_NULL << endl;
	}
};

struct modification_gun {
	 const string range = "range";
	 const string mili = "mili";
	 const string combo = "combo";
};

struct modification_protect {
	const string full_protect = "full";
	const string parth_protect = "parth";
	const string disable_protect = "disable";

};
class SelectGun {


};

int main() {
	setlocale(LC_ALL, "rus");

	modification_gun select_gun;
	CreateSpaceship ship;

	ship.set_color("RED");

	ship.set_speed(1);
	ship.set_size(3);

	ship.create_ship("past girl");


	system("pause");
	return 0;
}