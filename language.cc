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
    const SyllableGenerator Workspace::LANGUAGE[6][2][36] =
    {
      // Aslan
      {{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       },{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC
       }},
      // Darrian
      {{
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV
       },{
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V
       }},
      // Droyne
      {{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::V,   &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       },{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       }},
      // Vargr
      {{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       },{
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       }},
      // Vilani
      {{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       },{
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       }},
      // Zhodani
      {{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       },{
         &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,   &Workspace::V,
         &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,  &Workspace::CV,
         &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,  &Workspace::VC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC,
         &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC, &Workspace::CVC
       }}
    };
  };
};
