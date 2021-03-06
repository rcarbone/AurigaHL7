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


#ifndef __RF1_v29_H__
#define __RF1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/ST.h"
#include "../datatype/XCN.h"
#include "../datatype/XON.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* RF1 */
class RF1 : public HL7Segment {
 public:
  RF1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    RF1_1,
    RF1_2,
    RF1_3,
    RF1_4,
    RF1_5,
    RF1_6,
    RF1_7,
    RF1_8,
    RF1_9,
    RF1_10,
    RF1_11,
    RF1_12,
    RF1_13,
    RF1_14,
    RF1_15,
    RF1_16,
    RF1_17,
    RF1_18,
    RF1_19,
    RF1_20,
    RF1_21,
    RF1_22,
    RF1_23,
    RF1_24,
    RF1_25,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "RF1"; }
  RF1* create() const { return new RF1(); }

 private:
  void init() {
    setName("RF1");
    /* Init members */
    addObject<CWE>(RF1_1, "RF1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_2, "RF1.2", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_3, "RF1.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_4, "RF1.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_5, "RF1.5", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RF1_6, "RF1.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RF1_7, "RF1.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RF1_8, "RF1.8", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RF1_9, "RF1.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_10, "RF1.10", HL7::initialized, HL7::repetition_off);
    addObject<EI>(RF1_11, "RF1.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(RF1_12, "RF1.12", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RF1_13, "RF1.13", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RF1_14, "RF1.14", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RF1_15, "RF1.15", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RF1_16, "RF1.16", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(RF1_17, "RF1.17", HL7::initialized, HL7::repetition_off);
    addObject<MO>(RF1_18, "RF1.18", HL7::initialized, HL7::repetition_off);
    addObject<XON>(RF1_19, "RF1.19", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(RF1_20, "RF1.20", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RF1_21, "RF1.21", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(RF1_22, "RF1.22", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(RF1_23, "RF1.23", HL7::initialized, HL7::repetition_off);
    addObject<ST>(RF1_24, "RF1.24", HL7::initialized, HL7::repetition_off);
    addObject<ID>(RF1_25, "RF1.25", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Referral Status
   */

  CWE* getRF1_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_1);
  }

  CWE* getReferralStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_1);
  }

  bool isRF1_1(size_t index = 0) {
    try {
      return this->getObject(index, RF1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralStatus(size_t index = 0) {
    try {
      return this->getObject(index, RF1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Priority
   */

  CWE* getRF1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_2);
  }

  CWE* getReferralPriority(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_2);
  }

  bool isRF1_2(size_t index = 0) {
    try {
      return this->getObject(index, RF1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralPriority(size_t index = 0) {
    try {
      return this->getObject(index, RF1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Type
   */

  CWE* getRF1_3(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_3);
  }

  CWE* getReferralType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_3);
  }

  bool isRF1_3(size_t index = 0) {
    try {
      return this->getObject(index, RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralType(size_t index = 0) {
    try {
      return this->getObject(index, RF1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Disposition
   */

  CWE* getRF1_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_4);
  }

  CWE* getReferralDisposition(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_4);
  }

  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralDisposition(size_t index = 0) {
    try {
      return this->getObject(index, RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Category
   */

  CWE* getRF1_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_5);
  }

  CWE* getReferralCategory(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_5);
  }

  bool isRF1_5(size_t index = 0) {
    try {
      return this->getObject(index, RF1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralCategory(size_t index = 0) {
    try {
      return this->getObject(index, RF1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Originating Referral Identifier
   */

  EI* getRF1_6(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_6);
  }

  EI* getOriginatingReferralIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_6);
  }

  bool isRF1_6(size_t index = 0) {
    try {
      return this->getObject(index, RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOriginatingReferralIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RF1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Date
   */

  DTM* getRF1_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_7);
  }

  DTM* getEffectiveDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_7);
  }

  bool isRF1_7(size_t index = 0) {
    try {
      return this->getObject(index, RF1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expiration Date
   */

  DTM* getRF1_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_8);
  }

  DTM* getExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_8);
  }

  bool isRF1_8(size_t index = 0) {
    try {
      return this->getObject(index, RF1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Process Date
   */

  DTM* getRF1_9(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_9);
  }

  DTM* getProcessDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_9);
  }

  bool isRF1_9(size_t index = 0) {
    try {
      return this->getObject(index, RF1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProcessDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Reason
   */

  CWE* getRF1_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_10);
  }

  CWE* getReferralReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_10);
  }

  bool isRF1_10(size_t index = 0) {
    try {
      return this->getObject(index, RF1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralReason(size_t index = 0) {
    try {
      return this->getObject(index, RF1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * External Referral Identifier
   */

  EI* getRF1_11(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_11);
  }

  EI* getExternalReferralIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, RF1_11);
  }

  bool isRF1_11(size_t index = 0) {
    try {
      return this->getObject(index, RF1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalReferralIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, RF1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Documentation Completion Status
   */

  CWE* getRF1_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_12);
  }

  CWE* getReferralDocumentationCompletionStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, RF1_12);
  }

  bool isRF1_12(size_t index = 0) {
    try {
      return this->getObject(index, RF1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralDocumentationCompletionStatus(size_t index = 0) {
    try {
      return this->getObject(index, RF1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Planned Treatment Stop Date
   */

  DTM* getRF1_13(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_13);
  }

  DTM* getPlannedTreatmentStopDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_13);
  }

  bool isRF1_13(size_t index = 0) {
    try {
      return this->getObject(index, RF1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlannedTreatmentStopDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Referral Reason Text
   */

  ST* getRF1_14(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_14);
  }

  ST* getReferralReasonText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_14);
  }

  bool isRF1_14(size_t index = 0) {
    try {
      return this->getObject(index, RF1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isReferralReasonText(size_t index = 0) {
    try {
      return this->getObject(index, RF1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Authorized Treatments/Units
   */

  CQ* getRF1_15(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_15);
  }

  CQ* getNumberofAuthorizedTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_15);
  }

  bool isRF1_15(size_t index = 0) {
    try {
      return this->getObject(index, RF1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofAuthorizedTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, RF1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Used Treatments/Units
   */

  CQ* getRF1_16(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_16);
  }

  CQ* getNumberofUsedTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_16);
  }

  bool isRF1_16(size_t index = 0) {
    try {
      return this->getObject(index, RF1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofUsedTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, RF1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Number of Schedule Treatments/Units
   */

  CQ* getRF1_17(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_17);
  }

  CQ* getNumberofScheduleTreatmentsUnits(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, RF1_17);
  }

  bool isRF1_17(size_t index = 0) {
    try {
      return this->getObject(index, RF1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNumberofScheduleTreatmentsUnits(size_t index = 0) {
    try {
      return this->getObject(index, RF1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Remaining Benefit Amount
   */

  MO* getRF1_18(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, RF1_18);
  }

  MO* getRemainingBenefitAmount(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, RF1_18);
  }

  bool isRF1_18(size_t index = 0) {
    try {
      return this->getObject(index, RF1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRemainingBenefitAmount(size_t index = 0) {
    try {
      return this->getObject(index, RF1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Provider
   */

  XON* getRF1_19(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, RF1_19);
  }

  XON* getAuthorizedProvider(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, RF1_19);
  }

  bool isRF1_19(size_t index = 0) {
    try {
      return this->getObject(index, RF1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedProvider(size_t index = 0) {
    try {
      return this->getObject(index, RF1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Authorized Health Professional
   */

  XCN* getRF1_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RF1_20);
  }

  XCN* getAuthorizedHealthProfessional(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, RF1_20);
  }

  bool isRF1_20(size_t index = 0) {
    try {
      return this->getObject(index, RF1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAuthorizedHealthProfessional(size_t index = 0) {
    try {
      return this->getObject(index, RF1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Text
   */

  ST* getRF1_21(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_21);
  }

  ST* getSourceText(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_21);
  }

  bool isRF1_21(size_t index = 0) {
    try {
      return this->getObject(index, RF1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceText(size_t index = 0) {
    try {
      return this->getObject(index, RF1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Date
   */

  DTM* getRF1_22(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_22);
  }

  DTM* getSourceDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, RF1_22);
  }

  bool isRF1_22(size_t index = 0) {
    try {
      return this->getObject(index, RF1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourceDate(size_t index = 0) {
    try {
      return this->getObject(index, RF1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Source Phone
   */

  XTN* getRF1_23(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RF1_23);
  }

  XTN* getSourcePhone(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, RF1_23);
  }

  bool isRF1_23(size_t index = 0) {
    try {
      return this->getObject(index, RF1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSourcePhone(size_t index = 0) {
    try {
      return this->getObject(index, RF1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Comment
   */

  ST* getRF1_24(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_24);
  }

  ST* getComment(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, RF1_24);
  }

  bool isRF1_24(size_t index = 0) {
    try {
      return this->getObject(index, RF1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isComment(size_t index = 0) {
    try {
      return this->getObject(index, RF1_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Action Code
   */

  ID* getRF1_25(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RF1_25);
  }

  ID* getActionCode(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, RF1_25);
  }

  bool isRF1_25(size_t index = 0) {
    try {
      return this->getObject(index, RF1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isActionCode(size_t index = 0) {
    try {
      return this->getObject(index, RF1_25) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of RF1 */

} /* End of namespace HL7_29 */
#endif /* __RF1_v29_H__ */
