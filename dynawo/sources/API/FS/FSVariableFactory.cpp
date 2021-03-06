//
// Copyright (c) 2015-2019, RTE (http://www.rte-france.com)
// See AUTHORS.txt
// All rights reserved.
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, you can obtain one at http://mozilla.org/MPL/2.0/.
// SPDX-License-Identifier: MPL-2.0
//
// This file is part of Dynawo, an hybrid C++/Modelica open source time domain
// simulation tool for power systems.
//

/**
 * @file  FSVariableFactory.cpp
 *
 * @brief Dynawo final state variable factory : implementation file
 *
 */

#include "FSVariableFactory.h"
#include "FSVariableImpl.h"

using std::string;

namespace finalState {

boost::shared_ptr<Variable>
VariableFactory::newVariable(const string& id) {
  return boost::shared_ptr<Variable>(new Variable::Impl(id));
}

}  // namespace finalState
