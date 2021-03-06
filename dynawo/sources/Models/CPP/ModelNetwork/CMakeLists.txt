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
#         ModelNetwork          #
#################################
set(MODEL_NAME
  DYNModelNetwork
  )

set(MODEL_SOURCES
  DYNDerivative.cpp
  DYNNetworkComponentImpl.cpp
  DYNModelBus.cpp
  DYNModelGenerator.cpp
  DYNModelSwitch.cpp
  DYNModelLine.cpp
  DYNModelLoad.cpp
  DYNModelShuntCompensator.cpp
  DYNModelStaticVarCompensator.cpp
  DYNModelTapChanger.cpp
  DYNModelThreeWindingsTransformer.cpp
  DYNModelTwoWindingsTransformer.cpp
  DYNModelDanglingLine.cpp
  DYNModelNetwork.cpp
  DYNModelCurrentLimits.cpp
  DYNModelTapChangerStep.cpp
  DYNModelRatioTapChanger.cpp
  DYNModelPhaseTapChanger.cpp
  DYNModelHvdcLink.cpp
  DYNModelVoltageLevel.cpp
  )

compile_cpp_model(${MODEL_NAME} "${MODEL_SOURCES}")

target_link_libraries(${MODEL_NAME}
  dynawo_DataInterface
  dynawo_SolverKINSOL
)
