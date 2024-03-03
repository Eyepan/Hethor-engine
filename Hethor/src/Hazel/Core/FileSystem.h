#pragma once

#include "Hethor/Core/Buffer.h"

namespace Hethor {

	class FileSystem
	{
	public:
		// TODO: move to FileSystem class
		static Buffer ReadFileBinary(const std::filesystem::path& filepath);
	};

}
