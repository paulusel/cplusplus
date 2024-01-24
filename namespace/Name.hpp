#ifndef CLASS_H
#define CLASS_H

#include <string>

namespace name{

class Name{
	private:
		std::string fname;
		std::string sname;
	public:
        void operator =(const Name&);
		Name();
		Name(std::string);
		Name(std::string, std::string);
		void set_name(std::string);
		void set_name(std::string, std::string);
		void print_name();
		~Name();
};

}
#endif
