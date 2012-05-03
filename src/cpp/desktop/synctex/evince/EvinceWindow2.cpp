/*
 * EvinceWindow2.cpp
 *
 * Copyright (C) 2009-12 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#include "EvinceWindow2.hpp"

namespace desktop {
namespace synctex {

EvinceWindow2::EvinceWindow2(const QString &service, QObject *parent)
    : EvinceWindow(service, parent)
{
}

EvinceWindow2::~EvinceWindow2()
{
}

} // namespace synctex
} // namespace desktop

