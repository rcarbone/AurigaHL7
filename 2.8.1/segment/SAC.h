/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:28 CEST 2020
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


#ifndef __SAC_v281_H__
#define __SAC_v281_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/EI.h"
#include "../datatype/NA.h"
#include "../datatype/NM.h"
#include "../datatype/NULLDT.h"
#include "../datatype/SN.h"

namespace HL7_281 {

/* Specimen Container detail */
class SAC : public HL7Segment {
 public:
  SAC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    SAC_1,
    SAC_2,
    SAC_3,
    SAC_4,
    SAC_5,
    SAC_6,
    SAC_7,
    SAC_8,
    SAC_9,
    SAC_10,
    SAC_11,
    SAC_12,
    SAC_13,
    SAC_14,
    SAC_15,
    SAC_16,
    SAC_17,
    SAC_18,
    SAC_19,
    SAC_20,
    SAC_21,
    SAC_22,
    SAC_23,
    SAC_24,
    SAC_25,
    SAC_26,
    SAC_27,
    SAC_28,
    SAC_29,
    SAC_30,
    SAC_31,
    SAC_32,
    SAC_33,
    SAC_34,
    SAC_35,
    SAC_36,
    SAC_37,
    SAC_38,
    SAC_39,
    SAC_40,
    SAC_41,
    SAC_42,
    SAC_43,
    SAC_44,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "SAC"; }
  SAC* create() const { return new SAC(); }

 private:
  void init() {
    setName("SAC");
    /* Init members */
    addObject<EI>(SAC_1, "SAC.1", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_2, "SAC.2", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_3, "SAC.3", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_4, "SAC.4", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_5, "SAC.5", HL7::initialized, HL7::repetition_off);
    addObject<NULLDT>(SAC_6, "SAC.6", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(SAC_7, "SAC.7", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_8, "SAC.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_9, "SAC.9", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_10, "SAC.10", HL7::initialized, HL7::repetition_off);
    addObject<NA>(SAC_11, "SAC.11", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_12, "SAC.12", HL7::initialized, HL7::repetition_off);
    addObject<EI>(SAC_13, "SAC.13", HL7::initialized, HL7::repetition_off);
    addObject<NA>(SAC_14, "SAC.14", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_15, "SAC.15", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_16, "SAC.16", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_17, "SAC.17", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_18, "SAC.18", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_19, "SAC.19", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_20, "SAC.20", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_21, "SAC.21", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_22, "SAC.22", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_23, "SAC.23", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_24, "SAC.24", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_25, "SAC.25", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_26, "SAC.26", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_27, "SAC.27", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_28, "SAC.28", HL7::initialized, HL7::repetition_off);
    addObject<SN>(SAC_29, "SAC.29", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_30, "SAC.30", HL7::initialized, HL7::repetition_off);
    addObject<SN>(SAC_31, "SAC.31", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_32, "SAC.32", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_33, "SAC.33", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_34, "SAC.34", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_35, "SAC.35", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_36, "SAC.36", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_37, "SAC.37", HL7::initialized, HL7::repetition_off);
    addObject<NM>(SAC_38, "SAC.38", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_39, "SAC.39", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_40, "SAC.40", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_41, "SAC.41", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_42, "SAC.42", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_43, "SAC.43", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(SAC_44, "SAC.44", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * External Accession Identifier
   */

  EI* getSAC_1(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_1);
  }

  EI* getExternalAccessionIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_1);
  }

  bool isSAC_1(size_t index = 0) {
    try {
      return this->getObject(index, SAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExternalAccessionIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Accession Identifier
   */

  EI* getSAC_2(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_2);
  }

  EI* getAccessionIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_2);
  }

  bool isSAC_2(size_t index = 0) {
    try {
      return this->getObject(index, SAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAccessionIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Identifier
   */

  EI* getSAC_3(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_3);
  }

  EI* getContainerIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_3);
  }

  bool isSAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Primary
   */

  EI* getSAC_4(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_4);
  }

  EI* getPrimary(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_4);
  }

