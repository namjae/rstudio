/*
 * SessionAskPass.hpp
 *
 * Copyright (C) 2009-11 by RStudio, Inc.
 *
 * This program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef SESSION_SESSION_ASK_PASS_HPP
#define SESSION_SESSION_ASK_PASS_HPP

#include <string>

namespace core {
   class Error;
}
 
namespace session {
namespace modules {      
namespace ask_pass {


std::string activeWindow();
void setActiveWindow(const std::string& windowName);

struct PasswordInput
{
   PasswordInput() : cancelled(false), remember(false) {}
   bool cancelled;
   std::string password;
   bool remember;
};

core::Error askForPassword(const std::string& prompt,
                           const std::string& rememberPrompt,
                           PasswordInput* pInput);

core::Error initialize();
   
} // namespace ask_pass
} // namepace handlers
} // namesapce session

#endif // SESSION_SESSION_ASK_PASS_HPP