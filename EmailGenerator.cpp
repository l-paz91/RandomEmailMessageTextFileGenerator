// -----------------------------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS

//--INCLUDES--//
#include <windows.h>
#include <ctime>

#include "EmailGenerator.h"
// -----------------------------------------------------------------------------

EmailGenerator::EmailGenerator()
{
	addContact("Alison Helena Byers", "<abyers@mailerdemon.com>");
	addContact("Quinn Vincent", "<qvin@hotmail.co.uk>");
	addContact("Cody Williams", "<cw@hotmail.com>");
	addContact("Ralph Meadows", "<meadows@outlook.com>");
	addContact("Bobby Hart", "<b-hart93@protonmail.com>");
	addContact("Milford Ross", "<m1/m2-1993.R_oss@regexthis.com>");
	addContact("Nicole Blake", "<blakey53@hotmail.com>");
	addContact("Tiffany Carrillo", "<tifcar_xX_Xx@geocities.com>");
	addContact("Diane Parsons", "<d.parsons@gmail.com>");
	addContact("Samantha Harris", "<sam1988@aol.com>");

	mSubjects.push_back("Club members save £1 million");
	mSubjects.push_back("CONFIRMED: You've gained access to our FRESHEST deals!");
	mSubjects.push_back("New: Microsoft Azure for ASP.NET Core [Video]");
	mSubjects.push_back("Discover Dr Dennis Gross' Alpha Beta range");
	mSubjects.push_back("Your Charge 4 battery level is low");
	mSubjects.push_back("Incoming: your Currys update - want up to 30% of 100s of items?");
	mSubjects.push_back("Quick! It's just arrived!");
	mSubjects.push_back("Your new account statements are available to view through your Mobile Banking app or in Online Banking.");
	mSubjects.push_back("A grand toolbox for game developers | $1,000+ worth of software and assets!");
	mSubjects.push_back("Update on the item you enquired about");

	mLoremIpson = "Live-edge pickled pug hashtag tbh. Iceland kitsch DIY 90's meggings, put a bird on it keytar fashion axe retro selvage sustainable keffiyeh skateboard.\nSchlitz tilde meh you probably haven't heard of them photo booth farm-to-table vegan etsy typewriter cold-pressed ramps letterpress dreamcatcher shabby chic hammock.\nKale chips affogato truffaut vinyl craft beer everyday carry lyft succulents. Pour-over blog ugh, twee tattooed man bun flannel typewriter banh mi subway tile leggings meh keffiyeh food truck.\nFood truck vexillologist you probably haven't heard of them actually vegan etsy microdosing occupy.\n";
}

// -----------------------------------------------------------------------------

void EmailGenerator::generate()
{
	cout << "How many emails do you want to generate? >> ";
	int num = 0;
	cin >> num;

	ofstream readOut{ "randomEmailMessages.txt" };

	//generate
	for (int i = 0; i < num; ++i)
	{
		int random = randint(0, 9);
		std::time_t t = std::time(nullptr);
		std::tm tm = *std::localtime(&t);

		readOut << "From: " << mNamesAndEmails[random].first << " " << mNamesAndEmails[random].second << "\n";
		readOut << "Sent: " << put_time(&tm, "%d %B %Y %H:%M") << "\n";
		random = randint(0, 9);
		readOut << "To: " << mNamesAndEmails[random].first << " " << mNamesAndEmails[random].second << "\n";
		readOut << "Subject: " << mSubjects[random] << "\n\n";
		readOut << mLoremIpson << endl;
	}
	
	readOut << "\n----";	// to signal end of messages

	cout << "\n\n.";
	Sleep(100);
	cout << ".";
	Sleep(100);
	cout << ".";
	Sleep(100);
	cout << ".";
	Sleep(100);
	cout << " done! Please find your text file in the folder where this exe is.";
}

// -----------------------------------------------------------------------------

void EmailGenerator::addContact(const string& p1, const string& p2)
{
	mNamesAndEmails.push_back(pair<string, string>(p1, p2));
}

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
