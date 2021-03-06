/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:04:57 CEST 2020
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


#ifndef __ORG_O20__281_H__
#define __ORG_O20__281_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/CTI.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct ORG_O20_RESPONSE; /* RESPONSE */
struct ORG_O20_PATIENT; /* PATIENT */
struct ORG_O20_ORDER; /* ORDER */
struct ORG_O20_TIMING; /* TIMING */
struct ORG_O20_OBSERVATION_GROUP; /* OBSERVATION_GROUP */
struct ORG_O20_SPECIMEN; /* SPECIMEN */

/* RESPONSE */
struct ORG_O20_RESPONSE : public HL7Group {
  ORG_O20_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_ORG_O20_ORDER_1,
    ORG_O20_ORG_O20_PATIENT_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_RESPONSE"; }
  ORG_O20_RESPONSE* create() const { return new ORG_O20_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.RESPONSE");
    addObject<ORG_O20_ORDER>(ORG_O20_ORG_O20_ORDER_1, "ORG_O20_ORDER.1", HL7::optional, HL7::repetition_on);
    addObject<ORG_O20_PATIENT>(ORG_O20_ORG_O20_PATIENT_2, "ORG_O20_PATIENT.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ORG_O20_ORDER* getORG_O20_ORDER_1(size_t index = 0) {
    return (ORG_O20_ORDER*)this->getObjectSafe(index, ORG_O20_ORG_O20_ORDER_1);
  }
  ORG_O20_PATIENT* getORG_O20_PATIENT_2(size_t index = 0) {
    return (ORG_O20_PATIENT*)this->getObjectSafe(index, ORG_O20_ORG_O20_PATIENT_2);
  }

  /* Checker list */
  bool isORG_O20_ORDER_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_ORDER_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_O20_PATIENT_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_PATIENT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_RESPONSE */

/* PATIENT */
struct ORG_O20_PATIENT : public HL7Group {
  ORG_O20_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_ARV_1,
    ORG_O20_NTE_2,
    ORG_O20_PID_3,
    ORG_O20_PRT_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_PATIENT"; }
  ORG_O20_PATIENT* create() const { return new ORG_O20_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.PATIENT");
    addObject<ARV>(ORG_O20_ARV_1, "ARV.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORG_O20_PID_3, "PID.3", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORG_O20_PRT_4, "PRT.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ARV* getARV_1(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ARV_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_PID_3);
  }
  PRT* getPRT_4(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_4);
  }

  /* Checker list */
  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_PATIENT */

/* ORDER */
struct ORG_O20_ORDER : public HL7Group {
  ORG_O20_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_CTI_1,
    ORG_O20_NTE_2,
    ORG_O20_ORC_3,
    ORG_O20_ORG_O20_OBSERVATION_GROUP_4,
    ORG_O20_ORG_O20_SPECIMEN_5,
    ORG_O20_ORG_O20_TIMING_6,
    ORG_O20_PRT_7,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_ORDER"; }
  ORG_O20_ORDER* create() const { return new ORG_O20_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.ORDER");
    addObject<CTI>(ORG_O20_CTI_1, "CTI.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORG_O20_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORG_O20_ORC_3, "ORC.3", HL7::optional, HL7::repetition_on);
    addObject<ORG_O20_OBSERVATION_GROUP>(ORG_O20_ORG_O20_OBSERVATION_GROUP_4, "ORG_O20_OBSERVATION_GROUP.4", HL7::optional, HL7::repetition_on);
    addObject<ORG_O20_SPECIMEN>(ORG_O20_ORG_O20_SPECIMEN_5, "ORG_O20_SPECIMEN.5", HL7::optional, HL7::repetition_on);
    addObject<ORG_O20_TIMING>(ORG_O20_ORG_O20_TIMING_6, "ORG_O20_TIMING.6", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORG_O20_PRT_7, "PRT.7", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTI* getCTI_1(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORG_O20_CTI_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_2);
  }
  ORC* getORC_3(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORG_O20_ORC_3);
  }
  ORG_O20_OBSERVATION_GROUP* getORG_O20_OBSERVATION_GROUP_4(size_t index = 0) {
    return (ORG_O20_OBSERVATION_GROUP*)this->getObjectSafe(index, ORG_O20_ORG_O20_OBSERVATION_GROUP_4);
  }
  ORG_O20_SPECIMEN* getORG_O20_SPECIMEN_5(size_t index = 0) {
    return (ORG_O20_SPECIMEN*)this->getObjectSafe(index, ORG_O20_ORG_O20_SPECIMEN_5);
  }
  ORG_O20_TIMING* getORG_O20_TIMING_6(size_t index = 0) {
    return (ORG_O20_TIMING*)this->getObjectSafe(index, ORG_O20_ORG_O20_TIMING_6);
  }
  PRT* getPRT_7(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_7);
  }

  /* Checker list */
  bool isCTI_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_CTI_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_O20_OBSERVATION_GROUP_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_OBSERVATION_GROUP_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_O20_SPECIMEN_5(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_SPECIMEN_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORG_O20_TIMING_6(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORG_O20_TIMING_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_7(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_7) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_ORDER */

/* TIMING */
struct ORG_O20_TIMING : public HL7Group {
  ORG_O20_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_TQ1_1,
    ORG_O20_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_TIMING"; }
  ORG_O20_TIMING* create() const { return new ORG_O20_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.TIMING");
    addObject<TQ1>(ORG_O20_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(ORG_O20_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_TIMING */

/* OBSERVATION_GROUP */
struct ORG_O20_OBSERVATION_GROUP : public HL7Group {
  ORG_O20_OBSERVATION_GROUP() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_OBR_1,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_OBSERVATION_GROUP"; }
  ORG_O20_OBSERVATION_GROUP* create() const { return new ORG_O20_OBSERVATION_GROUP(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.OBSERVATION_GROUP");
    addObject<OBR>(ORG_O20_OBR_1, "OBR.1", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBR* getOBR_1(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_OBR_1);
  }

  /* Checker list */
  bool isOBR_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_OBR_1) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_OBSERVATION_GROUP */

/* SPECIMEN */
struct ORG_O20_SPECIMEN : public HL7Group {
  ORG_O20_SPECIMEN() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_SAC_1,
    ORG_O20_SPM_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20_SPECIMEN"; }
  ORG_O20_SPECIMEN* create() const { return new ORG_O20_SPECIMEN(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20.SPECIMEN");
    addObject<SAC>(ORG_O20_SAC_1, "SAC.1", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORG_O20_SPM_2, "SPM.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  SAC* getSAC_1(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORG_O20_SAC_1);
  }
  SPM* getSPM_2(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORG_O20_SPM_2);
  }

  /* Checker list */
  bool isSAC_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_SAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_SPM_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_SPECIMEN */

/* ORG_O20 */
struct ORG_O20 : public HL7Message {
  ORG_O20() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORG_O20_MSH_1,
    ORG_O20_MSA_2,
    ORG_O20_ERR_3,
    ORG_O20_SFT_4,
    ORG_O20_UAC_5,
    ORG_O20_NTE_6,
    ORG_O20_PID_10,
    ORG_O20_NTE_11,
    ORG_O20_PRT_12,
    ORG_O20_ARV_13,
    ORG_O20_PID_14,
    ORG_O20_NTE_15,
    ORG_O20_PRT_16,
    ORG_O20_ARV_17,
    ORG_O20_ORC_18,
    ORG_O20_PRT_19,
    ORG_O20_PRT_22,
    ORG_O20_NTE_23,
    ORG_O20_CTI_24,
    ORG_O20_TQ1_26,
    ORG_O20_TQ2_27,
    ORG_O20_TQ1_28,
    ORG_O20_TQ2_29,
    ORG_O20_OBR_30,
    ORG_O20_TQ1_31,
    ORG_O20_TQ2_32,
    ORG_O20_OBR_33,
    ORG_O20_SPM_34,
    ORG_O20_SAC_35,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORG_O20"; }
  ORG_O20* create() const { return new ORG_O20(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORG_O20");
    addObject<MSH>(ORG_O20_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORG_O20_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ORG_O20_ERR_3, "ERR.3", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORG_O20_SFT_4, "SFT.4", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORG_O20_UAC_5, "UAC.5", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORG_O20_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_11, "NTE.11", HL7::optional, HL7::repetition_off);
    addObject<PRT>(ORG_O20_PRT_12, "PRT.12", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ORG_O20_ARV_13, "ARV.13", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORG_O20_PID_14, "PID.14", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_15, "NTE.15", HL7::optional, HL7::repetition_off);
    addObject<PRT>(ORG_O20_PRT_16, "PRT.16", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ORG_O20_ARV_17, "ARV.17", HL7::optional, HL7::repetition_off);
    addObject<ORC>(ORG_O20_ORC_18, "ORC.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORG_O20_PRT_19, "PRT.19", HL7::optional, HL7::repetition_off);
    addObject<PRT>(ORG_O20_PRT_22, "PRT.22", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORG_O20_NTE_23, "NTE.23", HL7::optional, HL7::repetition_off);
    addObject<CTI>(ORG_O20_CTI_24, "CTI.24", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(ORG_O20_TQ1_26, "TQ1.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_TQ2_27, "TQ2.27", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(ORG_O20_TQ1_28, "TQ1.28", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_TQ2_29, "TQ2.29", HL7::optional, HL7::repetition_off);
    addObject<OBR>(ORG_O20_OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<TQ1>(ORG_O20_TQ1_31, "TQ1.31", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORG_O20_TQ2_32, "TQ2.32", HL7::optional, HL7::repetition_off);
    addObject<OBR>(ORG_O20_OBR_33, "OBR.33", HL7::initialized, HL7::repetition_off);
    addObject<SPM>(ORG_O20_SPM_34, "SPM.34", HL7::initialized, HL7::repetition_off);
    addObject<SAC>(ORG_O20_SAC_35, "SAC.35", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORG_O20_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORG_O20_MSA_2);
  }
  ERR* getERR_3(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORG_O20_ERR_3);
  }
  SFT* getSFT_4(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORG_O20_SFT_4);
  }
  UAC* getUAC_5(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORG_O20_UAC_5);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_6);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_PID_10);
  }
  NTE* getNTE_11(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_11);
  }
  PRT* getPRT_12(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_12);
  }
  ARV* getARV_13(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ARV_13);
  }
  PID* getPID_14(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORG_O20_PID_14);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_15);
  }
  PRT* getPRT_16(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_16);
  }
  ARV* getARV_17(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORG_O20_ARV_17);
  }
  ORC* getORC_18(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORG_O20_ORC_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_19);
  }
  PRT* getPRT_22(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORG_O20_PRT_22);
  }
  NTE* getNTE_23(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORG_O20_NTE_23);
  }
  CTI* getCTI_24(size_t index = 0) {
    return (CTI*)this->getObjectSafe(index, ORG_O20_CTI_24);
  }
  TQ1* getTQ1_26(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_TQ1_26);
  }
  TQ2* getTQ2_27(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_TQ2_27);
  }
  TQ1* getTQ1_28(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_TQ1_28);
  }
  TQ2* getTQ2_29(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_TQ2_29);
  }
  OBR* getOBR_30(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_OBR_30);
  }
  TQ1* getTQ1_31(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORG_O20_TQ1_31);
  }
  TQ2* getTQ2_32(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORG_O20_TQ2_32);
  }
  OBR* getOBR_33(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORG_O20_OBR_33);
  }
  SPM* getSPM_34(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORG_O20_SPM_34);
  }
  SAC* getSAC_35(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORG_O20_SAC_35);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_SFT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_5(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_UAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_11(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_12(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_13(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ARV_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_14(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PID_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_16(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_17(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ARV_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_18(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_ORC_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_22(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_PRT_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_23(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_NTE_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTI_24(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_CTI_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_26(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_27(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_28(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_29(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_31(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_32(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_TQ2_32) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_33(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_OBR_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_34(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_SPM_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_35(size_t index = 0) {
    try {
      return this->getObject(index, ORG_O20_SAC_35) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORG_O20_ */
} /* namespace HL7_281 */
#endif /*  __ORG_O20__281_H__ */
