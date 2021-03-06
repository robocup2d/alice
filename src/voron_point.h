// -*-c++-*-

/*
 *Copyright:

 Copyright (C) Hidehisa AKIYAMA

 This code is free software; you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation; either version 3, or (at your option)
 any later version.

 This code is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this code; see the file COPYING.  If not, write to
 the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.

 *EndCopyright:
 */

/////////////////////////////////////////////////////////////////////
#ifndef DY_VORON_POINT_H
#define DY_VORON_POINT_H

#include <rcsc/player/player_agent.h>
#include<rcsc/geom/vector_2d.h>
#include <rcsc/geom/voronoi_diagram.h>

using namespace rcsc;
class voron_point
{
public:
    static voron_point &instance()
    {
        static voron_point  s_miracle_voron_point;
        return s_miracle_voron_point;
    }

    static voron_point &i()
    {
        return instance();
    }

    const rcsc::VoronoiDiagram & passVoronoiDiagram(rcsc::PlayerAgent *agent);

    const rcsc::VoronoiDiagram & passVoronoiDiagram(const  rcsc::WorldModel &wm);



private:


    rcsc::VoronoiDiagram M_pass_voronoi_diagram;

};

#endif // MIRACLE_VORON_POINT_H
