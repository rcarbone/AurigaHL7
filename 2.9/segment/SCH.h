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


#ifndef __SCH_v29_H__
#define __SCH_v29_H__

#include "../../common/Util.h"
#include "../datatype/CNE.h"
#include "../datatype/CWE.h"
#include "../datatype/EI.h"
#include "../datatype/EIP.h"
#include "../datatype/NM.h"
#include "../datatype/PL.h"
#include "../datatype/ST.h"
#include "../datatype/XAD.h"
#include "../datatype/XCN.h"
#include "../datatype/XTN.h"

namespace HL7_29 {

/* SCH */
class SCH : public HL7Segment {
 public:
  SCH() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SCH_1,
    SCH_2,
    SCH_3,
    SCH_4,
    SCH_5,
    SCH_6,
    SCH_7,
    SCH_8,
    SCH_9,
    SCH_10,
    SCH_11,
    SCH_12,
    SCH_13,
    SCH_14,
    SCH_15,
    SCH_16,
    SCH_17,
    SCH_18,
    SCH_19,
    SCH_20,
    SCH_21,
    SCH_22,
    SCH_23,
    SCH_24,
    SCH_25,
    SCH_26,
    SCH_27,
    SCH_28,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SCH"; }
  SCH* create() const { return new SCH(); }

