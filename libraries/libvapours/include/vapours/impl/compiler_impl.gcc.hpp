/*
 * Copyright (c) Atmosphère-NX
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <vapours/includes.hpp>
#include <vapours/defines.hpp>

#define AMS_PRAGMA_BEGIN_OPTIMIZE_O3() \
    _Pragma("GCC push_options")        \
    _Pragma("GCC optimize (\"-O3\")")

#define AMS_PRAGMA_BEGIN_OPTIMIZE_OS() \
    _Pragma("GCC push_options")        \
    _Pragma("GCC optimize (\"-Os\")")

#define AMS_PRAGMA_END_OPTIMIZE() \
    _Pragma("GCC pop_options")

#define AMS_CONCEPTS_REQUIRES_IF_SUPPORTED(__EXPR__) requires (__EXPR__)