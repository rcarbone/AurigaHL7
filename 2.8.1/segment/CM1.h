/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:09 CEST 2020
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


#ifndef __CM1_v281_H__
#define __CM1_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_281 {

/* Clinical Study Phase Master */
class CM1 : public HL7Segment {
 public:
  CM1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    CM1_1,
    CM1_2,
    CM1_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "CM1"; }
  CM1* create() const { return new CM1(); }

 private:
  void init() {
    setName("CM1");
    /* Init members */
    addObject<SI>(CM1_1, "CM1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(CM1_2, "CM1.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(CM1_3, "CM1.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set ID - CM1
   */

  SI* getCM1_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM1_1);
  }

  SI* getSetIDCM1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, CM1_1);
  }

  bool isCM1_1(size_t index = 0) {
    try {
      return this->getObject(index, CM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIDCM1(size_t index = 0) {
    try {
      return this->getObject(index, CM1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Study Phase Identifier
   */

  CWE* getCM1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM1_2);
  }

  CWE* getStudyPhaseIdentifier(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, CM1_2);
  }

  bool isCM1_2(size_t index = 0) {
    try {
      return this->getObject(index, CM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudyPhaseIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, CM1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Description of Study Phase
   */

  ST* getCM1_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM1_3);
  }

  ST* getDescriptionofStudyPhase(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, CM1_3);
  }

  bool isCM1_3(size_t index = 0) {
    try {
      return this->getObject(index, CM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDescriptionofStudyPhase(size_t index = 0) {
    try {
      return this->getObject(index, CM1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of CM1 */

} /* End of namespace HL7_281 */
#endif /* __CM1_v281_H__ */
