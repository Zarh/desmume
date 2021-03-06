//taken from fceux on 27-oct-2008
//subsequently modified for desmume

/*
	Copyright (C) 2008-2009 DeSmuME team

	This file is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 2 of the License, or
	(at your option) any later version.

	This file is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with the this software.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _STRINGUTIL_H_
#define _STRINGUTIL_H_

#include <string>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <vector>
#include <iostream>
#include <cstdio>

#include "../types.h"

std::vector<std::string> tokenize_str(const std::string & str,const std::string & delims);

std::string stditoa(int n);

std::string mass_replace(const std::string &source, const std::string &victim, const std::string &replacement);

#endif
