#include "commands.h"
#include <stdio.h>

// Constructors
commands::commands()
{
	 std::cout << "Construct" << std::endl;
	 processing = true;


	 user.setNickName();
	 std::cout << "Hi " << user.getNickName() << std::endl;
}

// Destructors
commands::~commands()
{
	 std::cout << "Destruct" << std::endl;
}


// Methods
//


// Main process called from main.cpp
void commands::processCommands()
{
	 std::string input = "";
	 bool firstPass;
	 int i;
	 std::vector <std::string> v;

	 std::cout << "> ";
	 getline(std::cin, input);

	 firstPass = true;
	 std::istringstream iss(input);
	 do
	 {
			std::string sub;
			iss >> sub;
			if (firstPass) 
			{
				 currentCommand = sub;
				 i = 0;
				 firstPass = false;
				 if (currentCommand == "exit")
				 {
						processing = false;	
				 }

			} else 
			{
				 v.push_back(sub);
			}
	 } while (iss);

	 execCommand(currentCommand, v);
	 v.clear();
}

void commands::execCommand(std::string cmd, std::vector <std::string> v)
{
	 //std::cout << cmd << v.size();
	 if (cmd == "help")
	 help(v);
	 else if (cmd == "clear")
	 clear();


	 else if (cmd == ""){}

	 else
	 std::cout << cmd << " :command not found" << std::endl;

}

void commands::help(std::vector <std::string> v)
{
	 std::cout << "--help" << std::endl;
}

void commands::clear()
{
	 //std::cout << "--clear" << std::endl;
	 char esc = 27;
	 printf("%c%s",esc,"[2J");
	 printf("%c%s",esc,"[1;1H");
}

