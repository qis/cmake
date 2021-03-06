/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */

#ifndef cmLDConfigLDConfigTool_h
#define cmLDConfigLDConfigTool_h

#include "cmLDConfigTool.h"

#include <string>
#include <vector>

class cmRuntimeDependencyArchive;

class cmLDConfigLDConfigTool : public cmLDConfigTool
{
public:
  cmLDConfigLDConfigTool(cmRuntimeDependencyArchive* archive);

  bool GetLDConfigPaths(std::vector<std::string>& paths) override;
};

#endif
