//===-- instruments/include/stock.hpp - Stock class definition -------*- C++ -*-===//
//
// Part of the QuantSC Trading Project, under the GNU General Public License v3.0.
// See https://github.com/quantsc/qsc-trading/blob/main/LICENSE for license information.
// SPDX-License-Identifier: GNU General Public License v3.0 only
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file contains the declaration of the stock class, which is the
/// base class for all stock instruments. 
///
//===----------------------------------------------------------------------===//

#ifndef INSTRUMENTS_INCLUDE_STOCK_HPP
#define INSTRUMENTS_INCLUDE_STOCK_HPP

/// Does foo and bar.
///
/// Does not do foo the usual way if \p Baz is true.
///
/// Typical usage:
/// \code
///   fooBar(false, "quux", Res);
/// \endcode
///
/// \param Quux kind of foo to do.
/// \param [out] Result filled with bar sequence on foo success.
///
/// \returns true on success.
class Stock {
public:
  Stock() = default;
  virtual ~Stock() = default;
  virtual void print() const = 0;
};



#endif // INSTRUMENTS_INCLUDE_STOCK_HPP