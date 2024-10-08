/* graphene-gobject.h: Shared GObject types
 *
 * SPDX-License-Identifier: MIT
 *
 * Copyright 2014  Emmanuele Bassi
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#pragma once

#include <glib-object.h>
#include <graphene.h>

G_BEGIN_DECLS

#define GRAPHENE_TYPE_POINT             (graphene_point_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_point_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_point_t, graphene_point_free)

#define GRAPHENE_TYPE_POINT3D           (graphene_point3d_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_point3d_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_point3d_t, graphene_point3d_free)

#define GRAPHENE_TYPE_SIZE              (graphene_size_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_size_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_size_t, graphene_size_free)

#define GRAPHENE_TYPE_RECT              (graphene_rect_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_rect_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_rect_t, graphene_rect_free)

#define GRAPHENE_TYPE_VEC2              (graphene_vec2_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_vec2_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_vec2_t, graphene_vec2_free)

#define GRAPHENE_TYPE_VEC3              (graphene_vec3_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_vec3_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_vec3_t, graphene_vec3_free)

#define GRAPHENE_TYPE_VEC4              (graphene_vec4_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_vec4_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_vec4_t, graphene_vec4_free)

#define GRAPHENE_TYPE_QUAD              (graphene_quad_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_quad_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_quad_t, graphene_quad_free)

#define GRAPHENE_TYPE_QUATERNION        (graphene_quaternion_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_quaternion_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_quaternion_t, graphene_quaternion_free)

#define GRAPHENE_TYPE_MATRIX            (graphene_matrix_get_type ())

GRAPHENE_AVAILABLE_IN_1_0
GType graphene_matrix_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_matrix_t, graphene_matrix_free)

#define GRAPHENE_TYPE_PLANE             (graphene_plane_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_plane_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_plane_t, graphene_plane_free)

#define GRAPHENE_TYPE_FRUSTUM           (graphene_frustum_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_frustum_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_frustum_t, graphene_frustum_free)

#define GRAPHENE_TYPE_SPHERE            (graphene_sphere_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_sphere_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_sphere_t, graphene_sphere_free)

#define GRAPHENE_TYPE_BOX               (graphene_box_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_box_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_box_t, graphene_box_free)

#define GRAPHENE_TYPE_TRIANGLE          (graphene_triangle_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_triangle_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_triangle_t, graphene_triangle_free)

#define GRAPHENE_TYPE_EULER             (graphene_euler_get_type ())

GRAPHENE_AVAILABLE_IN_1_2
GType graphene_euler_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_euler_t, graphene_euler_free)

#define GRAPHENE_TYPE_RAY               (graphene_ray_get_type ())

GRAPHENE_AVAILABLE_IN_1_4
GType graphene_ray_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_ray_t, graphene_ray_free)

#define GRAPHENE_TYPE_BOX2D             (graphene_box2d_get_type ())

GRAPHENE_AVAILABLE_IN_1_12
GType graphene_box2d_get_type (void);

G_DEFINE_AUTOPTR_CLEANUP_FUNC(graphene_box2d_t, graphene_box2d_free)

G_END_DECLS
