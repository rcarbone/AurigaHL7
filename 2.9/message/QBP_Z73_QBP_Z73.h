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


#ifndef __QBP_Z73_QBP_Z73__29_H__
#define __QBP_Z73_QBP_Z73__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_29 {

/*  */
struct QBP_Z73_QBP_Z73 : public HL7Message {
  QBP_Z73_QBP_Z73() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_Z73_QBP_Z73_MSH_1,
    QBP_Z73_QBP_Z73_SFT_2,
    QBP_Z73_QBP_Z73_UAC_3,
    QBP_Z73_QBP_Z73_QPD_4,
    QBP_Z73_QBP_Z73_RCP_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_Z73_QBP_Z73"; }
  QBP_Z73_QBP_Z73* create() const { return new QBP_Z73_QBP_Z73(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_Z73_QBP_Z73");
    addObject<MSH>(QBP_Z73_QBP_Z73_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(QBP_Z73_QBP_Z73_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(QBP_Z73_QBP_Z73_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<QPD>(QBP_Z73_QBP_Z73_QPD_4, "QPD.4", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QBP_Z73_QBP_Z73_RCP_5, "RCP.5", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_Z73_QBP_Z73_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, QBP_Z73_QBP_Z73_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, QBP_Z73_QBP_Z73_UAC_3);
  }
  QPD* getQPD_4(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_Z73_QBP_Z73_QPD_4);
  }
  RCP* getRCP_5(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_Z73_QBP_Z73_RCP_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QBP_Z73_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QBP_Z73_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QBP_Z73_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_4(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QBP_Z73_QPD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_Z73_QBP_Z73_RCP_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_Z73_QBP_Z73_ */
} /* namespace HL7_29 */
#endif /*  __QBP_Z73_QBP_Z73__29_H__ */
