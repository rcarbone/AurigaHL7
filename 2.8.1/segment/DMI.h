/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:59:12 CEST 2020
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


#ifndef __DMI_v281_H__
#define __DMI_v281_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/NM.h"
#include "../datatype/NR.h"

namespace HL7_281 {

/* DRG Master File Information */
class DMI : public HL7Segment {
 public:
  DMI() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DMI_1,
    DMI_2,
    DMI_3,
    DMI_4,
    DMI_5,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DMI"; }
  DMI* create() const { return new DMI(); }

 private:
  void init() {
    setName("DMI");
    /* Init members */
    addObject<CNE>(DMI_1, "DMI.1", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(DMI_2, "DMI.2", HL7::initialized, HL7::repetition_off);
    addObject<NR>(DMI_3, "DMI.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DMI_4, "DMI.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DMI_5, "DMI.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Diagnostic Related Group
   */

  CNE* getDMI_1(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DMI_1);
  }

  CNE* getDiagnosticRelatedGroup(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DMI_1);
  }

  bool isDMI_1(size_t index = 0) {
    try {
      return this->getObject(index, DMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticRelatedGroup(size_t index = 0) {
    try {
      return this->getObject(index, DMI_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Major Diagnostic Category
   */

  CNE* getDMI_2(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DMI_2);
  }

  CNE* getMajorDiagnosticCategory(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DMI_2);
  }

  bool isDMI_2(size_t index = 0) {
    try {
      return this->getObject(index, DMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMajorDiagnosticCategory(size_t index = 0) {
    try {
      return this->getObject(index, DMI_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lower and Upper Trim Points
   */

  NR* getDMI_3(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, DMI_3);
  }

  NR* getLowerandUpperTrimPoints(size_t index = 0) {
    return (NR*)this->getObjectSafe(index, DMI_3);
  }

  bool isDMI_3(size_t index = 0) {
    try {
      return this->getObject(index, DMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLowerandUpperTrimPoints(size_t index = 0) {
    try {
      return this->getObject(index, DMI_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Average Length of Stay
   */

  NM* getDMI_4(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DMI_4);
  }

  NM* getAverageLengthofStay(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DMI_4);
  }

  bool isDMI_4(size_t index = 0) {
    try {
      return this->getObject(index, DMI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAverageLengthofStay(size_t index = 0) {
    try {
      return this->getObject(index, DMI_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relative Weight
   */

  NM* getDMI_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DMI_5);
  }

  NM* getRelativeWeight(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DMI_5);
  }

  bool isDMI_5(size_t index = 0) {
    try {
      return this->getObject(index, DMI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelativeWeight(size_t index = 0) {
    try {
      return this->getObject(index, DMI_5) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DMI */

} /* End of namespace HL7_281 */
#endif /* __DMI_v281_H__ */
