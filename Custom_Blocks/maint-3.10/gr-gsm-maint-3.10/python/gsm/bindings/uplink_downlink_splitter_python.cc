/*
 * Copyright 2022 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(flow_control/uplink_downlink_splitter.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(3b5118d93609f63437471b1c59878ed9)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gsm/flow_control/uplink_downlink_splitter.h>
// pydoc.h is automatically generated in the build directory
#include <uplink_downlink_splitter_pydoc.h>

void bind_uplink_downlink_splitter(py::module& m)
{

    using uplink_downlink_splitter    = ::gr::gsm::uplink_downlink_splitter;


    py::class_<uplink_downlink_splitter, gr::block, gr::basic_block,
        std::shared_ptr<uplink_downlink_splitter>>(m, "uplink_downlink_splitter", D(uplink_downlink_splitter))

        .def(py::init(&uplink_downlink_splitter::make),
           D(uplink_downlink_splitter,make)
        )
        



        ;




}







