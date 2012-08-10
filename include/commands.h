#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <vector>
#include "users.h" 

#define ARRAY_SIZE 100

using namespace std;

class commands {
	 private:
			string currentCommand;

	 public:
	 		// Constructors
			commands();

			// Destructors
			~commands();

			// Methods
			void processCommands();

			// Variables
			bool processing;
};

