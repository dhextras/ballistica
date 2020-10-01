// Copyright (c) 2011-2020 Eric Froemling

#include "ballistica/app/app_globals.h"

namespace ballistica {

AppGlobals::AppGlobals(int argc_in, char** argv_in)
    : argc{argc_in},
      argv{argv_in},
      main_thread_id{std::this_thread::get_id()} {}

}  // namespace ballistica
