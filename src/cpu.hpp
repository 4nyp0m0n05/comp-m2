#ifndef CPU_H
#define CPU_H

#include <stdio.h>
#include <vector>

#include "const.hpp"

using namespace std;

class Cpu {
	public:
		bool step();
		vector<bool> getRegister();
		vector<bool> getPc();
		vector<bool> getInstructionCode();
		vector<bool> getAddress();
		int getCycle();
	private:
		vector<bool> reg = vector<bool>(WORD_SIZE);
		vector<bool> pc = vector<bool>(ADDR_SIZE);
		int cycle = 0;
		void increasePc();
		void read(vector<bool> adr);
		void write(vector<bool> adr);
		void add(vector<bool> adr);
		void sub(vector<bool> adr);
		void jump(vector<bool> adr);
		void jumpIfMax(vector<bool> adr);
		void jumpIfMin(vector<bool> adr);
		void shiftRight();
};

#endif
