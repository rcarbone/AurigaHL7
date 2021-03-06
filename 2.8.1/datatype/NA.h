/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:48 CEST 2020
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


#ifndef __NA_v281_H__
#define __NA_v281_H__

#include "../../common/Util.h"
#include "../datatype/NM.h"

namespace HL7_281 {

/* Numeric Array */
class NA : public HL7Data {
 public:
  NA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    NA_1, /* Value1 */
    NA_2, /* Value2 */
    NA_3, /* Value3 */
    NA_4, /* Value4 */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "NA"; }
  NA *create() const { return new NA(); }

 private:
  void init() {
    setName("NA");
    /* Init members */
    addObject<NM>(NA_1, "NA.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_2, "NA.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_3, "NA.3", HL7::initialized, HL7::repetition_off);
    addObject<NM>(NA_4, "NA.4", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Value1
   */
  NM *getNA_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  NM *getValue1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_1);
  }

  bool isNA_1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue1(size_t index = 0) {
    try {
      return this->getObject(index, NA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value2
   */
  NM *getNA_2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  NM *getValue2(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_2);
  }

  bool isNA_2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue2(size_t index = 0) {
    try {
      return this->getObject(index, NA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value3
   */
  NM *getNA_3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  NM *getValue3(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_3);
  }

  bool isNA_3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue3(size_t index = 0) {
    try {
      return this->getObject(index, NA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Value4
   */
  NM *getNA_4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  NM *getValue4(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, NA_4);
  }

  bool isNA_4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isValue4(size_t index = 0) {
    try {
      return this->getObject(index, NA_4) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End NA */

} /* End HL7_281 */

#endif /* __NA_v281_H__ */
