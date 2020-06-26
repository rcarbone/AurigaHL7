/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:05:05 CEST 2020
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


#ifndef __ORL_O36__281_H__
#define __ORL_O36__281_H__

#include "../../common/Util.h"
#include "../segment/ARV.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
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
struct ORL_O36_RESPONSE; /* RESPONSE */
struct ORL_O36_SPECIMEN; /* SPECIMEN */
struct ORL_O36_SPECIMEN_OBSERVATION; /* SPECIMEN_OBSERVATION */
struct ORL_O36_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */
struct ORL_O36_ORDER; /* ORDER */
struct ORL_O36_TIMING; /* TIMING */
struct ORL_O36_OBSERVATION_REQUEST; /* OBSERVATION_REQUEST */

/* RESPONSE */
struct ORL_O36_RESPONSE : public HL7Group {
  ORL_O36_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_ARV_1,
    ORL_O36_ORL_O36_SPECIMEN_2,
    ORL_O36_PID_3,
    ORL_O36_PRT_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_RESPONSE"; }
  ORL_O36_RESPONSE* create() const { return new ORL_O36_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.RESPONSE");
    addObject<ARV>(ORL_O36_ARV_1, "ARV.1", HL7::optional, HL7::repetition_on);
    addObject<ORL_O36_SPECIMEN>(ORL_O36_ORL_O36_SPECIMEN_2, "ORL_O36_SPECIMEN.2", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O36_PID_3, "PID.3", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORL_O36_PRT_4, "PRT.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ARV* getARV_1(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O36_ARV_1);
  }
  ORL_O36_SPECIMEN* getORL_O36_SPECIMEN_2(size_t index = 0) {
    return (ORL_O36_SPECIMEN*)this->getObjectSafe(index, ORL_O36_ORL_O36_SPECIMEN_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O36_PID_3);
  }
  PRT* getPRT_4(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_4);
  }

