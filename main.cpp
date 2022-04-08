// -----------------------------------------------------------------------------
// https://lptcp.blogspot.com/
// 
/*
	Random Email Message Text File Generator
  
  Generates an email message in the format:
  From: Name <email>
  Sent: DD Month YYYY HH:MM
  To: Name <email>
  Subject: SubjectMessage
  
  Message
  
  You can specify it to create as many emails as you want and it will dump them out
  to a single text file in the same folder called "randomEmailMessages.txt"
  
  Currently doesn't support emojis in strings. 
  Provides 10 random names and email addresses. 10 subject lines and 1 lorum ipson mesasge body.

*/
// https://github.com/l-paz91/
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "EmailGenerator.h"

// -----------------------------------------------------------------------------

int main()
{
	EmailGenerator eg;
	eg.generate();

	return 0;
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
