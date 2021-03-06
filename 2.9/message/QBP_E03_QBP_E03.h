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


#ifndef __QBP_E03_QBP_E03__29_H__
#define __QBP_E03_QBP_E03__29_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/QPD.h"
#include "../segment/RCP.h"

namespace HL7_29 {

/* Internal structures/groups */
struct QBP_E03_QBP_E03_QUERY_INFORMATION; /* QUERY_INFORMATION */

/*  */
struct QBP_E03_QBP_E03 : public HL7Message {
  QBP_E03_QBP_E03() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    QBP_E03_QBP_E03_MSH_1,
    QBP_E03_QBP_E03_QPD_5,
    QBP_E03_QBP_E03_RCP_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "QBP_E03_QBP_E03"; }
  QBP_E03_QBP_E03* create() const { return new QBP_E03_QBP_E03(); }

 private:
  /* Initialize object */
  void init() {
    setName("QBP_E03_QBP_E03");
    addObject<MSH>(QBP_E03_QBP_E03_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(QBP_E03_QBP_E03_QPD_5, "QPD.5", HL7::initialized, HL7::repetition_off);
    addObject<RCP>(QBP_E03_QBP_E03_RCP_6, "RCP.6", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, QBP_E03_QBP_E03_MSH_1);
  }
  QPD* getQPD_5(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, QBP_E03_QBP_E03_QPD_5);
  }
  RCP* getRCP_6(size_t index = 0) {
    return (RCP*)this->getObjectSafe(index, QBP_E03_QBP_E03_RCP_6);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, QBP_E03_QBP_E03_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_5(size_t index = 0) {
    try {
      return this->getObject(index, QBP_E03_QBP_E03_QPD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRCP_6(size_t index = 0) {
    try {
      return this->getObject(index, QBP_E03_QBP_E03_RCP_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* QBP_E03_QBP_E03_ */
} /* namespace HL7_29 */
#endif /*  __QBP_E03_QBP_E03__29_H__ */
