#include <iostream>
#include "encryption.h"
#include "menu.h"
#include "keystream.h"

std::string encrypt(std::string word, std::string key_word)
{	
	std::string result = word;
	std::string final_key = key_to_stream(key_word, word.size());
	for (size_t i = 0; i < word.length(); ++i)
	{
		if (std::isalpha(result[i]))
		{
			if (std::islower(result[i]))
			{
				result[i] = (result[i] - 'a' + final_key[i]) % 26 + 'a';
			}
			else if(std::isupper(result[i]))
			{
				result[i] = (result[i] - 'A' + final_key[i]) % 26 + 'A';
			}
		}
	}
	return result;
}