#pragma once
#include "FObjectType.h"

namespace _FWorker {

	class FObject {
	private:
		bool IsNull;

	public:
		virtual Other::FObjectType type() const = 0;
		virtual char* toString() const = 0;

		virtual bool isNull() const = 0;
		virtual void setNull() = 0;

		virtual void clear() = 0;

		virtual void initialize(char* args, int lenght) = 0;
		virtual char* getInitializeConde(int& size) const = 0;
	};

}

