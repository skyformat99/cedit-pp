//    This file is part of cedit++.
//    Copyright (C) 2018 kawatea
//
//    cedit++ is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    cedit++ is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with cedit++.  If not, see <https://www.gnu.org/licenses/>.

#ifndef CEDIT_FUNCTION_KILL_LINE_H_
#define CEDIT_FUNCTION_KILL_LINE_H_

#include <glibmm/ustring.h>
#include <gtksourceviewmm/buffer.h>

namespace function {
    class kill_line final {
        public:
        kill_line() = default;
        ~kill_line() = default;
        
        void clear();
        void apply(const Glib::RefPtr<Gsv::Buffer>& buffer);
        
        private:
        bool in_process = false;
        Glib::ustring kill_buffer = "";
    };
}

#endif
