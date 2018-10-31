/* -*- c++ -*- */
/* 
 * Copyright 2017 <+YOU OR YOUR COMPANY+>.
 * 
 * This is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3, or (at your option)
 * any later version.
 * 
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this software; see the file COPYING.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street,
 * Boston, MA 02110-1301, USA.
 */


#ifndef INCLUDED_XCORR_FULL_CAPON_CCF_H
#define INCLUDED_XCORR_FULL_CAPON_CCF_H

#include <xcorr/api.h>
#include <gnuradio/sync_block.h>

namespace gr {
  namespace xcorr {

    /*!
     * \brief <+description of block+>
     * \ingroup xcorr
     *
     */
    class XCORR_API full_capon_ccf : virtual public gr::sync_block
    {
     public:
      typedef boost::shared_ptr<full_capon_ccf> sptr;

      /*!
       * \brief Return a shared_ptr to a new instance of xcorr::full_capon_ccf.
       *
       * To avoid accidental use of raw pointers, xcorr::full_capon_ccf's
       * constructor is in a private implementation
       * class. xcorr::full_capon_ccf::make is the public interface for
       * creating new instances.
       */
      static sptr make(int vec_in, int vec_out);
    };

  } // namespace xcorr
} // namespace gr

#endif /* INCLUDED_XCORR_FULL_CAPON_CCF_H */