 private:
  void init() {
    setName("SCH");
    /* Init members */
    addObject<EI>(SCH_1, "SCH.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_2, "SCH.2", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SCH_3, "SCH.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_4, "SCH.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCH_5, "SCH.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCH_6, "SCH.6", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCH_7, "SCH.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCH_8, "SCH.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SCH_9, "SCH.9", HL7::initialized, HL7::repetition_off);
    addObject<CNE>(SCH_10, "SCH.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(SCH_11, "SCH.11", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(SCH_12, "SCH.12", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(SCH_13, "SCH.13", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(SCH_14, "SCH.14", HL7::initialized, HL7::repetition_off);
    addObject<PL>(SCH_15, "SCH.15", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(SCH_16, "SCH.16", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(SCH_17, "SCH.17", HL7::initialized, HL7::repetition_off);
    addObject<XAD>(SCH_18, "SCH.18", HL7::initialized, HL7::repetition_off);
    addObject<PL>(SCH_19, "SCH.19", HL7::initialized, HL7::repetition_off);
    addObject<XCN>(SCH_20, "SCH.20", HL7::initialized, HL7::repetition_off);
    addObject<XTN>(SCH_21, "SCH.21", HL7::initialized, HL7::repetition_off);
    addObject<PL>(SCH_22, "SCH.22", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_23, "SCH.23", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_24, "SCH.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SCH_25, "SCH.25", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_26, "SCH.26", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SCH_27, "SCH.27", HL7::initialized, HL7::repetition_off);
    addObject<EIP>(SCH_28, "SCH.28", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Placer Appointment ID
   */

  EI* getSCH_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_1);
  }

  EI* getPlacerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_1);
  }

  bool isSCH_1(size_t index = 0) {
    try {
      return this->getObject(index, SCH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, SCH_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Appointment ID
   */

  EI* getSCH_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_2);
  }

  EI* getFillerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_2);
  }

  bool isSCH_2(size_t index = 0) {
    try {
      return this->getObject(index, SCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, SCH_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Occurrence Number
   */

  NM* getSCH_3(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCH_3);
  }

  NM* getOccurrenceNumber(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCH_3);
  }

  bool isSCH_3(size_t index = 0) {
    try {
      return this->getObject(index, SCH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOccurrenceNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Group Number
   */

  EI* getSCH_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_4);
  }

  EI* getPlacerOrderGroupNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_4);
  }

  bool isSCH_4(size_t index = 0) {
    try {
      return this->getObject(index, SCH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Schedule ID
   */

  CWE* getSCH_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_5);
  }

  CWE* getScheduleID(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_5);
  }

  bool isSCH_5(size_t index = 0) {
    try {
      return this->getObject(index, SCH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isScheduleID(size_t index = 0) {
    try {
      return this->getObject(index, SCH_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Event Reason
   */

  CWE* getSCH_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_6);
  }

  CWE* getEventReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_6);
  }

  bool isSCH_6(size_t index = 0) {
    try {
      return this->getObject(index, SCH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEventReason(size_t index = 0) {
    try {
      return this->getObject(index, SCH_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Reason
   */

  CWE* getSCH_7(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_7);
  }

  CWE* getAppointmentReason(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_7);
  }

  bool isSCH_7(size_t index = 0) {
    try {
      return this->getObject(index, SCH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentReason(size_t index = 0) {
    try {
      return this->getObject(index, SCH_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Type
   */

  CWE* getSCH_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_8);
  }

  CWE* getAppointmentType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_8);
  }

  bool isSCH_8(size_t index = 0) {
    try {
      return this->getObject(index, SCH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentType(size_t index = 0) {
    try {
      return this->getObject(index, SCH_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Duration
   */

  NM* getSCH_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCH_9);
  }

  NM* getAppointmentDuration(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SCH_9);
  }

  bool isSCH_9(size_t index = 0) {
    try {
      return this->getObject(index, SCH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentDuration(size_t index = 0) {
    try {
      return this->getObject(index, SCH_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Duration Units
   */

  CNE* getSCH_10(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCH_10);
  }

  CNE* getAppointmentDurationUnits(size_t index = 0) {
    return (CNE*)this->getObjectSafe(index, SCH_10);
  }

  bool isSCH_10(size_t index = 0) {
    try {
      return this->getObject(index, SCH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentDurationUnits(size_t index = 0) {
    try {
      return this->getObject(index, SCH_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Appointment Timing Quantity
   */

  ST* getSCH_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCH_11);
  }

  ST* getAppointmentTimingQuantity(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, SCH_11);
  }

  bool isSCH_11(size_t index = 0) {
    try {
      return this->getObject(index, SCH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAppointmentTimingQuantity(size_t index = 0) {
    try {
      return this->getObject(index, SCH_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Person
   */

  XCN* getSCH_12(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_12);
  }

  XCN* getPlacerContactPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_12);
  }

  bool isSCH_12(size_t index = 0) {
    try {
      return this->getObject(index, SCH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, SCH_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Phone Number
   */

  XTN* getSCH_13(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_13);
  }

  XTN* getPlacerContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_13);
  }

  bool isSCH_13(size_t index = 0) {
    try {
      return this->getObject(index, SCH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Address
   */

  XAD* getSCH_14(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, SCH_14);
  }

  XAD* getPlacerContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, SCH_14);
  }

  bool isSCH_14(size_t index = 0) {
    try {
      return this->getObject(index, SCH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, SCH_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Contact Location
   */

  PL* getSCH_15(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_15);
  }

  PL* getPlacerContactLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_15);
  }

  bool isSCH_15(size_t index = 0) {
    try {
      return this->getObject(index, SCH_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerContactLocation(size_t index = 0) {
    try {
      return this->getObject(index, SCH_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Contact Person
   */

  XCN* getSCH_16(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_16);
  }

  XCN* getFillerContactPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_16);
  }

  bool isSCH_16(size_t index = 0) {
    try {
      return this->getObject(index, SCH_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerContactPerson(size_t index = 0) {
    try {
      return this->getObject(index, SCH_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Contact Phone Number
   */

  XTN* getSCH_17(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_17);
  }

  XTN* getFillerContactPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_17);
  }

  bool isSCH_17(size_t index = 0) {
    try {
      return this->getObject(index, SCH_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerContactPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Contact Address
   */

  XAD* getSCH_18(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, SCH_18);
  }

  XAD* getFillerContactAddress(size_t index = 0) {
    return (XAD*)this->getObjectSafe(index, SCH_18);
  }

  bool isSCH_18(size_t index = 0) {
    try {
      return this->getObject(index, SCH_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerContactAddress(size_t index = 0) {
    try {
      return this->getObject(index, SCH_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Contact Location
   */

  PL* getSCH_19(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_19);
  }

  PL* getFillerContactLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_19);
  }

  bool isSCH_19(size_t index = 0) {
    try {
      return this->getObject(index, SCH_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerContactLocation(size_t index = 0) {
    try {
      return this->getObject(index, SCH_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Person
   */

  XCN* getSCH_20(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_20);
  }

  XCN* getEnteredByPerson(size_t index = 0) {
    return (XCN*)this->getObjectSafe(index, SCH_20);
  }

  bool isSCH_20(size_t index = 0) {
    try {
      return this->getObject(index, SCH_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByPerson(size_t index = 0) {
    try {
      return this->getObject(index, SCH_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Phone Number
   */

  XTN* getSCH_21(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_21);
  }

  XTN* getEnteredByPhoneNumber(size_t index = 0) {
    return (XTN*)this->getObjectSafe(index, SCH_21);
  }

  bool isSCH_21(size_t index = 0) {
    try {
      return this->getObject(index, SCH_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByPhoneNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Entered By Location
   */

  PL* getSCH_22(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_22);
  }

  PL* getEnteredByLocation(size_t index = 0) {
    return (PL*)this->getObjectSafe(index, SCH_22);
  }

  bool isSCH_22(size_t index = 0) {
    try {
      return this->getObject(index, SCH_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEnteredByLocation(size_t index = 0) {
    try {
      return this->getObject(index, SCH_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Placer Appointment ID
   */

  EI* getSCH_23(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_23);
  }

  EI* getParentPlacerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_23);
  }

  bool isSCH_23(size_t index = 0) {
    try {
      return this->getObject(index, SCH_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentPlacerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, SCH_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Parent Filler Appointment ID
   */

  EI* getSCH_24(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_24);
  }

  EI* getParentFillerAppointmentID(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_24);
  }

  bool isSCH_24(size_t index = 0) {
    try {
      return this->getObject(index, SCH_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isParentFillerAppointmentID(size_t index = 0) {
    try {
      return this->getObject(index, SCH_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Status Code
   */

  CWE* getSCH_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_25);
  }

  CWE* getFillerStatusCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SCH_25);
  }

  bool isSCH_25(size_t index = 0) {
    try {
      return this->getObject(index, SCH_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerStatusCode(size_t index = 0) {
    try {
      return this->getObject(index, SCH_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Placer Order Number
   */

  EI* getSCH_26(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_26);
  }

  EI* getPlacerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_26);
  }

  bool isSCH_26(size_t index = 0) {
    try {
      return this->getObject(index, SCH_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPlacerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Filler Order Number
   */

  EI* getSCH_27(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_27);
  }

  EI* getFillerOrderNumber(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SCH_27);
  }

  bool isSCH_27(size_t index = 0) {
    try {
      return this->getObject(index, SCH_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFillerOrderNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Alternate Placer Order Group Number
   */

  EIP* getSCH_28(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SCH_28);
  }

  EIP* getAlternatePlacerOrderGroupNumber(size_t index = 0) {
    return (EIP*)this->getObjectSafe(index, SCH_28);
  }

  bool isSCH_28(size_t index = 0) {
    try {
      return this->getObject(index, SCH_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAlternatePlacerOrderGroupNumber(size_t index = 0) {
    try {
      return this->getObject(index, SCH_28) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SCH */

} /* End of namespace HL7_29 */
#endif /* __SCH_v29_H__ */