  bool isSAC_4(size_t index = 0) {
    try {
      return this->getObject(index, SAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPrimary(size_t index = 0) {
    try {
      return this->getObject(index, SAC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Equipment Container Identifier
   */

  EI* getSAC_5(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_5);
  }

  EI* getEquipmentContainerIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_5);
  }

  bool isSAC_5(size_t index = 0) {
    try {
      return this->getObject(index, SAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isEquipmentContainerIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Source
   */

  NULLDT* getSAC_6(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, SAC_6);
  }

  NULLDT* getSpecimenSource(size_t index = 0) {
    return (NULLDT*)this->getObjectSafe(index, SAC_6);
  }

  bool isSAC_6(size_t index = 0) {
    try {
      return this->getObject(index, SAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenSource(size_t index = 0) {
    try {
      return this->getObject(index, SAC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Registration Date/Time
   */

  DTM* getSAC_7(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SAC_7);
  }

  DTM* getRegistrationDateTime(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, SAC_7);
  }

  bool isSAC_7(size_t index = 0) {
    try {
      return this->getObject(index, SAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isRegistrationDateTime(size_t index = 0) {
    try {
      return this->getObject(index, SAC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Status
   */

  CWE* getSAC_8(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_8);
  }

  CWE* getContainerStatus(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_8);
  }

  bool isSAC_8(size_t index = 0) {
    try {
      return this->getObject(index, SAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerStatus(size_t index = 0) {
    try {
      return this->getObject(index, SAC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Carrier Type
   */

  CWE* getSAC_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_9);
  }

  CWE* getCarrierType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_9);
  }

  bool isSAC_9(size_t index = 0) {
    try {
      return this->getObject(index, SAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCarrierType(size_t index = 0) {
    try {
      return this->getObject(index, SAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Carrier Identifier
   */

  EI* getSAC_10(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_10);
  }

  EI* getCarrierIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_10);
  }

  bool isSAC_10(size_t index = 0) {
    try {
      return this->getObject(index, SAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCarrierIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Position in Carrier
   */

  NA* getSAC_11(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, SAC_11);
  }

  NA* getPositioninCarrier(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, SAC_11);
  }

  bool isSAC_11(size_t index = 0) {
    try {
      return this->getObject(index, SAC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPositioninCarrier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Tray Type - SAC
   */

  CWE* getSAC_12(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_12);
  }

  CWE* getTrayTypeSAC(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_12);
  }

  bool isSAC_12(size_t index = 0) {
    try {
      return this->getObject(index, SAC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTrayTypeSAC(size_t index = 0) {
    try {
      return this->getObject(index, SAC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Tray Identifier
   */

  EI* getSAC_13(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_13);
  }

  EI* getTrayIdentifier(size_t index = 0) {
    return (EI*)this->getObjectSafe(index, SAC_13);
  }

  bool isSAC_13(size_t index = 0) {
    try {
      return this->getObject(index, SAC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTrayIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, SAC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Position in Tray
   */

  NA* getSAC_14(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, SAC_14);
  }

  NA* getPositioninTray(size_t index = 0) {
    return (NA*)this->getObjectSafe(index, SAC_14);
  }

  bool isSAC_14(size_t index = 0) {
    try {
      return this->getObject(index, SAC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isPositioninTray(size_t index = 0) {
    try {
      return this->getObject(index, SAC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Location
   */

  CWE* getSAC_15(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_15);
  }

  CWE* getLocation(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_15);
  }

  bool isSAC_15(size_t index = 0) {
    try {
      return this->getObject(index, SAC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLocation(size_t index = 0) {
    try {
      return this->getObject(index, SAC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Height
   */

  NM* getSAC_16(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_16);
  }

  NM* getContainerHeight(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_16);
  }

  bool isSAC_16(size_t index = 0) {
    try {
      return this->getObject(index, SAC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerHeight(size_t index = 0) {
    try {
      return this->getObject(index, SAC_16) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Diameter
   */

  NM* getSAC_17(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_17);
  }

  NM* getContainerDiameter(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_17);
  }

  bool isSAC_17(size_t index = 0) {
    try {
      return this->getObject(index, SAC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerDiameter(size_t index = 0) {
    try {
      return this->getObject(index, SAC_17) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Barrier Delta
   */

  NM* getSAC_18(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_18);
  }

  NM* getBarrierDelta(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_18);
  }

  bool isSAC_18(size_t index = 0) {
    try {
      return this->getObject(index, SAC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBarrierDelta(size_t index = 0) {
    try {
      return this->getObject(index, SAC_18) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Bottom Delta
   */

  NM* getSAC_19(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_19);
  }

  NM* getBottomDelta(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_19);
  }

  bool isSAC_19(size_t index = 0) {
    try {
      return this->getObject(index, SAC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBottomDelta(size_t index = 0) {
    try {
      return this->getObject(index, SAC_19) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Height/Diameter/Delta Units
   */

  CWE* getSAC_20(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_20);
  }

  CWE* getContainerHeightDiameterDeltaUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_20);
  }

  bool isSAC_20(size_t index = 0) {
    try {
      return this->getObject(index, SAC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerHeightDiameterDeltaUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_20) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Container Volume
   */

  NM* getSAC_21(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_21);
  }

  NM* getContainerVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_21);
  }

  bool isSAC_21(size_t index = 0) {
    try {
      return this->getObject(index, SAC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isContainerVolume(size_t index = 0) {
    try {
      return this->getObject(index, SAC_21) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Available Specimen Volume
   */

  NM* getSAC_22(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_22);
  }

  NM* getAvailableSpecimenVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_22);
  }

  bool isSAC_22(size_t index = 0) {
    try {
      return this->getObject(index, SAC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAvailableSpecimenVolume(size_t index = 0) {
    try {
      return this->getObject(index, SAC_22) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Initial Specimen Volume
   */

  NM* getSAC_23(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_23);
  }

  NM* getInitialSpecimenVolume(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_23);
  }

  bool isSAC_23(size_t index = 0) {
    try {
      return this->getObject(index, SAC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInitialSpecimenVolume(size_t index = 0) {
    try {
      return this->getObject(index, SAC_23) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Volume Units
   */

  CWE* getSAC_24(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_24);
  }

  CWE* getVolumeUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_24);
  }

  bool isSAC_24(size_t index = 0) {
    try {
      return this->getObject(index, SAC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isVolumeUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_24) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Separator Type
   */

  CWE* getSAC_25(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_25);
  }

  CWE* getSeparatorType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_25);
  }

  bool isSAC_25(size_t index = 0) {
    try {
      return this->getObject(index, SAC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSeparatorType(size_t index = 0) {
    try {
      return this->getObject(index, SAC_25) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Cap Type
   */

  CWE* getSAC_26(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_26);
  }

  CWE* getCapType(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_26);
  }

  bool isSAC_26(size_t index = 0) {
    try {
      return this->getObject(index, SAC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCapType(size_t index = 0) {
    try {
      return this->getObject(index, SAC_26) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Additive
   */

  CWE* getSAC_27(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_27);
  }

  CWE* getAdditive(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_27);
  }

  bool isSAC_27(size_t index = 0) {
    try {
      return this->getObject(index, SAC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isAdditive(size_t index = 0) {
    try {
      return this->getObject(index, SAC_27) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Specimen Component
   */

  CWE* getSAC_28(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_28);
  }

  CWE* getSpecimenComponent(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_28);
  }

  bool isSAC_28(size_t index = 0) {
    try {
      return this->getObject(index, SAC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecimenComponent(size_t index = 0) {
    try {
      return this->getObject(index, SAC_28) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Dilution Factor
   */

  SN* getSAC_29(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SAC_29);
  }

  SN* getDilutionFactor(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SAC_29);
  }

  bool isSAC_29(size_t index = 0) {
    try {
      return this->getObject(index, SAC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDilutionFactor(size_t index = 0) {
    try {
      return this->getObject(index, SAC_29) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Treatment
   */

  CWE* getSAC_30(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_30);
  }

  CWE* getTreatment(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_30);
  }

  bool isSAC_30(size_t index = 0) {
    try {
      return this->getObject(index, SAC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTreatment(size_t index = 0) {
    try {
      return this->getObject(index, SAC_30) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Temperature
   */

  SN* getSAC_31(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SAC_31);
  }

  SN* getTemperature(size_t index = 0) {
    return (SN*)this->getObjectSafe(index, SAC_31);
  }

  bool isSAC_31(size_t index = 0) {
    try {
      return this->getObject(index, SAC_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isTemperature(size_t index = 0) {
    try {
      return this->getObject(index, SAC_31) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hemolysis Index
   */

  NM* getSAC_32(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_32);
  }

  NM* getHemolysisIndex(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_32);
  }

  bool isSAC_32(size_t index = 0) {
    try {
      return this->getObject(index, SAC_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHemolysisIndex(size_t index = 0) {
    try {
      return this->getObject(index, SAC_32) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Hemolysis Index Units
   */

  CWE* getSAC_33(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_33);
  }

  CWE* getHemolysisIndexUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_33);
  }

  bool isSAC_33(size_t index = 0) {
    try {
      return this->getObject(index, SAC_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isHemolysisIndexUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_33) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lipemia Index
   */

  NM* getSAC_34(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_34);
  }

  NM* getLipemiaIndex(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_34);
  }

  bool isSAC_34(size_t index = 0) {
    try {
      return this->getObject(index, SAC_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLipemiaIndex(size_t index = 0) {
    try {
      return this->getObject(index, SAC_34) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Lipemia Index Units
   */

  CWE* getSAC_35(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_35);
  }

  CWE* getLipemiaIndexUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_35);
  }

  bool isSAC_35(size_t index = 0) {
    try {
      return this->getObject(index, SAC_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLipemiaIndexUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_35) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Icterus Index
   */

  NM* getSAC_36(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_36);
  }

  NM* getIcterusIndex(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_36);
  }

  bool isSAC_36(size_t index = 0) {
    try {
      return this->getObject(index, SAC_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIcterusIndex(size_t index = 0) {
    try {
      return this->getObject(index, SAC_36) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Icterus Index Units
   */

  CWE* getSAC_37(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_37);
  }

  CWE* getIcterusIndexUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_37);
  }

  bool isSAC_37(size_t index = 0) {
    try {
      return this->getObject(index, SAC_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isIcterusIndexUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_37) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fibrin Index
   */

  NM* getSAC_38(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_38);
  }

  NM* getFibrinIndex(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, SAC_38);
  }

  bool isSAC_38(size_t index = 0) {
    try {
      return this->getObject(index, SAC_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFibrinIndex(size_t index = 0) {
    try {
      return this->getObject(index, SAC_38) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Fibrin Index Units
   */

  CWE* getSAC_39(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_39);
  }

  CWE* getFibrinIndexUnits(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_39);
  }

  bool isSAC_39(size_t index = 0) {
    try {
      return this->getObject(index, SAC_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isFibrinIndexUnits(size_t index = 0) {
    try {
      return this->getObject(index, SAC_39) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * System Induced Contaminants
   */

  CWE* getSAC_40(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_40);
  }

  CWE* getSystemInducedContaminants(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_40);
  }

  bool isSAC_40(size_t index = 0) {
    try {
      return this->getObject(index, SAC_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSystemInducedContaminants(size_t index = 0) {
    try {
      return this->getObject(index, SAC_40) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Drug Interference
   */

  CWE* getSAC_41(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_41);
  }

  CWE* getDrugInterference(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_41);
  }

  bool isSAC_41(size_t index = 0) {
    try {
      return this->getObject(index, SAC_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDrugInterference(size_t index = 0) {
    try {
      return this->getObject(index, SAC_41) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Artificial Blood
   */

  CWE* getSAC_42(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_42);
  }

  CWE* getArtificialBlood(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_42);
  }

  bool isSAC_42(size_t index = 0) {
    try {
      return this->getObject(index, SAC_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isArtificialBlood(size_t index = 0) {
    try {
      return this->getObject(index, SAC_42) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Special Handling Code
   */

  CWE* getSAC_43(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_43);
  }

  CWE* getSpecialHandlingCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_43);
  }

  bool isSAC_43(size_t index = 0) {
    try {
      return this->getObject(index, SAC_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSpecialHandlingCode(size_t index = 0) {
    try {
      return this->getObject(index, SAC_43) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Environmental Factors
   */

  CWE* getSAC_44(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_44);
  }

  CWE* getOtherEnvironmentalFactors(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, SAC_44);
  }

  bool isSAC_44(size_t index = 0) {
    try {
      return this->getObject(index, SAC_44) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherEnvironmentalFactors(size_t index = 0) {
    try {
      return this->getObject(index, SAC_44) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of SAC */

} /* End of namespace HL7_281 */
#endif /* __SAC_v281_H__ */
