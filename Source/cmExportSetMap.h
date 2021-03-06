/* Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
   file Copyright.txt or https://cmake.org/licensing for details.  */
#ifndef cmExportSetMap_h
#define cmExportSetMap_h

#include "cmConfigure.h" // IWYU pragma: keep

#include <map>
#include <string>

class cmExportSet;

/// A name -> cmExportSet map with overloaded operator[].
class cmExportSetMap : public std::map<std::string, cmExportSet*>
{
  using derived = std::map<std::string, cmExportSet*>;

public:
  /** \brief Overloaded operator[].
   *
   * The operator is overloaded because cmExportSet has no default constructor:
   * we do not want unnamed export sets.
   */
  cmExportSet* operator[](const std::string& name);

  void clear();

  cmExportSetMap();

  /// Overloaded destructor deletes all member export sets.
  ~cmExportSetMap();

  cmExportSetMap(const cmExportSetMap&) = delete;
  cmExportSetMap& operator=(const cmExportSetMap&) = delete;
};

#endif
