#include "commands.h"

commands::commands()
{
	 cout << "Construct" << endl;
}

commands::~commands()
{
	 cout << "Destruct" << endl;
}

void commands::processCommands()
{
	 string input = "";
	 bool processing = true;
	 bool firstPass;
	 int i;
	 vector <string> v;

	 while(processing)
	 {
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
							 exit(0);
						}

				 } else 
				 {
						v.push_back(sub);
				 }
			} while (iss);
			cout << v[0];
			v.clear();
	 }
}
