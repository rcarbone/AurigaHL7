/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:05:15 CEST 2020
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


#ifndef __ORN_O08__281_H__
#define __ORN_O08__281_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/ORC.h"
#include "../segment/PID.h"
#include "../segment/PRT.h"
#include "../segment/RQ1.h"
#include "../segment/RQD.h"
#include "../segment/SFT.h"
#include "../segment/TQ1.h"
#include "../segment/TQ2.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct ORN_O08_RESPONSE; /* RESPONSE */
struct ORN_O08_PATIENT; /* PATIENT */
struct ORN_O08_ORDER; /* ORDER */
struct ORN_O08_TIMING; /* TIMING */

/* RESPONSE */
struct ORN_O08_RESPONSE : public HL7Group {
  ORN_O08_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_ORN_O08_ORDER_1,
    ORN_O08_ORN_O08_PATIENT_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_RESPONSE"; }
  ORN_O08_RESPONSE* create() const { return new ORN_O08_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08.RESPONSE");
    addObject<ORN_O08_ORDER>(ORN_O08_ORN_O08_ORDER_1, "ORN_O08_ORDER.1", HL7::optional, HL7::repetition_on);
    addObject<ORN_O08_PATIENT>(ORN_O08_ORN_O08_PATIENT_2, "ORN_O08_PATIENT.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ORN_O08_ORDER* getORN_O08_ORDER_1(size_t index = 0) {
    return (ORN_O08_ORDER*)this->getObjectSafe(index, ORN_O08_ORN_O08_ORDER_1);
  }
  ORN_O08_PATIENT* getORN_O08_PATIENT_2(size_t index = 0) {
    return (ORN_O08_PATIENT*)this->getObjectSafe(index, ORN_O08_ORN_O08_PATIENT_2);
  }

  /* Checker list */
  bool isORN_O08_ORDER_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_ORDER_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORN_O08_PATIENT_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_PATIENT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_RESPONSE */

/* PATIENT */
struct ORN_O08_PATIENT : public HL7Group {
  ORN_O08_PATIENT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_ARV_1,
    ORN_O08_NTE_2,
    ORN_O08_PID_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_PATIENT"; }
  ORN_O08_PATIENT* create() const { return new ORN_O08_PATIENT(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08.PATIENT");
    addObject<ARV>(ORN_O08_ARV_1, "ARV.1", HL7::optional, HL7::repetition_on);
    addObject<NTE>(ORN_O08_NTE_2, "NTE.2", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORN_O08_PID_3, "PID.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ARV* getARV_1(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ARV_1);
  }
  NTE* getNTE_2(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_PID_3);
  }

  /* Checker list */
  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_PATIENT */

/* ORDER */
struct ORN_O08_ORDER : public HL7Group {
  ORN_O08_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_NTE_1,
    ORN_O08_ORC_2,
    ORN_O08_ORN_O08_TIMING_3,
    ORN_O08_PRT_4,
    ORN_O08_RQ1_5,
    ORN_O08_RQD_6,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_ORDER"; }
  ORN_O08_ORDER* create() const { return new ORN_O08_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08.ORDER");
    addObject<NTE>(ORN_O08_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<ORC>(ORN_O08_ORC_2, "ORC.2", HL7::optional, HL7::repetition_on);
    addObject<ORN_O08_TIMING>(ORN_O08_ORN_O08_TIMING_3, "ORN_O08_TIMING.3", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORN_O08_PRT_4, "PRT.4", HL7::optional, HL7::repetition_on);
    addObject<RQ1>(ORN_O08_RQ1_5, "RQ1.5", HL7::optional, HL7::repetition_on);
    addObject<RQD>(ORN_O08_RQD_6, "RQD.6", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_1);
  }
  ORC* getORC_2(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORN_O08_ORC_2);
  }
  ORN_O08_TIMING* getORN_O08_TIMING_3(size_t index = 0) {
    return (ORN_O08_TIMING*)this->getObjectSafe(index, ORN_O08_ORN_O08_TIMING_3);
  }
  PRT* getPRT_4(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORN_O08_PRT_4);
  }
  RQ1* getRQ1_5(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORN_O08_RQ1_5);
  }
  RQD* getRQD_6(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORN_O08_RQD_6);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORC_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORN_O08_TIMING_3(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORN_O08_TIMING_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_5(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQ1_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_6(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_ORDER */

/* TIMING */
struct ORN_O08_TIMING : public HL7Group {
  ORN_O08_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_TQ1_1,
    ORN_O08_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08_TIMING"; }
  ORN_O08_TIMING* create() const { return new ORN_O08_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08.TIMING");
    addObject<TQ1>(ORN_O08_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(ORN_O08_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORN_O08_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORN_O08_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_TIMING */

/* ORN_O08 */
struct ORN_O08 : public HL7Message {
  ORN_O08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORN_O08_MSH_1,
    ORN_O08_MSA_2,
    ORN_O08_ERR_3,
    ORN_O08_SFT_4,
    ORN_O08_UAC_5,
    ORN_O08_NTE_6,
    ORN_O08_PID_10,
    ORN_O08_ARV_11,
    ORN_O08_NTE_12,
    ORN_O08_PID_13,
    ORN_O08_ARV_14,
    ORN_O08_NTE_15,
    ORN_O08_ORC_16,
    ORN_O08_PRT_17,
    ORN_O08_RQD_19,
    ORN_O08_RQ1_20,
    ORN_O08_NTE_21,
    ORN_O08_TQ1_22,
    ORN_O08_TQ2_23,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORN_O08"; }
  ORN_O08* create() const { return new ORN_O08(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORN_O08");
    addObject<MSH>(ORN_O08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORN_O08_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ORN_O08_ERR_3, "ERR.3", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORN_O08_SFT_4, "SFT.4", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORN_O08_UAC_5, "UAC.5", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORN_O08_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORN_O08_ARV_11, "ARV.11", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_12, "NTE.12", HL7::optional, HL7::repetition_off);
    addObject<PID>(ORN_O08_PID_13, "PID.13", HL7::initialized, HL7::repetition_off);
    addObject<ARV>(ORN_O08_ARV_14, "ARV.14", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_15, "NTE.15", HL7::optional, HL7::repetition_off);
    addObject<ORC>(ORN_O08_ORC_16, "ORC.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORN_O08_PRT_17, "PRT.17", HL7::optional, HL7::repetition_off);
    addObject<RQD>(ORN_O08_RQD_19, "RQD.19", HL7::initialized, HL7::repetition_off);
    addObject<RQ1>(ORN_O08_RQ1_20, "RQ1.20", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORN_O08_NTE_21, "NTE.21", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(ORN_O08_TQ1_22, "TQ1.22", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORN_O08_TQ2_23, "TQ2.23", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORN_O08_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORN_O08_MSA_2);
  }
  ERR* getERR_3(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORN_O08_ERR_3);
  }
  SFT* getSFT_4(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORN_O08_SFT_4);
  }
  UAC* getUAC_5(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORN_O08_UAC_5);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_6);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_PID_10);
  }
  ARV* getARV_11(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ARV_11);
  }
  NTE* getNTE_12(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_12);
  }
  PID* getPID_13(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORN_O08_PID_13);
  }
  ARV* getARV_14(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORN_O08_ARV_14);
  }
  NTE* getNTE_15(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_15);
  }
  ORC* getORC_16(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORN_O08_ORC_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORN_O08_PRT_17);
  }
  RQD* getRQD_19(size_t index = 0) {
    return (RQD*)this->getObjectSafe(index, ORN_O08_RQD_19);
  }
  RQ1* getRQ1_20(size_t index = 0) {
    return (RQ1*)this->getObjectSafe(index, ORN_O08_RQ1_20);
  }
  NTE* getNTE_21(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORN_O08_NTE_21);
  }
  TQ1* getTQ1_22(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORN_O08_TQ1_22);
  }
  TQ2* getTQ2_23(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORN_O08_TQ2_23);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_SFT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_5(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_UAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_11(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ARV_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_12(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_13(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PID_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_14(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ARV_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_15(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_15) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_16(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_ORC_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQD_19(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQD_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQ1_20(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_RQ1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_21(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_NTE_21) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_22(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_TQ1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_23(size_t index = 0) {
    try {
      return this->getObject(index, ORN_O08_TQ2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORN_O08_ */
} /* namespace HL7_281 */
#endif /*  __ORN_O08__281_H__ */