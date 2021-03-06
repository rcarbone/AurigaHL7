/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 18:58:47 CEST 2020
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


#ifndef __MO_v281_H__
#define __MO_v281_H__

#include "../../common/Util.h"
#include "../datatype/ID.h"
#include "../datatype/NM.h"

namespace HL7_281 {

/* Money
Money and Code
Money or Percentage */
class MO : public HL7Data {
 public:
  MO() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    MO_1, /* Quantity */
    MO_2, /* Denomination */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "MO"; }
  MO *create() const { return new MO(); }

 private:
  void init() {
    setName("MO");
    /* Init members */
    addObject<NM>(MO_1, "MO.1", HL7::initialized, HL7::repetition_off);
    addObject<ID>(MO_2, "MO.2", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Quantity
   */
  NM *getMO_1(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  NM *getQuantity(size_t index = 0) {
    return (NM *)this->getObjectSafe(index, MO_1);
  }

  bool isMO_1(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isQuantity(size_t index = 0) {
    try {
      return this->getObject(index, MO_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Denomination
   */
  ID *getMO_2(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  ID *getDenomination(size_t index = 0) {
    return (ID *)this->getObjectSafe(index, MO_2);
  }

  bool isMO_2(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDenomination(size_t index = 0) {
    try {
      return this->getObject(index, MO_2) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End MO */

} /* End HL7_281 */

#endif /* __MO_v281_H__ */
