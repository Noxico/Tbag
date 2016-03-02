#include "../h/Input.h"

Input::Input()
{
	comWords = new CommandWords();

}

Command* Input::handler()
{
	string ui;
	cout << ">";
	getline(cin, ui);
	if (strh.contains(ui, " "))
	{
		if (ui.substr(ui.length() - 1, 1) == " ")
			return new Command("");
		bool gettingF = true;
		int lofoui = ui.length();
		int lofw = 0;
		int losw = 0;
		for (int i = 0; i < lofoui; i++)
		{

			if (ui.substr(i, 1) != " " && gettingF)
			{
				cout << ui.substr(i, 1) << endl;
				cout << "lofw++ " << endl;
				lofw++;
			}
			if (ui.substr(i, 1) != " " && !gettingF)
			{
				losw++;
			}
			if (ui.substr(i, 1) == " " && gettingF)
			{
				gettingF = false;
			}
			if (ui.substr(i, 1) == " " && lofw != 0 && losw != 0)
			{
				i = lofoui;
			}
		}
		if (comWords->isValidCommand(ui.substr(0, lofw)))
		{
			return new Command(ui.substr(0, lofw), ui.substr(lofw + 1, losw));
		}
	}
	else
	{
		if (comWords->isValidCommand(ui))
			return new Command(ui);
		else
			return new Command("");
	}
	return new Command("");
}
string Input::validCommands()
{
	return comWords->validCommands();
}

