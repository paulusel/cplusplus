#include <iostream>
#include "Name.hpp"

int main(){
	name::Name name("mathos"), mane("Petros");
	name.print_name();
	name.set_name("Yonas", "Markos");
	name.print_name();
    
    name = mane;
    name.print_name();
    

	return 0;
}
