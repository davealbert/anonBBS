#include "commands.h" 
#include "users.h" 
//
// ** Main **
//
int main()
{
	 cout << "Anonymous BBS -- anonBBS v 1.0.1" << endl;
	 commands cmd;	 
	 users user; 

	 user.setNickName();
	 cout << "Hi " << user.getNickName() << endl;
	 while (cmd.processing)
	 {
			cmd.processCommands();
	 }


	 cout << endl << "Good Bye!" << endl;
	 return 0;
}
