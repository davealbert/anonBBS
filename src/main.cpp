#include "commands.h" 
//
// ** Main **
//
int main()
{
	 // TODO: display motd stored in the user directory.
	 cout << "Anonymous BBS -- anonBBS v 1.0.1" << endl;

	 commands cmd;	 
	 while (cmd.processing)
	 {
			cmd.processCommands();
	 }

	 cout << endl << "Good Bye!" << endl;
	 return 0;
}
