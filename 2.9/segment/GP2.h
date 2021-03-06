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


#ifndef __GP2_v29_H__
#define __GP2_v29_H__

#include "../../common/Util.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/NM.h"

namespace HL7_29 {

/* GP2 */
class GP2 : public HL7Segment {
 public:
  GP2() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    GP2_1,
    GP2_2,
    GP2_3,
    GP2_4,
    GP2_5,
    GP2_6,
    GP2_7,
    GP2_8,
    GP2_9,
    GP2_10,
    GP2_11,
    GP2_12,
    GP2_13,
    GP2_14,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "GP2"; }
  GP2* create() const { return new GP2(); }

 private:
  void init() {
    setName("GP2");
    /* Init members */
    addObject<CWE>(GP2_1, "GP2.1", HL7::initialized, HL7::repetition_off);
    addObject<NM>(GP2_2, "GP2.2", HL7::initialized, HL7::repetition_off);
    addObject<CP>(GP2_3, "GP2.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_4, "GP2.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_5, "GP2.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_6, "GP2.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_7, "GP2.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_8, "GP2.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_9, "GP2.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_10, "GP2.10", HL7::initialized, HL7::repetition_off);
    addObject<CP>(GP2_11, "GP2.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(GP2_12, "GP2.12", HL7::initialized, HL7::repetition_off);
    addObject<CP>(GP2_13, "GP2.13", HL7::initialized, HL7::repetition_off);
    addObject<NM>(GP2_14, "GP2.14", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Revenue Code
   */

  CWE* getGP2_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_1);
  }

  CWE* getRevenueCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_1);
  }

  bool isGP2_1(size_t index = 0) {
    try {
      return this->getObject(index, GP2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRevenueCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Service Units
   */

  NM* getGP2_2(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_2);
  }

  NM* getNumberofServiceUnits(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_2);
  }

  bool isGP2_2(size_t index = 0) {
    try {
      return this->getObject(index, GP2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofServiceUnits(size_t index = 0) {
    try {
      return this->getObject(index, GP2_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Charge
   */

  CP* getGP2_3(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_3);
  }

  CP* getCharge(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_3);
  }

  bool isGP2_3(size_t index = 0) {
    try {
      return this->getObject(index, GP2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCharge(size_t index = 0) {
    try {
      return this->getObject(index, GP2_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Action Code
   */

  CWE* getGP2_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_4);
  }

  CWE* getReimbursementActionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_4);
  }

  bool isGP2_4(size_t index = 0) {
    try {
      return this->getObject(index, GP2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementActionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Denial or Rejection Code
   */

  CWE* getGP2_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_5);
  }

  CWE* getDenialorRejectionCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_5);
  }

  bool isGP2_5(size_t index = 0) {
    try {
      return this->getObject(index, GP2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDenialorRejectionCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * OCE Edit Code
   */

  CWE* getGP2_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_6);
  }

  CWE* getOCEEditCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_6);
  }

  bool isGP2_6(size_t index = 0) {
    try {
      return this->getObject(index, GP2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOCEEditCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Ambulatory Payment Classification Code
   */

  CWE* getGP2_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_7);
  }

  CWE* getAmbulatoryPaymentClassificationCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_7);
  }

  bool isGP2_7(size_t index = 0) {
    try {
      return this->getObject(index, GP2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAmbulatoryPaymentClassificationCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Modifier Edit Code
   */

  CWE* getGP2_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_8);
  }

  CWE* getModifierEditCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_8);
  }

  bool isGP2_8(size_t index = 0) {
    try {
      return this->getObject(index, GP2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModifierEditCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Payment Adjustment Code
   */

  CWE* getGP2_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_9);
  }

  CWE* getPaymentAdjustmentCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_9);
  }

  bool isGP2_9(size_t index = 0) {
    try {
      return this->getObject(index, GP2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPaymentAdjustmentCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Packaging Status Code
   */

  CWE* getGP2_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_10);
  }

  CWE* getPackagingStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_10);
  }

  bool isGP2_10(size_t index = 0) {
    try {
      return this->getObject(index, GP2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPackagingStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected CMS Payment Amount
   */

  CP* getGP2_11(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_11);
  }

  CP* getExpectedCMSPaymentAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_11);
  }

  bool isGP2_11(size_t index = 0) {
    try {
      return this->getObject(index, GP2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedCMSPaymentAmount(size_t index = 0) {
    try {
      return this->getObject(index, GP2_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Reimbursement Type Code
   */

  CWE* getGP2_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_12);
  }

  CWE* getReimbursementTypeCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, GP2_12);
  }

  bool isGP2_12(size_t index = 0) {
    try {
      return this->getObject(index, GP2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReimbursementTypeCode(size_t index = 0) {
    try {
      return this->getObject(index, GP2_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Co-Pay Amount
   */

  CP* getGP2_13(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_13);
  }

  CP* getCoPayAmount(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, GP2_13);
  }

  bool isGP2_13(size_t index = 0) {
    try {
      return this->getObject(index, GP2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCoPayAmount(size_t index = 0) {
    try {
      return this->getObject(index, GP2_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Pay Rate per Service Unit
   */

  NM* getGP2_14(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_14);
  }

  NM* getPayRateperServiceUnit(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, GP2_14);
  }

  bool isGP2_14(size_t index = 0) {
    try {
      return this->getObject(index, GP2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPayRateperServiceUnit(size_t index = 0) {
    try {
      return this->getObject(index, GP2_14) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of GP2 */

} /* End of namespace HL7_29 */
#endif /* __GP2_v29_H__ */
