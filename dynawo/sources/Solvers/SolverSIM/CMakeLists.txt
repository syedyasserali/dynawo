# Copyright (c) 2015-2019, RTE (http://www.rte-france.com)
# See AUTHORS.txt
# All rights reserved.
# This Source Code Form is subject to the terms of the Mozilla Public
# License, v. 2.0. If a copy of the MPL was not distributed with this
# file, you can obtain one at http://mozilla.org/MPL/2.0/.
# SPDX-License-Identifier: MPL-2.0
#
# This file is part of Dynawo, an hybrid C++/Modelica open source time domain simulation tool for power systems.

SET(SOLVER_SIM_VERSION_STRING ${DYNAWO_VERSION_STRING})
SET(SOLVER_SIM_VERSION_MAJOR ${DYNAWO_VERSION_MAJOR})

SET(SOLVER_SIM_SOURCES
    DYNSolverEulerKIN.cpp
    DYNSolverSIM.cpp
    )

SET(SOLVER_SIM_INCLUDE_HEADERS
    DYNSolverSIM.h
    )

ADD_LIBRARY(dynawo_SolverSIM SHARED ${SOLVER_SIM_SOURCES})

TARGET_INCLUDE_DIRECTORIES(dynawo_SolverSIM INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

TARGET_LINK_LIBRARIES(dynawo_SolverSIM
    dynawo_SolverKINSOL
    )

IF(${NICSLU_FOUND})
    TARGET_INCLUDE_DIRECTORIES(dynawo_SolverSIM SYSTEM PUBLIC ${NICSLU_INCLUDE_DIR})
    TARGET_LINK_LIBRARIES(dynawo_SolverSIM ${NICSLU_LIBRARIES} ${SUNDIALS_SUNLINSOLNICSLU_LIBRARY})
ENDIF()

IF (APPLE)
  IF(LIBRARY_TYPE STREQUAL "STATIC")
    TARGET_LINK_LIBRARIES(dynawo_SolverSIM "-flat_namespace -undefined warning")
  ENDIF()
ENDIF()

SET_TARGET_PROPERTIES(dynawo_SolverSIM PROPERTIES VERSION ${SOLVER_SIM_VERSION_STRING}
                                                SOVERSION ${SOLVER_SIM_VERSION_MAJOR})

INSTALL(TARGETS dynawo_SolverSIM DESTINATION ${libdir})
INSTALL(FILES ${SOLVER_SIM_INCLUDE_HEADERS} DESTINATION ${includedir})

DESC_SOLVER(dynawo_SolverSIM)
