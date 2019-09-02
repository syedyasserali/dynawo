# Copyright (c) 2015-2019, RTE (http://www.rte-france.com)
# See AUTHORS.txt
# All rights reserved.
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, you can obtain one at http://mozilla.org/MPL/2.0/.
# SPDX-License-Identifier: MPL-2.0
#
# This file is part of Dynawo, an hybrid C++/Modelica open source time domain simulation tool for power systems.

#################################
#        dumpSolver              #
#################################
SET(DUMP_SOLVER_SOURCES
    DYNDumpSolver.cpp
    )

ADD_EXECUTABLE(dumpSolver ${DUMP_SOLVER_SOURCES})

TARGET_LINK_LIBRARIES(dumpSolver
    XMLSAXFormatter${LibXML_LINK_SUFFIX}
    dynawo_SolverCommon
    #pthread
    )

IF ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  TARGET_LINK_LIBRARIES(dumpSolver "-lrt")
ENDIF()

IF(APPLE)
    TARGET_LINK_LIBRARIES(dumpSolver "-force_load" dynawo_Util)
ELSEIF(NOT MSVC)
    TARGET_LINK_LIBRARIES(dumpSolver "-Wl,--whole-archive" dynawo_Util "-Wl,--no-whole-archive")
ENDIF()

INSTALL(TARGETS dumpSolver EXPORT dynawo-targets DESTINATION ${sbindir})
