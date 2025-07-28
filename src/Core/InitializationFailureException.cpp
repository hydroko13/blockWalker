#pragma once
#include <Core/Common.h>










InitializationFailureException::InitializationFailureException(const char* attemptedInit) {

	this->attemptedInit = attemptedInit;
	this->message = "Failed to initialize '" + this->attemptedInit + "'";

};

const char* InitializationFailureException::InitializationFailureException::what() const noexcept {
	return this->message.c_str();
}

