#include <iostream>
#include "Name.hpp"

namespace name{

Name::Name(){
	fname = "";
	sname = "";
}

Name::Name(std::string name1){
	fname = name1;
	sname = "";
}

Name::Name(std::string name1, std::string name2){
	fname = name1;
	sname = name2;
}

void Name::operator =(const Name& name){
    fname = name.fname;
    sname = name.sname;
}

void Name:: set_name(std::string name1){
	fname = name1;
}

void Name::set_name(std::string name1, std::string name2){
	fname = name1;
	sname = name2;
}

void Name::print_name(){
	std::cout << "Fname: " << fname << std::endl
		<< "Sname:" << sname << std::endl;
}

Name::~Name(){
	std::cout << "Destructor Inside" << std::endl;
	fname = "";
	sname = "";

}

}
