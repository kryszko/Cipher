#include <iostream>
#include "encryption.h"
#include "menu.h"

std::string encrypt(std::string word)
{	
	std::string result = word;
	for (char& i : result)
	{
		if (std::isalpha(i))
		{
			if (std::islower(i))
			{
				i = (i - 'a' + 1) % 26 + 'a';
			}
			else if(std::isupper(i))
			{
				i = (i - 'A' + 1) % 26 + 'A';
			}
		}
	}
	return result;
}