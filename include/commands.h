#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include "users.h" 


#ifndef COMMANDS_H
#define COMMANDS_H

#define ARRAY_SIZE 100

class commands {
	 private:
			// Methods
			void execCommand(std::string cmd, std::vector <std::string> v);
			// Executable functions
			void clear();
			void help(std::vector <std::string> v);

			// Variables
			std::string currentCommand;

	 public:
			// Constructors
			commands();

			// Destructors
			~commands();

			// Methods
			void processCommands();

			// Variables
			bool processing;
			users user; 
};

#endif
