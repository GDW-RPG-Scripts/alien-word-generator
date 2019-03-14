/**
 * Alien Word Generator, an application for generating Traveller Universe
 * alien words and names.
 *
 * Copyright (C) 2019 Michael N. Henry
 *
 * This file is part of GDW RPG Vehicles.
 *
 * GDW RPG Vehicles is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * GDW RPG Vehicles is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details. You should have
 * received a copy of the GNU General Public License along with Alien Word
 * Generator. If not, see <http://www.gnu.org/licenses/>.
 */

#include "workspace.hh"

namespace GDW
{
  namespace RPG
  {
    const char*
    Workspace::LETTER[6][3][216] =
    {
      // Aslan
      {{
         // 1
         "f"  , "f"  , "f"  , "f"  , "f"  , "f"  , // 1
         "f"  , "f"  , "f"  , "f"  , "f"  , "f"  , // 2
         "ft" , "ft" , "ft" , "ft" , "ft" , "ft" , // 3
         "ft" , "ft" , "ft" , "ft" , "h"  , "h"  , // 4
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 5
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 6
         // 2
         "h"  , "h"  , "h"  , "h"  , "hf" , "hf" , // 1
         "hf" , "hf" , "hf" , "hk" , "hk" , "hk" , // 2
         "hk" , "hk" , "hk" , "hk" , "hk" , "hk" , // 3
         "hk" , "hk" , "hk" , "hl" , "hl" , "hl" , // 4
         "hl" , "hl" , "hl" , "hl" , "hl" , "hr" , // 5
         "hr" , "hr" , "hr" , "hr" , "hr" , "hr" , // 6
         // 3
         "ht" , "ht" , "ht" , "ht" , "ht" , "ht" , // 1
         "ht" , "ht" , "ht" , "ht" , "ht" , "ht" , // 2
         "hw" , "hw" , "hw" , "hw" , "hw" , "k"  , // 3
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 4
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 5
         "k"  , "k"  , "k"  , "k"  , "kh" , "kh" , // 6
         // 4
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 1
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 2
         "kh" , "kht", "kht", "kht", "kht", "kht", // 3
         "kht", "kht", "kht", "kht", "kht", "kht", // 4
         "kt" , "kt" , "kt" , "kt" , "kt" , "kt" , // 5
         "kt" , "kt" , "kt" , "kt" , "l"  , "l"  , // 6
         // 5
         "l"  , "l"  , "l"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "s"  , "s"  , // 2
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 3
         "s"  , "s"  , "st" , "st" , "st" , "st" , // 4
         "st" , "st" , "st" , "t"  , "t"  , "t"  , // 5
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 6
         // 6
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 1
         "t"  , "t"  , "t"  , "t"  , "t"  , "tl" , // 2
         "tl" , "tl" , "tl" , "tl" , "tr" , "tr" , // 3
         "tr" , "tr" , "tr" , "w"  , "w"  , "w"  , // 4
         "w"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 5
         "w"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 6
         // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "ai" , // 1
         "ai" , "ai" , "ai" , "ai" , "ai" , "ai" , // 2
         "ai" , "ai" , "ai" , "ai" , "ao" , "ao" , // 3
         "ao" , "ao" , "ao" , "ao" , "ao" , "ao" , // 4
         "au" , "au" , "au" , "au" , "e"  , "e"  , // 5
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 6
         // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "ea" , "ea" , "ea" , "ea" , "ea" , "ea" , // 4
         "ea" , "ea" , "ea" , "ea" , "ea" , "ea" , // 5
         "ea" , "ea" , "ea" , "ea" , "ea" , "ea" , // 6
         // 4
         "ea" , "ea" , "ea" , "ea" , "ea" , "ea" , // 1
         "ei" , "ei" , "ei" , "ei" , "ei" , "ei" , // 2
         "ei" , "ei" , "ei" , "ei" , "ei" , "ei" , // 3
         "ei" , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "iy" , // 6
         // 5
         "iy" , "iy" , "iy" , "iy" , "iy" , "iy" , // 1
         "iy" , "iy" , "iy" , "iy" , "iy" , "o"  , // 2
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 3
         "o"  , "oa" , "oa" , "oa" , "oa" , "oi" , // 4
         "oi" , "oi" , "oi" , "oi" , "oi" , "oi" , // 5
         "oi" , "ou" , "ou" , "ou" , "ou" , "ou" , // 6
         // 6
         "u"  , "u"  , "u"  , "u"  , "ua" , "ua" , // 1
         "ua" , "ua" , "ui" , "ui" , "ui" , "ui" , // 2
         "ya" , "ya" , "ya" , "ya" , "ya" , "ya" , // 3
         "ya" , "ya" , "ye" , "ye" , "ye" , "ye" , // 4
         "ye" , "ye" , "ye" , "ye" , "yo" , "yo" , // 5
         "yo" , "yo" , "yu" , "yu" , "yu" , "yu"   // 6
       },{
         // 1
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 1
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 2
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 3
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 4
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 5
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 6
         // 2
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 1
         "h"  , "h"  , "h"  , "h"  , "kh" , "kh" , // 2
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 3
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 4
         "kh" , "kh" , "kh" , "kh" , "l"  , "l"  , // 5
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 6
         // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 1
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 2
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 4
         "lr" , "lr" , "lr" , "lr" , "lr" , "lr" , // 5
         "lr" , "lr" , "lr" , "lr" , "lr" , "lr" , // 6
         // 4
         "lr" , "lr" , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 3
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "rl" , "rl" , "rl" , "rl" , "rl" , // 5
         "rl" , "rl" , "rl" , "rl" , "rl" , "rl" , // 6
         // 5
         "rl" , "rl" , "rl" , "rl" , "rl" , "rl" , // 1
         "rl" , "s"  , "s"  , "s"  , "s"  , "s"  , // 2
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 3
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 4
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 5
         "s"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 6
         // 6
         "w"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 1
         "w"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 2
         "w"  , "w"  , "w"  , "w"  , "w"  , "w"  , // 3
         "w"  , "w"  , "w"  , "w"  , "'"  , "'"  , // 4
         "'"  , "'"  , "'"  , "'"  , "'"  , "'"  , // 5
         "'"  , "'"  , "'"  , "'"  , "'"  , "'"   , // 6
       }},
      // Darrian
      {{
         // 1
         "b"  , "b"  , "b"  , "b"  , "b"  , "b"  , // 1
         "b"  , "b"  , "b"  , "b"  , "b"  , "b"  , // 2
         "b"  , "b"  , "b"  , "b"  , "b"  , "d"  , // 3
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 4
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 5
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 6
         // 2
         "d"  , "d"  , "d"  , "g"  , "g"  , "g"  , // 1
         "g"  , "g"  , "g"  , "g"  , "p"  , "p"  , // 2
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 3
         "p"  , "p"  , "p"  , "p"  , "t"  , "t"  , // 4
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 5
         "th" , "th" , "th" , "th" , "th" , "th" , // 6
         // 3
         "th" , "k"  , "k"  , "k"  , "k"  , "k"  , // 1
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 2
         "m"  , "m"  , "m"  , "m"  , "n"  , "n"  , // 3
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 5
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 6
         // 4
         "n"  , "n"  , "z"  , "z"  , "z"  , "z"  , // 1
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 2
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 3
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 4
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 5
         "l"  , "l"  , "l"  , "l"  , "r"  , "r"  , // 6
         // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "y"  , "y"  , "y"  , "y"  , "y"  , "y"  , // 3
         "zb" , "zb" , "zb" , "zb" , "zd" , "zd" , // 4
         "zd" , "zd" , "zd" , "zg" , "zg" , "zg" , // 5
         "zl" , "zl" , "zl" , "mb" , "mb" , "mb" , // 6
         // 6
         "mb" , "mb" , "nd" , "nd" , "nd" , "nd" , // 1
         "nd" , "ngg", "ngg", "ngg", "ry" , "ry" , // 2
         "ry" , "ry" , "ry" , "ly" , "ly" , "ly" , // 3
         "ny" , "ny" , "ny" , "ny" , "ny" , "ny" , // 4
         "lz" , "lz" , "lz" , "lz" , "lz" , "ld" , // 5
         "ld" , "ld" , "ld" , "ld" , "ld" , "ld" , // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 6
         // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "e"  , // 2
         "a"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 4
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 5
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 6
         // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "e"  , "e"  , "eh" , "eh" , // 4
         "eh" , "eh" , "eh" , "eh" , "eh" , "eh" , // 5
         "eh" , "eh" , "eh" , "eh" , "eh" , "eh" , // 6
         // 4
         "eh" , "eh" , "eh" , "eh" , "eh" , "eh" , // 1
         "eh" , "eh" , "eh" , "eh" , "eh" , "eh" , // 2
         "eh" , "eh" , "eh" , "i"  , "i"  , "i"  , // 3
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 6
         // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 1
         "i"  , "i"  , "ih" , "ih" , "ih" , "ih" , // 2
         "ih" , "ih" , "ih" , "ih" , "ih" , "ih" , // 3
         "ih" , "ih" , "ih" , "ih" , "ih" , "ih" , // 4
         "ih" , "ih" , "ih" , "ih" , "ih" , "ih" , // 5
         "ih" , "o"  , "o"  , "o"  , "o"  , "o"  , // 6
         // 6
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 1
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 2
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 3
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 4
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 5
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 6
       },{
         // 1
         "bh" , "bh" , "bh" , "bh" , "bh" , "bh" , // 1
         "bh" , "bh" , "bh" , "dh" , "dh" , "dh" , // 2
         "dh" , "dh" , "dh" , "dh" , "dh" , "dh" , // 3
         "gh" , "gh" , "gh" , "gh" , "gh" , "gh" , // 4
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 5
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 6
         // 2
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 1
         "k"  , "k"  , "k"  , "n"  , "n"  , "n"  , // 2
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 3
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 5
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 6
         // 3
         "n"  , "n"  , "ng" , "ng" , "ng" , "ng" , // 1
         "ng" , "ng" , "ng" , "ng" , "ng" , "ng" , // 2
         "ng" , "ng" , "l"  , "l"  , "l"  , "l"  , // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 4
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 5
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 6
         // 4
         "l"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 3
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 6
         // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 1
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 2
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 3
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 4
         "m"  , "m"  , "m"  , "mb" , "mb" , "mb" , // 5
         "mb" , "mb" , "mb" , "nd" , "nd" , "nd" , // 6
         // 6
         "nd" , "nd" , "nd" , "ngg", "ngg", "ngg", // 1
         "yr" , "yr" , "yr" , "yr" , "yr" , "yr" , // 2
         "ly" , "ly" , "ly" , "ny" , "ny" , "ny" , // 3
         "lbh", "lbh", "lbh", "lz" , "lz" , "lz" , // 4
         "lz" , "lz" , "lz" , "ld" , "ld" , "ld" , // 5
         "ld" , "ld" , "ld" , "ld" , "ld" , "ld" , // 6
       }},
      // Droyne
      {{
         // 1
         "b"  , "b"  , "b"  , "b"  , "b"  , "b"  , // 1
         "b"  , "b"  , "br" , "br" , "br" , "br" , // 2
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 3
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 4
         "dr" , "dr" , "dr" , "dr" , "dr" , "f"  , // 5
         "f"  , "f"  , "f"  , "f"  , "f"  , "f"  , // 6
         // 2
         "f"  , "f"  , "f"  , "f"  , "f"  , "f"  , // 1
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 2
         "h"  , "h"  , "h"  , "h"  , "h"  , "h"  , // 3
         "h"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 4
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 5
         "k"  , "k"  , "kr" , "kr" , "kr" , "l"  , // 6
         // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 1
         "l"  , "l"  , "m"  , "m"  , "m"  , "m"  , // 2
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 3
         "m"  , "m"  , "m"  , "m"  , "n"  , "n"  , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 5
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 6
         // 4
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 1
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 2
         "pr" , "pr" , "r"  , "r"  , "r"  , "r"  , // 3
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 6
         // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 1
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 2
         "s"  , "ss" , "ss" , "ss" , "ss" , "ss" , // 3
         "ss" , "ss" , "ss" , "ss" , "ss" , "st" , // 4
         "st" , "st" , "t"  , "t"  , "t"  , "t"  , // 5
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 6
         // 6
         "th" , "th" , "th" , "th" , "th" , "tr" , // 1
         "tr" , "tr" , "tr" , "ts" , "ts" , "ts" , // 2
         "ts" , "ts" , "ts" , "ts" , "ts" , "ts" , // 3
         "tw" , "tw" , "tw" , "tw" , "tw" , "tw" , // 4
         "tw" , "tw" , "tw" , "v"  , "v"  , "v"  , // 5
         "v"  , "v"  , "v"  , "v"  , "v"  , "v"    // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "ay" , "ay" , "ay" , "ay" , "ay" , "ay" , // 5
         "ay" , "ay" , "ay" , "ay" , "ay" , "ay" , // 6
         // 2
         "ay" , "ay" , "ay" , "ay" , "ay" , "ay" , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 4
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 5
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 6
         // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 3
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 6
         // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 1
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 2
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 3
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 4
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 5
         "oy" , "oy" , "oy" , "oy" , "oy" , "oy" , // 6
         // 5
         "oy" , "oy" , "oy" , "oy" , "oy" , "oy" , // 1
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 2
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 3
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 4
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 5
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 6
         // 6
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 1
         "u"  , "u"  , "u"  , "ya" , "ya" , "ya" , // 2
         "ya" , "ya" , "ya" , "ya" , "ya" , "ya" , // 3
         "yo" , "yo" , "yo" , "yo" , "yo" , "yo" , // 4
         "yo" , "yu" , "yu" , "yu" , "yu" , "yu" , // 5
         "yu" , "yu" , "yu" , "yu" , "yu" , "yu"   // 6
       },{
         // 1
         "b"  , "b"  , "b"  , "b"  , "b"  , "b"  , // 1
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 2
         "d"  , "d"  , "d"  , "d"  , "d"  , "f"  , // 3
         "f"  , "f"  , "f"  , "f"  , "h"  , "h"  , // 4
         "h"  , "h"  , "h"  , "h"  , "k"  , "k"  , // 5
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 6
         // 2
         "l"  , "l"  , "l"  , "l"  , "lb" , "lb" , // 1
         "ld" , "ld" , "ld" , "ld" , "ld" , "ld" , // 2
         "ld" , "lk" , "lk" , "lk" , "lk" , "lm" , // 3
         "lm" , "lm" , "ln" , "lp" , "ls" , "ls" , // 4
         "lt" , "lt" , "m"  , "m"  , "m"  , "m"  , // 5
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 6
         // 3
         "m"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 1
         "n"  , "n"  , "p"  , "p"  , "p"  , "p"  , // 2
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 3
         "p"  , "p"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "r"  , "r"  , "r"  , "r"  , "rd" , // 5
         "rd" , "rd" , "rf" , "rf" , "rk" , "rk" , // 6
         // 4
         "rk" , "rk" , "rk" , "rm" , "rm" , "rm" , // 1
         "rm" , "rn" , "rn" , "rn" , "rp" , "rs" , // 2
         "rs" , "rs" , "rs" , "rt" , "rt" , "rt" , // 3
         "rt" , "rt" , "rv" , "rv" , "s"  , "s"  , // 4
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 6
         // 5
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 1
         "s"  , "s"  , "s"  , "sk" , "sk" , "sk" , // 2
         "sk" , "sk" , "sk" , "ss" , "ss" , "ss" , // 3
         "ss" , "ss" , "ss" , "ss" , "ss" , "st" , // 4
         "st" , "st" , "st" , "st" , "t"  , "t"  , // 5
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 6
         // 6
         "t"  , "t"  , "t"  , "t"  , "th" , "th" , // 1
         "th" , "th" , "th" , "th" , "ts" , "ts" , // 2
         "ts" , "ts" , "ts" , "ts" , "ts" , "ts" , // 3
         "ts" , "ts" , "v"  , "v"  , "v"  , "v"  , // 4
         "x"  , "x"  , "x"  , "x"  , "x"  , "x"  , // 5
         "x"  , "x"  , "x"  , "x"  , "x"  , "x"    // 6
       }},
      // Vargr
      {{
         // 1
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 1
         "d"  , "d"  , "d"  , "dh" , "dh" , "dh" , // 2
         "dh" , "dh" , "dh" , "dh" , "dh" , "dh" , // 3
         "dz" , "dz" , "dz" , "dz" , "dz" , "f"  , // 4
         "f"  , "f"  , "f"  , "f"  , "f"  , "f"  , // 5
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 6
         // 2
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 1
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 2
         "gh" , "gh" , "gh" , "gh" , "gh" , "gh" , // 3
         "gh" , "gh" , "gh" , "gh" , "gh" , "gn" , // 4
         "gn" , "gn" , "gv" , "gv" , "gv" , "gv" , // 5
         "gv" , "gv" , "gv" , "gz" , "gz" , "gz" , // 6
         // 3
         "gz" , "k"  , "k"  , "k"  , "k"  , "k"  , // 1
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 2
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 3
         "k"  , "kf" , "kf" , "kf" , "kf" , "kf" , // 4
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 5
         "kh" , "kh" , "kh" , "kh" , "kh" , "kn" , // 6
         // 4
         "kn" , "kn" , "kn" , "kn" , "kn" , "ks" , // 1
         "ks" , "ks" , "ks" , "ks" , "ks" , "ks" , // 2
         "l"  , "l"  , "l"  , "l"  , "ll" , "ll" , // 3
         "ll" , "ll" , "ll" , "ll" , "ll" , "ll" , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 5
         "n"  , "ng" , "ng" , "ng" , "ng" , "ng" , // 6
         // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "rr" , // 2
         "rr" , "rr" , "rr" , "rr" , "rr" , "rr" , // 3
         "rr" , "s"  , "s"  , "s"  , "s"  , "s"  , // 4
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 5
         "t"  , "t"  , "t"  , "t"  , "t"  , "t"  , // 6
         // 6
         "t"  , "th" , "th" , "th" , "th" , "th" , // 1
         "th" , "th" , "th" , "ts" , "ts" , "ts" , // 2
         "ts" , "ts" , "v"  , "v"  , "v"  , "v"  , // 3
         "v"  , "v"  , "v"  , "v"  , "v"  , "v"  , // 4
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 5
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 6
         // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "ae" , "ae" , "ae" , "ae" , "ae" , "ae" , // 2
         "ae" , "ae" , "ae" , "ae" , "ae" , "ae" , // 3
         "ae" , "ae" , "ae" , "ae" , "ae" , "ae" , // 4
         "ae" , "ae" , "ae" , "ae" , "ae" , "ae" , // 5
         "ae" , "ae" , "ae" , "ae" , "ae" , "ae" , // 6
         // 3
         "ae" , "ae" , "ae" , "ae" , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 6
         // 4
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 1
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 2
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 3
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 4
         "o"  , "o"  , "o"  , "o"  , "oe" , "oe" , // 5
         "oe" , "oe" , "oe" , "oe" , "oe" , "oe" , // 6
         // 5
         "oe" , "oe" , "oe" , "oe" , "oe" , "oe" , // 1
         "oe" , "oe" , "ou" , "ou" , "ou" , "ou" , // 2
         "ou" , "ou" , "ou" , "ou" , "ou" , "ou" , // 3
         "ou" , "ou" , "ou" , "ou" , "ou" , "ou" , // 4
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 5
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 6
         // 6
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 1
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 2
         "ue" , "ue" , "ue" , "ue" , "ue" , "ue" , // 3
         "ue" , "ue" , "ue" , "ue" , "ue" , "ue" , // 4
         "ue" , "ue" , "ue" , "ue" , "ue" , "ue" , // 5
         "ue" , "ue" , "ue" , "ue" , "ue" , "ue"   // 6
       },{
         // 1
         "dh" , "dh" , "dh" , "dh" , "dh" , "dz" , // 1
         "dz" , "dz" , "dz" , "dz" , "g"  , "g"  , // 2
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 3
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 4
         "g"  , "gh" , "gh" , "gh" , "gh" , "gh" , // 5
         "gh" , "gh" , "gh" , "gh" , "gh" , "ghz", // 6
         // 2
         "ghz", "ghz", "ghz", "ghz", "gz" , "gz" , // 1
         "gz" , "gz" , "gz" , "k"  , "k"  , "k"  , // 2
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 3
         "k"  , "kh" , "kh" , "kh" , "kh" , "kh" , // 4
         "kh" , "kh" , "kh" , "kh" , "kh" , "khs", // 5
         "khs", "khs", "khs", "khs", "ks" , "ks" , // 6
         // 3
         "ks" , "ks" , "ks" , "ks" , "l"  , "l"  , // 1
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 2
         "l"  , "l"  , "ll" , "ll" , "ll" , "ll" , // 3
         "ll" , "n"  , "n"  , "n"  , "n"  , "n"  , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 5
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 6
         // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 1
         "n"  , "n"  , "ng" , "ng" , "ng" , "ng" , // 2
         "ng" , "ng" , "ng" , "ng" , "ng" , "ng" , // 3
         "ng" , "ng" , "ng" , "ng" , "ng" , "ng" , // 4
         "ng" , "ng" , "ng" , "ng" , "ng" , "ng" , // 5
         "ng" , "ng" , "ng" , "r"  , "r"  , "r"  , // 6
         // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "rr" , "rr" , "rr" , "rr" , "rr" , "rr" , // 3
         "rr" , "rr" , "rr" , "rr" , "rr" , "rr" , // 4
         "rr" , "rr" , "rr" , "rrg", "rrg", "rrg", // 5
         "rrg", "rrg","rrgh","rrgh","rrgh","rrgh", // 6
         // 6
         "rrgh","rs" , "rs" , "rs" , "rs" , "rs" , // 1
         "rz" , "rz" , "rz" , "rz" , "rz" , "s"  , // 2
         "s"  , "s"  , "s"  , "s"  , "th" , "th" , // 3
         "th" , "th" , "th" , "ts" , "ts" , "ts" , // 4
         "ts" , "ts" , "z"  , "z"  , "z"  , "z"  , // 5
         "z"  , "z"  , "z"  , "z"  , "z"  , "z"  , // 6
       }},
      // Vilani
      {{
         // 1
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 1
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 2
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 3
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 4
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 5
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"  , // 6
         // 2
         "k"  , "k"  , "k"  , "g"  , "g"  , "g"  , // 1
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 2
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 3
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 4
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 5
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 6
         // 3
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 1
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 2
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 3
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 4
         "m"  , "m"  , "m"  , "d"  , "d"  , "d"  , // 5
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 6
         // 4
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 1
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 2
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 4
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 5
         "l"  , "l"  , "l"  , "sh" , "sh" , "sh" , // 6
         // 5
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 1
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 2
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 3
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 4
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 5
         "kh" , "kh" , "kh" , "kh" , "kh" , "kh" , // 6
         // 6
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 1
         "n"  , "n"  , "n"  , "n"  , "s"  , "s"  , // 2
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 3
         "s"  , "s"  , "p"  , "p"  , "p"  , "p"  , // 4
         "b"  , "b"  , "b"  , "b"  , "z"  , "z"  , // 5
         "z"  , "z"  , "r"  , "r"  , "r"  , "r"    // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 6
         // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 6
         // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 3
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 6
         // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 1
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 2
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 3
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "i"  , "i"  , "i"  , "u"  , // 6
         // 5
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 1
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 2
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 3
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 4
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 5
         "u"  , "u"  , "u"  , "u"  , "u"  , "u"  , // 6
         // 6
         "u"  , "u"  , "u"  , "u"  , "aa" , "aa" , // 1
         "aa" , "aa" , "aa" , "aa" , "aa" , "aa" , // 2
         "ii" , "ii" , "ii" , "ii" , "ii" , "ii" , // 3
         "ii" , "ii" , "ii" , "ii" , "ii" , "ii" , // 4
         "ii" , "ii" , "ii" , "ii" , "uu" , "uu" , // 5
         "uu" , "uu" , "uu" , "uu" , "uu" , "uu"   // 6
       },{
         // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 3
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 6
         // 2
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 2
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 3
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 4
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 6
         // 3
         "r"  , "r"  , "r"  , "r"  , "n"  , "n"  , // 1
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 2
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 3
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 4
         "n"  , "n"  , "n"  , "n"  , "n"  , "m"  , // 5
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 6
         // 4
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 1
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 2
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 3
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 4
         "m"  , "m"  , "m"  , "m"  , "m"  , "m"  , // 5
         "m"  , "sh" , "sh" , "sh" , "sh" , "sh" , // 6
         // 5
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 1
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 2
         "sh" , "sh" , "sh" , "sh" , "sh" , "sh" , // 3
         "sh" , "sh" , "sh" , "g"  , "g"  , "g"  , // 4
         "g"  , "g"  , "g"  , "g"  , "g"  , "g"  , // 5
         "g"  , "g"  , "g"  , "g"  , "s"  , "s"  , // 6
         // 6
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 1
         "s"  , "s"  , "s"  , "s"  , "s"  , "d"  , // 2
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 3
         "d"  , "d"  , "d"  , "d"  , "d"  , "d"  , // 4
         "p"  , "p"  , "p"  , "p"  , "p"  , "p"  , // 5
         "k"  , "k"  , "k"  , "k"  , "k"  , "k"    // 6
       }},
      // Zhodani
      {{
         // 1
         "b"  , "b"  , "b"  , "b"  , "b"  , "bl" , // 1
         "bl" , "bl" , "br" , "br" , "br" , "br" , // 2
         "br" , "ch" , "ch" , "ch" , "ch" , "ch" , // 3
         "ch" , "ch" , "ch" , "ch" , "ch" , "ch" , // 4
         "ch" , "cht", "cht", "cht", "cht", "cht", // 5
         "cht", "cht", "d"  , "d"  , "d"  , "d"  , // 6
         // 2
         "d"  , "d"  , "d"  , "d"  , "d"  , "dl" , // 1
         "dl" , "dl" , "dl" , "dl" , "dl" , "dl" , // 2
         "dr" , "dr" , "dr" , "dr" , "dr" , "f"  , // 3
         "f"  , "f"  , "f"  , "f"  , "fl" , "fl" , // 4
         "fl" , "fr" , "fr" , "fr" , "j"  , "j"  , // 5
         "j"  , "j"  , "j"  , "j"  , "j"  , "jd" , // 6
         // 3
         "jd" , "jd" , "jd" , "jd" , "k"  , "k"  , // 1
         "k"  , "k"  , "k"  , "kl" , "kl" , "kr" , // 2
         "kr" , "l"  , "l"  , "l"  , "m"  , "m"  , // 3
         "n"  , "n"  , "n"  , "n"  , "n"  , "n"  , // 4
         "n"  , "n"  , "p"  , "p"  , "p"  , "p"  , // 5
         "p"  , "p"  , "p"  , "pl" , "pl" , "pl" , // 6
         // 4
         "pl" , "pl" , "pl" , "pl" , "pr" , "pr" , // 1
         "pr" , "q"  , "q"  , "ql" , "ql" , "qr" , // 2
         "qr" , "r"  , "r"  , "r"  , "r"  , "r"  , // 3
         "s"  , "s"  , "s"  , "s"  , "s"  , "s"  , // 4
         "s"  , "sh" , "sh" , "sh" , "sh" , "sh" , // 5
         "sh" , "sh" , "sht", "sht", "sht", "sht", // 6
         // 5
         "sht", "sht", "sht", "t"  , "t"  , "t"  , // 1
         "t"  , "t"  , "st" , "st" , "st" , "st" , // 2
         "st" , "st" , "st" , "tl" , "tl" , "tl" , // 3
         "tl" , "tl" , "tl" , "tl" , "tl" , "tl" , // 4
         "tl" , "ts" , "ts" , "ts" , "v"  , "v"  , // 5
         "v"  , "v"  , "v"  , "vl" , "vl" , "vr" , // 6
         // 6
         "vr" , "y"  , "y"  , "y"  , "z"  , "z"  , // 1
         "z"  , "z"  , "z"  , "zd" , "zd" , "zd" , // 2
         "zd" , "zd" , "zd" , "zd" , "zd" , "zd" , // 3
         "zd" , "zh" , "zh" , "zh" , "zh" , "zh" , // 4
         "zh" , "zh" , "zhd", "zhd", "zhd", "zhd", // 5
         "zhd", "zhd", "zhd", "zhd", "zhd", "zhd", // 6
       },{
         // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 3
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 4
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 5
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 6
         // 2
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 1
         "a"  , "a"  , "a"  , "a"  , "a"  , "a"  , // 2
         "a"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 4
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 5
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 6
         // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 1
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 2
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 3
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 4
         "e"  , "e"  , "e"  , "e"  , "e"  , "e"  , // 5
         "e"  , "e"  , "e"  , "i"  , "i"  , "i"  , // 6
         // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 1
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 2
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 3
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 4
         "i"  , "i"  , "i"  , "i"  , "i"  , "i"  , // 5
         "i"  , "i"  , "ia" , "ia" , "ia" , "ia" , // 6
         // 5
         "ia" , "ia" , "ia" , "ia" , "ia" , "ia" , // 1
         "ia" , "ia" , "ia" , "ia" , "ia" , "ia" , // 2
         "ia" , "ia" , "ia" , "ia" , "ia" , "ia" , // 3
         "ia" , "ia" , "ia" , "ia" , "ia" , "ia" , // 4
         "ie" , "ie" , "ie" , "ie" , "ie" , "ie" , // 5
         "ie" , "ie" , "ie" , "ie" , "ie" , "ie" , // 6
         // 6
         "ie" , "ie" , "ie" , "ie" , "ie" , "ie" , // 1
         "ie" , "ie" , "ie" , "ie" , "ie" , "ie" , // 2
         "ie" , "ie" , "ie" , "ie" , "o"  , "o"  , // 3
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 4
         "o"  , "o"  , "o"  , "o"  , "o"  , "o"  , // 5
         "r"  , "r"  , "r"  , "r"  , "r"  , "r"  , // 6
       },{
         // 1
         "b"  , "b"  , "bl" , "bl" , "bl" , "bl" , // 1
         "bl" , "bl" , "bl" , "br" , "br" , "br" , // 2
         "br" , "br" , "br" , "br" , "ch" , "ch" , // 3
         "ch" , "ch" , "ch" , "d"  , "d"  , "d"  , // 4
         "d"  , "dl" , "dl" , "dl" , "dl" , "dl" , // 5
         "dl" , "dl" , "dr" , "dr" , "dr" , "dr" , // 6
         // 2
         "dr" , "dr" , "dr" , "f"  , "f"  , "f"  , // 1
         "f"  , "f"  , "fl" , "fl" , "fl" , "fl" , // 2
         "fl" , "fr" , "fr" , "fr" , "fr" , "fr" , // 3
         "j"  , "j"  , "j"  , "j"  , "k"  , "k"  , // 4
         "kl" , "kl" , "kl" , "kl" , "kr" , "kr" , // 5
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 6
         // 3
         "l"  , "l"  , "l"  , "l"  , "l"  , "l"  , // 1
         "m"  , "m"  , "n"  , "n"  , "nch", "nch", // 2
         "nch", "nch", "nch", "nch", "nch", "nj" , // 3
         "nj" , "nj" , "nj" , "nj" , "ns" , "ns" , // 4
         "ns" , "ns" , "ns" , "nsh", "nsh", "nsh", // 5
         "nsh", "nsh", "nsh", "nsh", "nt" , "nt" , // 6
         // 4
         "nt" , "nt" , "nts", "nts", "nts", "nts", // 1
         "nz" , "nz" , "nz" , "nz" , "nz" , "nzh", // 2
         "nzh", "nzh", "nzh", "nzh", "nzh", "nzh", // 3
         "p"  , "p"  , "pl" , "pl" , "pl" , "pl" , // 4
         "pl" , "pl" , "pl" , "pr" , "pr" , "pr" , // 5
         "pr" , "pr" , "pr" , "pr" , "q"  , "q"  , // 6
         // 5
         "ql" , "ql" , "qr" , "qr" , "r"  , "r"  , // 1
         "r"  , "r"  , "r"  , "sh" , "sh" , "sh" , // 2
         "sh" , "sh" , "sh" , "sh" , "t"  , "t"  , // 3
         "t"  , "t"  , "ts" , "ts" , "ts" , "ts" , // 4
         "ts" , "ts" , "ts" , "tl" , "tl" , "tl" , // 5
         "tl" , "tl" , "tl" , "tl" , "tl" , "tl" , // 6
         // 6
         "v"  , "v"  , "v"  , "v"  , "v"  , "vl" , // 1
         "vl" , "vl" , "vl" , "vr" , "vr" , "vr" , // 2
         "vr" , "vr" , "z"  , "z"  , "z"  , "z"  , // 3
         "z"  , "z"  , "z"  , "z"  , "z"  , "zh" , // 4
         "zh" , "zh" , "zh" , "zh" , "zh" , "zh" , // 5
         "'"  , "'"  , "'"  , "'"  , "'"  , "'"  , // 6
       }}
    };
  };
};
