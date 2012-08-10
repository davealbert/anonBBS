#include "commands.h"

// Constructors
commands::commands()
{
	 cout << "Construct" << endl;
	 processing = true;


	 user.setNickName();
	 cout << "Hi " << user.getNickName() << endl;
}

// Destructors
commands::~commands()
{
	 cout << "Destruct" << endl;
}


// Methods
//


// Main process called from main.cpp
void commands::processCommands()
{
	 string input = "";
	 bool firstPass;
	 int i;
	 vector <string> v;

	 cout << "> ";
	 getline(cin, input);

	 firstPass = true;
	 istringstream iss(input);
	 do
	 {
			string sub;
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
	 cout << (int) v.size();
	 v.clear();
}
