/**
 * Copyright 2013 Axel Huebl, Heiko Burau, Rene Widera
 *
 * This file is part of PIConGPU.
 *
 * PIConGPU is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PIConGPU is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PIConGPU.
 * If not, see <http://www.gnu.org/licenses/>.
 */



#ifndef LASERNONE_HPP
#define	LASERNONE_HPP

#include "types.h"
#include "simulation_defines.hpp"

namespace picongpu
{
    /** No Laser initialization
     *
     */
    namespace laserNone
    {

        /** Compute the
         *
         */
        HINLINE float3_X laserLongitudinal( uint32_t, float_X& phase )
        {
            float3_X elong = float3_X(float_X(0.0), float_X(0.0), float_X(0.0));

            phase = float_X(0.0);

            return elong;
        }

        /**
         *
         * @param elong
         * @param phase
         * @param posX
         * @param posZ
         * @return
         */
        HDINLINE float3_X laserTransversal( float3_X elong, const float_X, const float_X, const float_X )
        {
            return elong;
        }

    }
}

#endif	/* LASERNONE_HPP */



