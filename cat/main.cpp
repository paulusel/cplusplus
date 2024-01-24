#include <iostream>
#include <fstream>
#include <string>

int main( int argc, char* argv[]){
   //Works on only one file argument.
   std::ifstream input;
   input.open(argv[1]);

   if(!input.fail()){
    char chr = '\0';
    input.get(chr);

    while( !input.eof() ){
        std::cout << chr;
        input.get(chr);
    }
   }
   else{
       std::cout << "Is there even such a file?" << std::endl;
       exit(1);    
   }
   
   input.close();
    
   return 0;
}