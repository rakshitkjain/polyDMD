//Contains all the data rading files (PDB, PSF, Mass and radii, parameter file on 29th August 2023)
#ifndef _READFILES_H
#define _READFILES_H
//Headers needed in writefiles.cpp
#include "particle.h"
#include "bond.h"
#include "nonbond.h"

class ReadFiles
{
	public:
		vector<std::string> atomtype_vector;//Find if this is actually being used
	//Reading PDB File
	void ReadPDBFile(std::string, vector<Particle>&, vector<double>&);
	//Reading PSF File
	void ReadPSFFile(std::string, vector<Particle>&, vector<BOND>&, vector<NONBOND>&);
	//Reading NAMD format Parameter file
	void ReadParameterFile(std::string, vector<Particle>&, vector<BOND>&, vector<NONBOND>&);
};
#endif

