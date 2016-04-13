#include <loader/loader_naming.h>

int loader_naming_get_name(loader_naming_name path, loader_naming_name name)
{
	int i, count, last;

	for (i = 0, count = 0, last = 0; path[i] != '\0' && count < LOADER_NAMING_NAME_SIZE; ++i)
	{
		name[count++] = path[i];

		if (path[i] == '/')
		{
			count = 0;
		}
		else if (path[i] == '.')
		{
			last = count - 1;
		}
	}

	name[last] = '\0';

	return last;
}

int loader_naming_get_extension(loader_naming_name path, loader_naming_extension extension)
{
	int i, count;

	for (i = 0, count = 0; path[i] != '\0' && count < LOADER_NAMING_EXTENSION_SIZE; ++i)
	{
		extension[count++] = path[i];

		if (path[i] == '.')
		{
			count = 0;
		}
	}

	extension[count] = '\0';

	return count;
}