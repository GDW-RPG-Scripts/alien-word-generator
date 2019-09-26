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

#include "language.hh"

namespace GDW
{
  namespace RPG
  {
    const SyllableGenerator
    Language::SYLLABLE[LANGUAGE_TYPES][LETTER_TYPES][SYLLABLES] =
    {
      // Aslan
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::V,   &Language::V,   &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC
       },{
         // n/a
       }},
      // Darrian
      {{
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV
       },{
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V
       },{
         // n/a
       }},
      // Droyne
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         // n/a
       }},
      // K'kree
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC
       },{
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       }},
      // Vargr
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         // n/a
       }},
      // Vilani
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         // n/a
       }},
      // Zhodani
      {{
         &Language::V,   &Language::V,   &Language::V,   &Language::CV,  &Language::CV,  &Language::CV,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,   &Language::V,
         &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,  &Language::CV,
         &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,  &Language::VC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC,
         &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC, &Language::CVC
       },{
         // n/a
       }}
    };
  };
};
