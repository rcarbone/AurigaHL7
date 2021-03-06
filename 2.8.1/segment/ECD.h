/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:16 CEST 2020
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jun 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 *
 * This file was developed as part of the ongoing activities related
 * to the design, implementation and execution of interoperability tests
 * between hacca-based versus AurigaHL7-based applications.
 *
 * In more details I decided to extend AurigaHL7 C++ Library with header files
 * implementing HL7 structures of the version 2.8.1 of the protocol (April 2014)
 * because the version 2.4 distributed with AurigaHL7 is a bit outdated (October 2000).
 *
 * All files in this fork was automatically generated by hacca-based tool [hawk]
 * and strictly follow the syntax and convention originally defined
 * by Auriga HL7 C++ Library just as form of continuity, convenience
 * and respect for their superb work.
 */


#ifndef __ECD_v281_H__
#define __ECD_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"
#include "../datatype/NULLDT.h"
#include "../datatype/TX.h"

namespace HL7_281 {

/* Equipment Command */
class ECD : public HL7Segment {
 public:
  ECD() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ECD_1,
    ECD_2,
    ECD_3,
    ECD_4,
    ECD_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ECD"; }
  ECD* create() const { return new ECD(); }

 private:
  void init() {
    setName("ECD");
    /* Init members */
    addObject<NM>(ECD_1, "ECD.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ECD_2, "ECD.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(ECD_3, "ECD.3", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(ECD_4, "ECD.4", HL7::initialized, HL7::repetition_off);
    addObject<TX>(ECD_5, "ECD.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Reference Command Number
   */

  NM* getECD_1(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  NM* getReferenceCommandNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ECD_1);
  }

  bool isECD_1(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferenceCommandNumber(size_t index = 0) {
    try {
      return this->getObject(index, ECD_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Remote Control Command
   */

  CWE* getECD_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECD_2);
  }

  CWE* getRemoteControlCommand(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ECD_2);
  }

  bool isECD_2(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRemoteControlCommand(size_t index = 0) {
    try {
      return this->getObject(index, ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Response Required
   */

  ID* getECD_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  ID* getResponseRequired(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, ECD_3);
  }

  bool isECD_3(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isResponseRequired(size_t index = 0) {
    try {
      return this->getObject(index, ECD_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Requested Completion Time
   */

  NULLDT* getECD_4(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, ECD_4);
  }

  NULLDT* getRequestedCompletionTime(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, ECD_4);
  }

  bool isECD_4(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRequestedCompletionTime(size_t index = 0) {
    try {
      return this->getObject(index, ECD_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parameters
   */

  TX* getECD_5(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECD_5);
  }

  TX* getParameters(size_t index = 0) {
    return (TX*)this->getObjectSafe(index, ECD_5);
  }

  bool isECD_5(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParameters(size_t index = 0) {
    try {
      return this->getObject(index, ECD_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ECD */

} /* End of namespace HL7_281 */
#endif /* __ECD_v281_H__ */
