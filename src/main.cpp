#include "commands.h" 
#include "users.h" 
//
// ** Main **
//
int main()
{
	 cout << "Anonymous BBS -- anonBBS" << endl;
	 commands cmd;	 
	 users user; 

	 user.setNickName();
	 cout << "Hi " << user.getNickName() << endl;
	 cmd.processCommands();

	 return 0;
}
