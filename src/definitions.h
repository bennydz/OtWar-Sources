/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2019 Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef FS_DEFINITIONS_H_877452FEC245450C9F96B8FD268D8963
#define FS_DEFINITIONS_H_877452FEC245450C9F96B8FD268D8963

static constexpr auto STATUS_SERVER_NAME = "Open-Tibia BR Server";
static constexpr auto STATUS_SERVER_VERSION = "Based on TFS 1.3";
static constexpr auto MINOR_VERSION = "10";
static constexpr auto STATUS_SERVER_CREDITS = "OTServBR Team and Contributors, OTXServer (Mattyx Gomez) and The Forgotten Server Developers";
static constexpr auto STATUS_SERVER_CONTRIBUTORS = "Eduardo Dantas, Gpedro, Mateus and Otavio Milani";
static constexpr auto GIT_ISSUE_INFO = "Did you find a mistake or a debug? Report to our repository at the link below. Create an issue by going to the link and then 'new issue', put 'Title' and 'Description' and 'Submit Issue', just wait for a response from someone from OTServBR.";
static constexpr auto GIT_ISSUE = "https://github.com/opentibiabr/OTServBR-Global/issues";
static constexpr auto GIT_REPO = "https://github.com/opentibiabr/OTServBR-Global";
static constexpr auto GIT_CONTRIBUTORS = "https://github.com/opentibiabr/OTServBR-Global/graphs/contributors";

static constexpr auto CLIENT_VERSION_MIN = 1100;
static constexpr auto CLIENT_VERSION_MAX = 1149;
static constexpr auto CLIENT_VERSION_STR = "11.49";

static constexpr auto AUTHENTICATOR_DIGITS = 6U;
static constexpr auto AUTHENTICATOR_PERIOD = 30U;

#ifndef __FUNCTION__
#define __FUNCTION__ __func__
#endif

#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#endif

#include <cmath>

#ifdef _WIN32
#ifndef NOMINMAX
#define NOMINMAX
#endif

#define WIN32_LEAN_AND_MEAN

#ifdef _MSC_VER
#ifdef NDEBUG
#define _SECURE_SCL 0
#define HAS_ITERATOR_DEBUGGING 0
#endif

#pragma warning(disable:4127) // conditional expression is constant
#pragma warning(disable:4244) // 'argument' : conversion from 'type1' to 'type2', possible loss of data
#pragma warning(disable:4250) // 'class1' : inherits 'class2::member' via dominance
#pragma warning(disable:4267) // 'var' : conversion from 'size_t' to 'type', possible loss of data
#pragma warning(disable:4351) // new behavior: elements of array will be default initialized
#pragma warning(disable:4458) // declaration hides class member
#pragma warning(disable:4101) // local variable not referenced
#pragma warning(disable:4996) // declaration std::fpos<_Mbstatet>::seekpos
#endif

#define strcasecmp _stricmp
#define strncasecmp _strnicmp

#ifndef _WIN32_WINNT
// 0x0602: Windows 7
#define _WIN32_WINNT 0x0602
#endif
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

#endif