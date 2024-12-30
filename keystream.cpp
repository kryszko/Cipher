#include <iostream>
#include <string>
#include "keystream.h"
#include "menu.h"


std::string key_to_stream(std::string short_key, int key_long)
{
	std::string final_key;
	for (size_t i = 0; i < key_long; ++i)
	{
		final_key.push_back(short_key[i % short_key.size()]);
		std::cout << final_key << std::endl;

	}

	return final_key;
}
