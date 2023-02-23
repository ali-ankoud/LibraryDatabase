#include “Database.h”
#include <iostream>
#include <fstream>

int main(){
	Database library();

	bookFile.open(“bookFileName”);
	library.initializeBooks(bookFile);
	bookFile.close();

	patronFile.open(“patronFileName”);
	library.initializePatrons(patronFile);
	patronFile.close();
	
	commandFile.open(“commandFileName”);
	library.runCommands(commandFile);
	commandFile.close();

  return 0;
}
