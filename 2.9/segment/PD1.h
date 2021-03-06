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


#ifndef __PD1_v29_H__
#define __PD1_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/CX.h"
#include "../datatype/DT.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_29 {

/* PD1 */
class PD1 : public HL7Segment {
 public:
  PD1() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PD1_1,
    PD1_2,
    PD1_3,
    PD1_4,
    PD1_5,
    PD1_6,
    PD1_7,
    PD1_8,
    PD1_9,
    PD1_10,
    PD1_11,
    PD1_12,
    PD1_13,
    PD1_14,
    PD1_15,
    PD1_16,
    PD1_17,
    PD1_18,
    PD1_19,
    PD1_20,
    PD1_21,
    PD1_22,
    PD1_23,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PD1"; }
  PD1* create() const { return new PD1(); }

 private:
  void init() {
    setName("PD1");
    /* Init members */
    addObject<CWE>(PD1_1, "PD1.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_2, "PD1.2", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PD1_3, "PD1.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PD1_4, "PD1.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_5, "PD1.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_6, "PD1.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_7, "PD1.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_8, "PD1.8", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PD1_9, "PD1.9", HL7::initialized, HL7::repetition_off);
    addObject<CX>(PD1_10, "PD1.10", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_11, "PD1.11", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PD1_12, "PD1.12", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PD1_13, "PD1.13", HL7::initialized, HL7::repetition_off);
    addObject<XON>(PD1_14, "PD1.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_15, "PD1.15", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_16, "PD1.16", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PD1_17, "PD1.17", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PD1_18, "PD1.18", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_19, "PD1.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_20, "PD1.20", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PD1_21, "PD1.21", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PD1_22, "PD1.22", HL7::initialized, HL7::repetition_off);
    addObject<DT>(PD1_23, "PD1.23", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Living Dependency
   */

  CWE* getPD1_1(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_1);
  }

  CWE* getLivingDependency(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_1);
  }

