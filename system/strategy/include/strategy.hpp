//===--- ASTConcept.h - Concepts Related AST Data Structures ----*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
///
/// \file
/// \brief This file provides AST data structures related to concepts.
///
//===----------------------------------------------------------------------===//
#ifndef STRATEGY_HPP
#define STRATEGY_HPP

#include <string>

/*
 * @brief This is the interface that will be used by the main program
 * to call the strategy function.
 * @return The strategy function will return a string that will be printed
 */
std::string strategy(); // This is the function that will be called from the main program

#endif // STRATEGY_HPP