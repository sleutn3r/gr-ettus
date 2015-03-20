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

#include "rfnoc_block_impl.h"

using namespace gr::ettus;

rfnoc_block::rfnoc_block(const std::string &name) :
    gr::block(name,
        /* Default IO signatures: These will be overridden later */
        gr::io_signature::make(0, 0, 1),
        gr::io_signature::make(0, 0, 1)
    )
{
    // nop
}

rfnoc_block_impl::rfnoc_block_impl()
{
    // nop
}

rfnoc_block_impl::~rfnoc_block_impl()
{
    // nop
}
