#include "version.h"

// The following header file is autogenerated by version.cmake, and will export
// a definition of the current git version for the build
#include "gen_versionnumber.h"

namespace Ripes {

QString getRipesVersion() { return QString(RIPES_GIT_VERSION); }

} // namespace Ripes