  bool isPD1_1(size_t index = 0) {
    try {
      return this->getObject(index, PD1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingDependency(size_t index = 0) {
    try {
      return this->getObject(index, PD1_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Arrangement
   */

  CWE* getPD1_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_2);
  }

  CWE* getLivingArrangement(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_2);
  }

  bool isPD1_2(size_t index = 0) {
    try {
      return this->getObject(index, PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingArrangement(size_t index = 0) {
    try {
      return this->getObject(index, PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Primary Facility
   */

  XON* getPD1_3(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_3);
  }

  XON* getPatientPrimaryFacility(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_3);
  }

  bool isPD1_3(size_t index = 0) {
    try {
      return this->getObject(index, PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientPrimaryFacility(size_t index = 0) {
    try {
      return this->getObject(index, PD1_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Patient Primary Care Provider Name & ID
   */

  ST* getPD1_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PD1_4);
  }

  ST* getPatientPrimaryCareProviderNameID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PD1_4);
  }

  bool isPD1_4(size_t index = 0) {
    try {
      return this->getObject(index, PD1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPatientPrimaryCareProviderNameID(size_t index = 0) {
    try {
      return this->getObject(index, PD1_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Student Indicator
   */

  CWE* getPD1_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_5);
  }

  CWE* getStudentIndicator(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_5);
  }

  bool isPD1_5(size_t index = 0) {
    try {
      return this->getObject(index, PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isStudentIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PD1_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Handicap
   */

  CWE* getPD1_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_6);
  }

  CWE* getHandicap(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_6);
  }

  bool isPD1_6(size_t index = 0) {
    try {
      return this->getObject(index, PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHandicap(size_t index = 0) {
    try {
      return this->getObject(index, PD1_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Living Will Code
   */

  CWE* getPD1_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_7);
  }

  CWE* getLivingWillCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_7);
  }

  bool isPD1_7(size_t index = 0) {
    try {
      return this->getObject(index, PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLivingWillCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Organ Donor Code
   */

  CWE* getPD1_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_8);
  }

  CWE* getOrganDonorCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_8);
  }

  bool isPD1_8(size_t index = 0) {
    try {
      return this->getObject(index, PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOrganDonorCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Separate Bill
   */

  ID* getPD1_9(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_9);
  }

  ID* getSeparateBill(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_9);
  }

  bool isPD1_9(size_t index = 0) {
    try {
      return this->getObject(index, PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparateBill(size_t index = 0) {
    try {
      return this->getObject(index, PD1_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Duplicate Patient
   */

  CX* getPD1_10(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PD1_10);
  }

  CX* getDuplicatePatient(size_t index = 0) {
    return (CX*)this->getObjectSafe(index, PD1_10);
  }

  bool isPD1_10(size_t index = 0) {
    try {
      return this->getObject(index, PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDuplicatePatient(size_t index = 0) {
    try {
      return this->getObject(index, PD1_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code
   */

  CWE* getPD1_11(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_11);
  }

  CWE* getPublicityCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_11);
  }

  bool isPD1_11(size_t index = 0) {
    try {
      return this->getObject(index, PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator
   */

  ID* getPD1_12(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_12);
  }

  ID* getProtectionIndicator(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PD1_12);
  }

  bool isPD1_12(size_t index = 0) {
    try {
      return this->getObject(index, PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicator(size_t index = 0) {
    try {
      return this->getObject(index, PD1_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Protection Indicator Effective Date
   */

  DT* getPD1_13(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_13);
  }

  DT* getProtectionIndicatorEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_13);
  }

  bool isPD1_13(size_t index = 0) {
    try {
      return this->getObject(index, PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProtectionIndicatorEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Place of Worship
   */

  XON* getPD1_14(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_14);
  }

  XON* getPlaceofWorship(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PD1_14);
  }

  bool isPD1_14(size_t index = 0) {
    try {
      return this->getObject(index, PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlaceofWorship(size_t index = 0) {
    try {
      return this->getObject(index, PD1_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advance Directive Code
   */

  CWE* getPD1_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_15);
  }

  CWE* getAdvanceDirectiveCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_15);
  }

  bool isPD1_15(size_t index = 0) {
    try {
      return this->getObject(index, PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvanceDirectiveCode(size_t index = 0) {
    try {
      return this->getObject(index, PD1_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Immunization Registry Status
   */

  CWE* getPD1_16(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_16);
  }

  CWE* getImmunizationRegistryStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_16);
  }

  bool isPD1_16(size_t index = 0) {
    try {
      return this->getObject(index, PD1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImmunizationRegistryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PD1_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Immunization Registry Status Effective Date
   */

  DT* getPD1_17(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_17);
  }

  DT* getImmunizationRegistryStatusEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_17);
  }

  bool isPD1_17(size_t index = 0) {
    try {
      return this->getObject(index, PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isImmunizationRegistryStatusEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Publicity Code Effective Date
   */

  DT* getPD1_18(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_18);
  }

  DT* getPublicityCodeEffectiveDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_18);
  }

  bool isPD1_18(size_t index = 0) {
    try {
      return this->getObject(index, PD1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPublicityCodeEffectiveDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Branch
   */

  CWE* getPD1_19(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_19);
  }

  CWE* getMilitaryBranch(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_19);
  }

  bool isPD1_19(size_t index = 0) {
    try {
      return this->getObject(index, PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryBranch(size_t index = 0) {
    try {
      return this->getObject(index, PD1_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Rank/Grade
   */

  CWE* getPD1_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_20);
  }

  CWE* getMilitaryRankGrade(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_20);
  }

  bool isPD1_20(size_t index = 0) {
    try {
      return this->getObject(index, PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryRankGrade(size_t index = 0) {
    try {
      return this->getObject(index, PD1_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Military Status
   */

  CWE* getPD1_21(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_21);
  }

  CWE* getMilitaryStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PD1_21);
  }

  bool isPD1_21(size_t index = 0) {
    try {
      return this->getObject(index, PD1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMilitaryStatus(size_t index = 0) {
    try {
      return this->getObject(index, PD1_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Advance Directive Last Verified Date
   */

  DT* getPD1_22(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_22);
  }

  DT* getAdvanceDirectiveLastVerifiedDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_22);
  }

  bool isPD1_22(size_t index = 0) {
    try {
      return this->getObject(index, PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdvanceDirectiveLastVerifiedDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Retirement Date
   */

  DT* getPD1_23(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_23);
  }

  DT* getRetirementDate(size_t index = 0) {
    return (DT*)this->getObjectSafe(index, PD1_23);
  }

  bool isPD1_23(size_t index = 0) {
    try {
      return this->getObject(index, PD1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRetirementDate(size_t index = 0) {
    try {
      return this->getObject(index, PD1_23) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PD1 */

} /* End of namespace HL7_29 */
#endif /* __PD1_v29_H__ */
