/* Copyright (c) 2011-2014, Cyrille Favreau
 * All rights reserved. Do not distribute without permission.
 * Responsible Author: Cyrille Favreau <cyrille_favreau@hotmail.com>
 *
 * This file is part of Sol-R <https://github.com/cyrillefavreau/Sol-R>
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License version 3.0 as published
 * by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more
 * details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#pragma once

#include <scenes/Scene.h>

class WaterScene : public Scene
{
public:
    WaterScene(const std::string& name);
    ~WaterScene();

protected:
    virtual void doInitialize();
    virtual void doAnimate();
    virtual void doAddLights();

private:
    vec3f F(float x, float z, float stepX, float stepZ);
    vec3f P(float t, float stepX, float stepZ);
    void processCurve(bool update);
    void processParametricCurve(bool update);

private:
    int m_material;
    vec3f m_scale;
    int m_initialIndex;
    vec3f m_objectSize;
};
