/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __EQU_v29_H__
#define __EQU_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"

namespace HL7_29 {

/* EQU */
class EQU : public HL7Segment {
 public:
  EQU() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    EQU_1,
    EQU_2,
    EQU_3,
    EQU_4,
    EQU_5,
    EQU_6,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "EQU"; }
  EQU* create() const { return new EQU(); }

 private:
  void init() {
    setName("EQU");
    /* Init members */
    addObject<EI>(EQU_1, "EQU.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EQU_2, "EQU.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EQU_3, "EQU.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(EQU_5, "EQU.5", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(EQU_6, "EQU.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Equipment Instance Identifier
   */

  EI* getEQU_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, EQU_1);
  }

  EI* getEquipmentInstanceIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, EQU_1);
  }

  bool isEQU_1(size_t index = 0) {
    try {
      return this->getObject(index, EQU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentInstanceIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, EQU_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Date/Time
   */

  DTM* getEQU_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQU_2);
  }

  DTM* getEventDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQU_2);
  }

  bool isEQU_2(size_t index = 0) {
    try {
      return this->getObject(index, EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventDateTime(size_t index = 0) {
    try {
      return this->getObject(index, EQU_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment State
   */

  CWE* getEQU_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_3);
  }

  CWE* getEquipmentState(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_3);
  }

  bool isEQU_3(size_t index = 0) {
    try {
      return this->getObject(index, EQU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentState(size_t index = 0) {
    try {
      return this->getObject(index, EQU_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Local/Remote Control State
   */

  CWE* getEQU_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_4);
  }

  CWE* getLocalRemoteControlState(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_4);
  }

  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocalRemoteControlState(size_t index = 0) {
    try {
      return this->getObject(index, EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alert Level
   */

  CWE* getEQU_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_5);
  }

  CWE* getAlertLevel(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, EQU_5);
  }

  bool isEQU_5(size_t index = 0) {
    try {
      return this->getObject(index, EQU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlertLevel(size_t index = 0) {
    try {
      return this->getObject(index, EQU_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected date/time of the next status change
   */

  DTM* getEQU_6(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQU_6);
  }

  DTM* getExpecteddatetimeofthenextstatuschange(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, EQU_6);
  }

  bool isEQU_6(size_t index = 0) {
    try {
      return this->getObject(index, EQU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpecteddatetimeofthenextstatuschange(size_t index = 0) {
    try {
      return this->getObject(index, EQU_6) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of EQU */

} /* End of namespace HL7_29 */
#endif /* __EQU_v29_H__ */
