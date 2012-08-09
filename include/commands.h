#include <iostream>
#include <string>
#include <sstream>
#include <cstring>
#include <stdlib.h>
#include <vector>

#define ARRAY_SIZE 100


using namespace std;

class commands {
	private:
		string currentCommand;

	public:
		commands();
		~commands();

	void processCommands();
};

