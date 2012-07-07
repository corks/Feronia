/// @file
/// @author  Michael Rodriguez <michael.rodriguez@fill.this.in.later>
/// @version 1.0
///
/// @section LICENSE
///
/// Copyright (c) 2012 Corks Development Group
///
/// Permission is hereby granted, free of charge, to any person obtaining a copy
/// of this software and associated documentation files (the "Software"), to
/// deal in the Software without restriction, including without limitation the
/// rights to use, copy, modify, merge, publish, distribute, sublicense,
/// and/or sell copies of the Software, and to permit persons to whom the
/// Software is furnished to do so, subject to the following conditions:
///
/// The above copyright notice and this permission notice shall be included in
/// all copies or substantial portions of the Software.
///
/// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
/// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
/// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
/// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
/// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
/// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
/// DETAILS IN THE SOFTWARE.
///
/// @section DESCRIPTION
///
/// The AbstractNetwork abstract class provides the interface needed for
/// platform-specific network code.

#pragma once

#include <string>

class AbstractNetwork
{
public:
    /// Listens for incoming connections. This function must be implemented by
    /// the derived class.
    ///
    /// @param port The port to listen on.
    /// @param ip   The IP to bind to. If this argument is not passed,
    ///             "localhost" will be used.
    virtual void listen(const int port,
                        const std::string& ip = "localhost") = 0;

    /// Polls the listeners. This function must be implemented by the derived
    /// class.
    virtual void main_loop() = 0;

    /// Stops polling the listeners. This function must be implemented by the
    /// derived class.
    virtual void exit_loop() = 0;

protected:
    bool running;
    AbstractNetwork();
};
