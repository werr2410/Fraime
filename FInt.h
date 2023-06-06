#pragma once

#include "FObject.h"

namespace _FWorker {

	namespace TypeData {
		class FInt : public FObject {
		private:
			int number;

		public:
			FInt();
			FInt(int number);

			int number() const;
			void number(int number);

			void append(int otherNumber);
			void append(FInt otherNumber);

			void subtract(int otherNumber);
			void subtract(FInt otherNumber);

			void multiply(int otherNumber);
			void multiply(FInt otherNumber);

			void divide(int otherNumber);
			void divide(FInt otherNumber);

			void divideByModule(int otherNumber);
			void divideByModule(FInt otherNumber);

			Other::FObjectType type() const override;
			char* toString() const  override;

			bool isNull() const override;
			void setNull() override;

			void clear() override;

			void initialize(char* args, int lenght) override;
			char* getInitializeConde(int& size) const override;

			// operation
			bool operator>(const FInt& right) const;
			bool operator>(const int& right) const;

			bool operator<(const FInt& right) const;
			bool operator<(const int& right) const;

			bool operator==(const FInt& right) const;
			bool operator==(const int& right) const;

			bool operator!=(const FInt& right) const;
			bool operator!=(const int& right) const;

			FInt operator+(const FInt& right) const;
			FInt operator+(const int& right) const;

			FInt operator-(const FInt& right) const;
			FInt operator-(const int& right) const;

			FInt operator*(const FInt& right) const;
			FInt operator*(const FInt& right) const;

			FInt operator/(const FInt& right) const;
			FInt operator/(const int& right) const;

			FInt operator%(const FInt& right) const;
			FInt operator%(const int& right) const;
		};
	}
}