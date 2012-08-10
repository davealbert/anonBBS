#include "commands.h" 
//
// ** Main **
//
int main()
{
	 // TODO: display motd stored in the user directory.
	 std::cout << "Anonymous BBS -- anonBBS v 1.0.1" << std::endl;

	 commands cmd;	 
	 while (cmd.processing)
	 {
			cmd.processCommands();
	 }

	 std::cout << std::endl << "Good Bye!" << std::endl;
	 return 0;
}
