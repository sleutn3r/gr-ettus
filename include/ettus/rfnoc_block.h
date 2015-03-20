/* -*- c++ -*- */
/* Copyright 2015 Ettus Research
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * gr-ettus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with gr-ettus; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */

#ifndef INCLUDED_UHD_RFNOC_BLOCK_H
#define INCLUDED_UHD_RFNOC_BLOCK_H

#include <ettus/api.h>
#include <ettus/device3.h>
#include <gnuradio/block.h>
#include <uhd/stream.hpp>

namespace gr {
  namespace ettus {

    /*!
     * \brief Base class for RFNoC blocks.
     */
    class ETTUS_API rfnoc_block : public gr::block
    {
     protected:
      rfnoc_block(const std::string &name);
      rfnoc_block() {};

     public:

      // Add RFNoC-relevant definitions:
      //! Allows setting a register on the settings bus
      virtual void set_register(size_t reg, boost::uint32_t value) = 0;
      //! Return the full actual block ID of this block (e.g. 0/FFT_0)
      virtual std::string get_block_id() = 0;
    };

  } // namespace ettus
} // namespace gr

#endif /* INCLUDED_UHD_RFNOC_BLOCK_H */
