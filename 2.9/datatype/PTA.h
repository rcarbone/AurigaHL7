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


#ifndef __PTA_v29_H__
#define __PTA_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/MOP.h"

namespace HL7_29 {

/* policy type and amount */
class PTA : public HL7Data {
 public:
  PTA() { this->init(); }

 private:
  /* Field ID */
  enum FIELD_ID {
    PTA_1, /* Policy Type */
    PTA_2, /* Amount Class */
    PTA_3, /* Money or Percentage */
    FIELD_ID_MAX
  };

 public:
  const char *className() const { return "PTA"; }
  PTA *create() const { return new PTA(); }

 private:
  void init() {
    setName("PTA");
    /* Init members */
    addObject<CWE>(PTA_1, "PTA.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PTA_2, "PTA.2", HL7::initialized, HL7::repetition_off);
    addObject<MOP>(PTA_3, "PTA.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Policy Type
   */
  CWE *getPTA_1(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PTA_1);
  }

  CWE *getPolicyType(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PTA_1);
  }

  bool isPTA_1(size_t index = 0) {
    try {
      return this->getObject(index, PTA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPolicyType(size_t index = 0) {
    try {
      return this->getObject(index, PTA_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Amount Class
   */
  CWE *getPTA_2(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PTA_2);
  }

  CWE *getAmountClass(size_t index = 0) {
    return (CWE *)this->getObjectSafe(index, PTA_2);
  }

  bool isPTA_2(size_t index = 0) {
    try {
      return this->getObject(index, PTA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmountClass(size_t index = 0) {
    try {
      return this->getObject(index, PTA_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Money or Percentage
   */
  MOP *getPTA_3(size_t index = 0) {
    return (MOP *)this->getObjectSafe(index, PTA_3);
  }

  MOP *getMoneyorPercentage(size_t index = 0) {
    return (MOP *)this->getObjectSafe(index, PTA_3);
  }

  bool isPTA_3(size_t index = 0) {
    try {
      return this->getObject(index, PTA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMoneyorPercentage(size_t index = 0) {
    try {
      return this->getObject(index, PTA_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End PTA */

} /* End HL7_29 */

#endif /* __PTA_v29_H__ */