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


#ifndef __ODT_v29_H__
#define __ODT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* ODT */
class ODT : public HL7Segment {
 public:
  ODT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ODT_1,
    ODT_2,
    ODT_3,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ODT"; }
  ODT* create() const { return new ODT(); }

 private:
  void init() {
    setName("ODT");
    /* Init members */
    addObject<CWE>(ODT_1, "ODT.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ODT_2, "ODT.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ODT_3, "ODT.3", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Tray Type
   */

  CWE* getODT_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODT_1);
  }

  CWE* getTrayType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODT_1);
  }

  bool isODT_1(size_t index = 0) {
    try {
      return this->getObject(index, ODT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTrayType(size_t index = 0) {
    try {
      return this->getObject(index, ODT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Service Period
   */

  CWE* getODT_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODT_2);
  }

  CWE* getServicePeriod(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ODT_2);
  }

  bool isODT_2(size_t index = 0) {
    try {
      return this->getObject(index, ODT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isServicePeriod(size_t index = 0) {
    try {
      return this->getObject(index, ODT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Text Instruction
   */

  ST* getODT_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODT_3);
  }

  ST* getTextInstruction(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ODT_3);
  }

  bool isODT_3(size_t index = 0) {
    try {
      return this->getObject(index, ODT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTextInstruction(size_t index = 0) {
    try {
      return this->getObject(index, ODT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ODT */

} /* End of namespace HL7_29 */
#endif /* __ODT_v29_H__ */
