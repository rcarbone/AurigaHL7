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


#ifndef __DRG_v29_H__
#define __DRG_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CP.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/ST.h"
#include "../datatype/XPN.h"

namespace HL7_29 {

/* DRG */
class DRG : public HL7Segment {
 public:
  DRG() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    DRG_1,
    DRG_2,
    DRG_3,
    DRG_4,
    DRG_5,
    DRG_6,
    DRG_7,
    DRG_8,
    DRG_9,
    DRG_10,
    DRG_11,
    DRG_12,
    DRG_13,
    DRG_14,
    DRG_15,
    DRG_16,
    DRG_17,
    DRG_18,
    DRG_19,
    DRG_20,
    DRG_21,
    DRG_22,
    DRG_23,
    DRG_24,
    DRG_25,
    DRG_26,
    DRG_27,
    DRG_28,
    DRG_29,
    DRG_30,
    DRG_31,
    DRG_32,
    DRG_33,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "DRG"; }
  DRG* create() const { return new DRG(); }

 private:
  void init() {
    setName("DRG");
    /* Init members */
    addObject<CNE>(DRG_1, "DRG.1", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(DRG_2, "DRG.2", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DRG_3, "DRG.3", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_4, "DRG.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_5, "DRG.5", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DRG_6, "DRG.6", HL7::initialized, HL7::repetition_off);
    addObject<CP>(DRG_7, "DRG.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_8, "DRG.8", HL7::initialized, HL7::repetition_off);
    addObject<CP>(DRG_9, "DRG.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(DRG_10, "DRG.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_11, "DRG.11", HL7::initialized, HL7::repetition_off);
    addObject<XPN>(DRG_12, "DRG.12", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_13, "DRG.13", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_14, "DRG.14", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DRG_15, "DRG.15", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DRG_16, "DRG.16", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_17, "DRG.17", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DRG_18, "DRG.18", HL7::initialized, HL7::repetition_off);
    addObject<ST>(DRG_19, "DRG.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_20, "DRG.20", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DRG_21, "DRG.21", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DRG_22, "DRG.22", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DRG_23, "DRG.23", HL7::initialized, HL7::repetition_off);
    addObject<MO>(DRG_24, "DRG.24", HL7::initialized, HL7::repetition_off);
    addObject<NM>(DRG_25, "DRG.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_26, "DRG.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_27, "DRG.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_28, "DRG.28", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_29, "DRG.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_30, "DRG.30", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_31, "DRG.31", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_32, "DRG.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(DRG_33, "DRG.33", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Diagnostic Related Group
   */

  CNE* getDRG_1(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DRG_1);
  }

  CNE* getDiagnosticRelatedGroup(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, DRG_1);
  }

  bool isDRG_1(size_t index = 0) {
    try {
      return this->getObject(index, DRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiagnosticRelatedGroup(size_t index = 0) {
    try {
      return this->getObject(index, DRG_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Assigned Date/Time
   */

  DTM* getDRG_2(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DRG_2);
  }

  DTM* getDRGAssignedDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, DRG_2);
  }

  bool isDRG_2(size_t index = 0) {
    try {
      return this->getObject(index, DRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGAssignedDateTime(size_t index = 0) {
    try {
      return this->getObject(index, DRG_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Approval Indicator
   */

  ID* getDRG_3(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_3);
  }

  ID* getDRGApprovalIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_3);
  }

  bool isDRG_3(size_t index = 0) {
    try {
      return this->getObject(index, DRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGApprovalIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DRG_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Grouper Review Code
   */

  CWE* getDRG_4(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_4);
  }

  CWE* getDRGGrouperReviewCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_4);
  }

  bool isDRG_4(size_t index = 0) {
    try {
      return this->getObject(index, DRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGGrouperReviewCode(size_t index = 0) {
    try {
      return this->getObject(index, DRG_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Type
   */

  CWE* getDRG_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_5);
  }

  CWE* getOutlierType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_5);
  }

  bool isDRG_5(size_t index = 0) {
    try {
      return this->getObject(index, DRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierType(size_t index = 0) {
    try {
      return this->getObject(index, DRG_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Days
   */

  NM* getDRG_6(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_6);
  }

  NM* getOutlierDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_6);
  }

  bool isDRG_6(size_t index = 0) {
    try {
      return this->getObject(index, DRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierDays(size_t index = 0) {
    try {
      return this->getObject(index, DRG_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Cost
   */

  CP* getDRG_7(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_7);
  }

  CP* getOutlierCost(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_7);
  }

  bool isDRG_7(size_t index = 0) {
    try {
      return this->getObject(index, DRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierCost(size_t index = 0) {
    try {
      return this->getObject(index, DRG_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Payor
   */

  CWE* getDRG_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_8);
  }

  CWE* getDRGPayor(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_8);
  }

  bool isDRG_8(size_t index = 0) {
    try {
      return this->getObject(index, DRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGPayor(size_t index = 0) {
    try {
      return this->getObject(index, DRG_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Outlier Reimbursement
   */

  CP* getDRG_9(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_9);
  }

  CP* getOutlierReimbursement(size_t index = 0) {
    return (CP*)this->getObjectSafe(index, DRG_9);
  }

  bool isDRG_9(size_t index = 0) {
    try {
      return this->getObject(index, DRG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOutlierReimbursement(size_t index = 0) {
    try {
      return this->getObject(index, DRG_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Confidential Indicator
   */

  ID* getDRG_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_10);
  }

  ID* getConfidentialIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, DRG_10);
  }

  bool isDRG_10(size_t index = 0) {
    try {
      return this->getObject(index, DRG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isConfidentialIndicator(size_t index = 0) {
    try {
      return this->getObject(index, DRG_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * DRG Transfer Type
   */

  CWE* getDRG_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_11);
  }

  CWE* getDRGTransferType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_11);
  }

  bool isDRG_11(size_t index = 0) {
    try {
      return this->getObject(index, DRG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDRGTransferType(size_t index = 0) {
    try {
      return this->getObject(index, DRG_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Name of Coder
   */

  XPN* getDRG_12(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DRG_12);
  }

  XPN* getNameofCoder(size_t index = 0) {
    return (XPN*)this->getObjectSafe(index, DRG_12);
  }

  bool isDRG_12(size_t index = 0) {
    try {
      return this->getObject(index, DRG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isNameofCoder(size_t index = 0) {
    try {
      return this->getObject(index, DRG_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouper Status
   */

  CWE* getDRG_13(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_13);
  }

  CWE* getGrouperStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_13);
  }

  bool isDRG_13(size_t index = 0) {
    try {
      return this->getObject(index, DRG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrouperStatus(size_t index = 0) {
    try {
      return this->getObject(index, DRG_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * PCCL Value Code
   */

  CWE* getDRG_14(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_14);
  }

  CWE* getPCCLValueCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_14);
  }

  bool isDRG_14(size_t index = 0) {
    try {
      return this->getObject(index, DRG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPCCLValueCode(size_t index = 0) {
    try {
      return this->getObject(index, DRG_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Effective Weight
   */

  NM* getDRG_15(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_15);
  }

  NM* getEffectiveWeight(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_15);
  }

  bool isDRG_15(size_t index = 0) {
    try {
      return this->getObject(index, DRG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEffectiveWeight(size_t index = 0) {
    try {
      return this->getObject(index, DRG_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Monetary Amount
   */

  MO* getDRG_16(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_16);
  }

  MO* getMonetaryAmount(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_16);
  }

  bool isDRG_16(size_t index = 0) {
    try {
      return this->getObject(index, DRG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMonetaryAmount(size_t index = 0) {
    try {
      return this->getObject(index, DRG_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Patient
   */

  CWE* getDRG_17(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_17);
  }

  CWE* getStatusPatient(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_17);
  }

  bool isDRG_17(size_t index = 0) {
    try {
      return this->getObject(index, DRG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusPatient(size_t index = 0) {
    try {
      return this->getObject(index, DRG_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouper Software Name
   */

  ST* getDRG_18(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DRG_18);
  }

  ST* getGrouperSoftwareName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DRG_18);
  }

  bool isDRG_18(size_t index = 0) {
    try {
      return this->getObject(index, DRG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrouperSoftwareName(size_t index = 0) {
    try {
      return this->getObject(index, DRG_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Grouper Software Version
   */

  ST* getDRG_19(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DRG_19);
  }

  ST* getGrouperSoftwareVersion(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, DRG_19);
  }

  bool isDRG_19(size_t index = 0) {
    try {
      return this->getObject(index, DRG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGrouperSoftwareVersion(size_t index = 0) {
    try {
      return this->getObject(index, DRG_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Financial Calculation
   */

  CWE* getDRG_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_20);
  }

  CWE* getStatusFinancialCalculation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_20);
  }

  bool isDRG_20(size_t index = 0) {
    try {
      return this->getObject(index, DRG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusFinancialCalculation(size_t index = 0) {
    try {
      return this->getObject(index, DRG_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Relative Discount/Surcharge
   */

  MO* getDRG_21(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_21);
  }

  MO* getRelativeDiscountSurcharge(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_21);
  }

  bool isDRG_21(size_t index = 0) {
    try {
      return this->getObject(index, DRG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRelativeDiscountSurcharge(size_t index = 0) {
    try {
      return this->getObject(index, DRG_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Basic Charge
   */

  MO* getDRG_22(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_22);
  }

  MO* getBasicCharge(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_22);
  }

  bool isDRG_22(size_t index = 0) {
    try {
      return this->getObject(index, DRG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBasicCharge(size_t index = 0) {
    try {
      return this->getObject(index, DRG_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Total Charge
   */

  MO* getDRG_23(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_23);
  }

  MO* getTotalCharge(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_23);
  }

  bool isDRG_23(size_t index = 0) {
    try {
      return this->getObject(index, DRG_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTotalCharge(size_t index = 0) {
    try {
      return this->getObject(index, DRG_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Discount/Surcharge
   */

  MO* getDRG_24(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_24);
  }

  MO* getDiscountSurcharge(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, DRG_24);
  }

  bool isDRG_24(size_t index = 0) {
    try {
      return this->getObject(index, DRG_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDiscountSurcharge(size_t index = 0) {
    try {
      return this->getObject(index, DRG_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Calculated Days
   */

  NM* getDRG_25(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_25);
  }

  NM* getCalculatedDays(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, DRG_25);
  }

  bool isDRG_25(size_t index = 0) {
    try {
      return this->getObject(index, DRG_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCalculatedDays(size_t index = 0) {
    try {
      return this->getObject(index, DRG_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Gender
   */

  CWE* getDRG_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_26);
  }

  CWE* getStatusGender(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_26);
  }

  bool isDRG_26(size_t index = 0) {
    try {
      return this->getObject(index, DRG_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusGender(size_t index = 0) {
    try {
      return this->getObject(index, DRG_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Age
   */

  CWE* getDRG_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_27);
  }

  CWE* getStatusAge(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_27);
  }

  bool isDRG_27(size_t index = 0) {
    try {
      return this->getObject(index, DRG_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusAge(size_t index = 0) {
    try {
      return this->getObject(index, DRG_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Length of Stay
   */

  CWE* getDRG_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_28);
  }

  CWE* getStatusLengthofStay(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_28);
  }

  bool isDRG_28(size_t index = 0) {
    try {
      return this->getObject(index, DRG_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusLengthofStay(size_t index = 0) {
    try {
      return this->getObject(index, DRG_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Same Day Flag
   */

  CWE* getDRG_29(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_29);
  }

  CWE* getStatusSameDayFlag(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_29);
  }

  bool isDRG_29(size_t index = 0) {
    try {
      return this->getObject(index, DRG_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusSameDayFlag(size_t index = 0) {
    try {
      return this->getObject(index, DRG_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Separation Mode
   */

  CWE* getDRG_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_30);
  }

  CWE* getStatusSeparationMode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_30);
  }

  bool isDRG_30(size_t index = 0) {
    try {
      return this->getObject(index, DRG_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusSeparationMode(size_t index = 0) {
    try {
      return this->getObject(index, DRG_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Weight at Birth
   */

  CWE* getDRG_31(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_31);
  }

  CWE* getStatusWeightatBirth(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_31);
  }

  bool isDRG_31(size_t index = 0) {
    try {
      return this->getObject(index, DRG_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusWeightatBirth(size_t index = 0) {
    try {
      return this->getObject(index, DRG_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Respiration Minutes
   */

  CWE* getDRG_32(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_32);
  }

  CWE* getStatusRespirationMinutes(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_32);
  }

  bool isDRG_32(size_t index = 0) {
    try {
      return this->getObject(index, DRG_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusRespirationMinutes(size_t index = 0) {
    try {
      return this->getObject(index, DRG_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Status Admission
   */

  CWE* getDRG_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_33);
  }

  CWE* getStatusAdmission(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, DRG_33);
  }

  bool isDRG_33(size_t index = 0) {
    try {
      return this->getObject(index, DRG_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStatusAdmission(size_t index = 0) {
    try {
      return this->getObject(index, DRG_33) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of DRG */

} /* End of namespace HL7_29 */
#endif /* __DRG_v29_H__ */
