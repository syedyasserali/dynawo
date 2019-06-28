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
#         libModelManager       #
#################################
SET(MODEL_MANAGER_VERSION_STRING ${DYNAWO_VERSION_STRING})
SET(MODEL_MANAGER_VERSION_MAJOR ${DYNAWO_VERSION_MAJOR})

SET(MODEL_MANAGER_SOURCES
    DYNModelManager.cpp
    DYNModelManagerCommon.cpp
    DYNModelManagerOwnFunctions.cpp
    )

SET(MODEL_MANAGER_INCLUDE_HEADERS
    DYNModelManager.h
    DYNModelManagerCommon.h
    DYNModelManagerOwnTypes.h
    DYNModelModelica.h
    DYNModelModelicaInit.h
    DYNModelModelicaDyn.h
    DYNModelManagerOwnFunctions.h
    )

ADD_LIBRARY(dynawo_ModelManager ${LIBRARY_TYPE} ${MODEL_MANAGER_SOURCES})

TARGET_INCLUDE_DIRECTORIES(dynawo_ModelManager SYSTEM PUBLIC ${OMC_INCLUDE_DIR})
TARGET_INCLUDE_DIRECTORIES(dynawo_ModelManager INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

TARGET_LINK_LIBRARIES(dynawo_ModelManager
    dynawo_ModelerCommon
    dynawo_SolverSubModel
    Modelica_externalC
    )

SET_TARGET_PROPERTIES(dynawo_ModelManager PROPERTIES VERSION ${MODEL_MANAGER_VERSION_STRING}
                                                   SOVERSION ${MODEL_MANAGER_VERSION_MAJOR})

IF(USE_ADEPT)
    TARGET_INCLUDE_DIRECTORIES(dynawo_ModelManager PUBLIC ${ADEPT_INCLUDE_DIR})
    TARGET_LINK_LIBRARIES(dynawo_ModelManager ${ADEPT_LIBRARY})
ENDIF(USE_ADEPT)

INSTALL(TARGETS dynawo_ModelManager DESTINATION ${libdir})
INSTALL(FILES ${MODEL_MANAGER_INCLUDE_HEADERS} DESTINATION ${includedir})

ADD_SUBDIRECTORY(ModelicaExternalC)