  /* Checker list */
  bool isARV_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ARV_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORL_O36_SPECIMEN_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_SPECIMEN_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_RESPONSE */

/* SPECIMEN */
struct ORL_O36_SPECIMEN : public HL7Group {
  ORL_O36_SPECIMEN() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_NTE_1,
    ORL_O36_ORL_O36_SPECIMEN_CONTAINER_2,
    ORL_O36_ORL_O36_SPECIMEN_OBSERVATION_3,
    ORL_O36_SPM_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_SPECIMEN"; }
  ORL_O36_SPECIMEN* create() const { return new ORL_O36_SPECIMEN(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.SPECIMEN");
    addObject<NTE>(ORL_O36_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<ORL_O36_SPECIMEN_CONTAINER>(ORL_O36_ORL_O36_SPECIMEN_CONTAINER_2, "ORL_O36_SPECIMEN_CONTAINER.2", HL7::optional, HL7::repetition_on);
    addObject<ORL_O36_SPECIMEN_OBSERVATION>(ORL_O36_ORL_O36_SPECIMEN_OBSERVATION_3, "ORL_O36_SPECIMEN_OBSERVATION.3", HL7::optional, HL7::repetition_on);
    addObject<SPM>(ORL_O36_SPM_4, "SPM.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O36_NTE_1);
  }
  ORL_O36_SPECIMEN_CONTAINER* getORL_O36_SPECIMEN_CONTAINER_2(size_t index = 0) {
    return (ORL_O36_SPECIMEN_CONTAINER*)this->getObjectSafe(index, ORL_O36_ORL_O36_SPECIMEN_CONTAINER_2);
  }
  ORL_O36_SPECIMEN_OBSERVATION* getORL_O36_SPECIMEN_OBSERVATION_3(size_t index = 0) {
    return (ORL_O36_SPECIMEN_OBSERVATION*)this->getObjectSafe(index, ORL_O36_ORL_O36_SPECIMEN_OBSERVATION_3);
  }
  SPM* getSPM_4(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O36_SPM_4);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORL_O36_SPECIMEN_CONTAINER_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_SPECIMEN_CONTAINER_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORL_O36_SPECIMEN_OBSERVATION_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_SPECIMEN_OBSERVATION_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_SPM_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_SPECIMEN */

/* SPECIMEN_OBSERVATION */
struct ORL_O36_SPECIMEN_OBSERVATION : public HL7Group {
  ORL_O36_SPECIMEN_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_OBX_1,
    ORL_O36_PRT_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_SPECIMEN_OBSERVATION"; }
  ORL_O36_SPECIMEN_OBSERVATION* create() const { return new ORL_O36_SPECIMEN_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.SPECIMEN_OBSERVATION");
    addObject<OBX>(ORL_O36_OBX_1, "OBX.1", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORL_O36_PRT_2, "PRT.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBX* getOBX_1(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O36_OBX_1);
  }
  PRT* getPRT_2(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_2);
  }

  /* Checker list */
  bool isOBX_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_OBX_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_SPECIMEN_OBSERVATION */

/* SPECIMEN_CONTAINER */
struct ORL_O36_SPECIMEN_CONTAINER : public HL7Group {
  ORL_O36_SPECIMEN_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_ORL_O36_ORDER_1,
    ORL_O36_SAC_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_SPECIMEN_CONTAINER"; }
  ORL_O36_SPECIMEN_CONTAINER* create() const { return new ORL_O36_SPECIMEN_CONTAINER(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.SPECIMEN_CONTAINER");
    addObject<ORL_O36_ORDER>(ORL_O36_ORL_O36_ORDER_1, "ORL_O36_ORDER.1", HL7::optional, HL7::repetition_on);
    addObject<SAC>(ORL_O36_SAC_2, "SAC.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ORL_O36_ORDER* getORL_O36_ORDER_1(size_t index = 0) {
    return (ORL_O36_ORDER*)this->getObjectSafe(index, ORL_O36_ORL_O36_ORDER_1);
  }
  SAC* getSAC_2(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O36_SAC_2);
  }

  /* Checker list */
  bool isORL_O36_ORDER_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_ORDER_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_SAC_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_SPECIMEN_CONTAINER */

/* ORDER */
struct ORL_O36_ORDER : public HL7Group {
  ORL_O36_ORDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_ORC_1,
    ORL_O36_ORL_O36_OBSERVATION_REQUEST_2,
    ORL_O36_ORL_O36_TIMING_3,
    ORL_O36_PRT_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_ORDER"; }
  ORL_O36_ORDER* create() const { return new ORL_O36_ORDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.ORDER");
    addObject<ORC>(ORL_O36_ORC_1, "ORC.1", HL7::optional, HL7::repetition_on);
    addObject<ORL_O36_OBSERVATION_REQUEST>(ORL_O36_ORL_O36_OBSERVATION_REQUEST_2, "ORL_O36_OBSERVATION_REQUEST.2", HL7::optional, HL7::repetition_on);
    addObject<ORL_O36_TIMING>(ORL_O36_ORL_O36_TIMING_3, "ORL_O36_TIMING.3", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORL_O36_PRT_4, "PRT.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ORC* getORC_1(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O36_ORC_1);
  }
  ORL_O36_OBSERVATION_REQUEST* getORL_O36_OBSERVATION_REQUEST_2(size_t index = 0) {
    return (ORL_O36_OBSERVATION_REQUEST*)this->getObjectSafe(index, ORL_O36_ORL_O36_OBSERVATION_REQUEST_2);
  }
  ORL_O36_TIMING* getORL_O36_TIMING_3(size_t index = 0) {
    return (ORL_O36_TIMING*)this->getObjectSafe(index, ORL_O36_ORL_O36_TIMING_3);
  }
  PRT* getPRT_4(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_4);
  }

  /* Checker list */
  bool isORC_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORC_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORL_O36_OBSERVATION_REQUEST_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_OBSERVATION_REQUEST_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORL_O36_TIMING_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORL_O36_TIMING_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_ORDER */

/* TIMING */
struct ORL_O36_TIMING : public HL7Group {
  ORL_O36_TIMING() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_TQ1_1,
    ORL_O36_TQ2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_TIMING"; }
  ORL_O36_TIMING* create() const { return new ORL_O36_TIMING(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.TIMING");
    addObject<TQ1>(ORL_O36_TQ1_1, "TQ1.1", HL7::optional, HL7::repetition_on);
    addObject<TQ2>(ORL_O36_TQ2_2, "TQ2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  TQ1* getTQ1_1(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O36_TQ1_1);
  }
  TQ2* getTQ2_2(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O36_TQ2_2);
  }

  /* Checker list */
  bool isTQ1_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_TIMING */

/* OBSERVATION_REQUEST */
struct ORL_O36_OBSERVATION_REQUEST : public HL7Group {
  ORL_O36_OBSERVATION_REQUEST() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_OBR_1,
    ORL_O36_PRT_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36_OBSERVATION_REQUEST"; }
  ORL_O36_OBSERVATION_REQUEST* create() const { return new ORL_O36_OBSERVATION_REQUEST(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36.OBSERVATION_REQUEST");
    addObject<OBR>(ORL_O36_OBR_1, "OBR.1", HL7::optional, HL7::repetition_on);
    addObject<PRT>(ORL_O36_PRT_2, "PRT.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  OBR* getOBR_1(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O36_OBR_1);
  }
  PRT* getPRT_2(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_2);
  }

  /* Checker list */
  bool isOBR_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_OBR_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_OBSERVATION_REQUEST */

/* ORL_O36 */
struct ORL_O36 : public HL7Message {
  ORL_O36() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    ORL_O36_MSH_1,
    ORL_O36_MSA_2,
    ORL_O36_ERR_3,
    ORL_O36_SFT_4,
    ORL_O36_UAC_5,
    ORL_O36_NTE_6,
    ORL_O36_PID_8,
    ORL_O36_PRT_9,
    ORL_O36_ARV_10,
    ORL_O36_SPM_12,
    ORL_O36_NTE_14,
    ORL_O36_OBX_16,
    ORL_O36_PRT_17,
    ORL_O36_OBX_18,
    ORL_O36_PRT_19,
    ORL_O36_SAC_20,
    ORL_O36_ORC_22,
    ORL_O36_PRT_23,
    ORL_O36_TQ1_26,
    ORL_O36_TQ2_27,
    ORL_O36_TQ1_28,
    ORL_O36_TQ2_29,
    ORL_O36_OBR_30,
    ORL_O36_PRT_31,
    FIELD_ID_MAX
  };

  const char* className() const { return "ORL_O36"; }
  ORL_O36* create() const { return new ORL_O36(); }

 private:
  /* Initialize object */
  void init() {
    setName("ORL_O36");
    addObject<MSH>(ORL_O36_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<MSA>(ORL_O36_MSA_2, "MSA.2", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(ORL_O36_ERR_3, "ERR.3", HL7::optional, HL7::repetition_on);
    addObject<SFT>(ORL_O36_SFT_4, "SFT.4", HL7::optional, HL7::repetition_on);
    addObject<UAC>(ORL_O36_UAC_5, "UAC.5", HL7::optional, HL7::repetition_off);
    addObject<NTE>(ORL_O36_NTE_6, "NTE.6", HL7::optional, HL7::repetition_on);
    addObject<PID>(ORL_O36_PID_8, "PID.8", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O36_PRT_9, "PRT.9", HL7::optional, HL7::repetition_off);
    addObject<ARV>(ORL_O36_ARV_10, "ARV.10", HL7::optional, HL7::repetition_off);
    addObject<SPM>(ORL_O36_SPM_12, "SPM.12", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(ORL_O36_NTE_14, "NTE.14", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORL_O36_OBX_16, "OBX.16", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O36_PRT_17, "PRT.17", HL7::optional, HL7::repetition_off);
    addObject<OBX>(ORL_O36_OBX_18, "OBX.18", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O36_PRT_19, "PRT.19", HL7::optional, HL7::repetition_off);
    addObject<SAC>(ORL_O36_SAC_20, "SAC.20", HL7::initialized, HL7::repetition_off);
    addObject<ORC>(ORL_O36_ORC_22, "ORC.22", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O36_PRT_23, "PRT.23", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(ORL_O36_TQ1_26, "TQ1.26", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O36_TQ2_27, "TQ2.27", HL7::optional, HL7::repetition_off);
    addObject<TQ1>(ORL_O36_TQ1_28, "TQ1.28", HL7::initialized, HL7::repetition_off);
    addObject<TQ2>(ORL_O36_TQ2_29, "TQ2.29", HL7::optional, HL7::repetition_off);
    addObject<OBR>(ORL_O36_OBR_30, "OBR.30", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(ORL_O36_PRT_31, "PRT.31", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, ORL_O36_MSH_1);
  }
  MSA* getMSA_2(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, ORL_O36_MSA_2);
  }
  ERR* getERR_3(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, ORL_O36_ERR_3);
  }
  SFT* getSFT_4(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, ORL_O36_SFT_4);
  }
  UAC* getUAC_5(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, ORL_O36_UAC_5);
  }
  NTE* getNTE_6(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O36_NTE_6);
  }
  PID* getPID_8(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, ORL_O36_PID_8);
  }
  PRT* getPRT_9(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_9);
  }
  ARV* getARV_10(size_t index = 0) {
    return (ARV*)this->getObjectSafe(index, ORL_O36_ARV_10);
  }
  SPM* getSPM_12(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, ORL_O36_SPM_12);
  }
  NTE* getNTE_14(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, ORL_O36_NTE_14);
  }
  OBX* getOBX_16(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O36_OBX_16);
  }
  PRT* getPRT_17(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_17);
  }
  OBX* getOBX_18(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, ORL_O36_OBX_18);
  }
  PRT* getPRT_19(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_19);
  }
  SAC* getSAC_20(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, ORL_O36_SAC_20);
  }
  ORC* getORC_22(size_t index = 0) {
    return (ORC*)this->getObjectSafe(index, ORL_O36_ORC_22);
  }
  PRT* getPRT_23(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_23);
  }
  TQ1* getTQ1_26(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O36_TQ1_26);
  }
  TQ2* getTQ2_27(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O36_TQ2_27);
  }
  TQ1* getTQ1_28(size_t index = 0) {
    return (TQ1*)this->getObjectSafe(index, ORL_O36_TQ1_28);
  }
  TQ2* getTQ2_29(size_t index = 0) {
    return (TQ2*)this->getObjectSafe(index, ORL_O36_TQ2_29);
  }
  OBR* getOBR_30(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, ORL_O36_OBR_30);
  }
  PRT* getPRT_31(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, ORL_O36_PRT_31);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_2(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_MSA_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_3(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ERR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_4(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_SFT_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_5(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_UAC_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_6(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_NTE_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_8(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PID_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_9(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isARV_10(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ARV_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_12(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_SPM_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_14(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_NTE_14) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_16(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_OBX_16) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_17(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_18(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_OBX_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_19(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_20(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_SAC_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isORC_22(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_ORC_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_23(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_26(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ1_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_27(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ2_27) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ1_28(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ1_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isTQ2_29(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_TQ2_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_30(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_OBR_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_31(size_t index = 0) {
    try {
      return this->getObject(index, ORL_O36_PRT_31) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* ORL_O36_ */
} /* namespace HL7_281 */
#endif /*  __ORL_O36__281_H__ */