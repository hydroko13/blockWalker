#pragma once
#include <Core/Common.h>

class InitializationFailureException : std::exception {



	private:
		std::string attemptedInit;
		std::string message;
		


	public:
		InitializationFailureException(const char* attemptedInit);

		const char* what() const noexcept;

};

