//
// Copyright (c) 2016-2019, RTE (http://www.rte-france.com)
// All rights reserved.
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.
// SPDX-License-Identifier: MPL-2.0
//
// This file is part of Libiidm, a library to model IIDM networks and allows
// importing and exporting them to files.
//

/**
 * @file xml/import/Transformer2WindingsHandler.h
 * @brief Provides Transformer2WindingsHandler interface
 */

#ifndef LIBIIDM_XML_IMPORT_GUARD_TRANSFORMER2WINDINGSHANDLER_H
#define LIBIIDM_XML_IMPORT_GUARD_TRANSFORMER2WINDINGSHANDLER_H

#include <IIDM/xml/import/ConnectableHandler.h>
#include <IIDM/xml/import/CurrentLimitsHandler.h>
#include <IIDM/xml/import/TapChangerHandler.h>

#include <IIDM/builders/Transformer2WindingsBuilder.h>

namespace IIDM {
namespace xml {

class Transformer2WindingsHandler: public ConnectableHandler<IIDM::builders::Transformer2WindingsBuilder, true, IIDM::side_2> {
public:
  Transformer2WindingsHandler(elementName_type const& root_element);

private:
  CurrentLimitsHandler currentLimits1_handler;
  CurrentLimitsHandler currentLimits2_handler;
  RatioTapChangerHandler rtc_handler;
  PhaseTapChangerHandler ptc_handler;

protected:
  void configure(attributes_type const& attributes) IIDM_OVERRIDE;
};


} // end of namespace IIDM::xml::
} // end of namespace IIDM::

#endif
