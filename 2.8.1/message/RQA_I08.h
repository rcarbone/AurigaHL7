/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:06:38 CEST 2020
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


#ifndef __RQA_I08__281_H__
#define __RQA_I08__281_H__

#include "../../common/Util.h"
#include "../segment/ACC.h"
#include "../segment/AL1.h"
#include "../segment/AUT.h"
#include "../segment/CTD.h"
#include "../segment/DG1.h"
#include "../segment/DRG.h"
#include "../segment/GT1.h"
#include "../segment/IN1.h"
#include "../segment/IN2.h"
#include "../segment/IN3.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/NTE.h"
#include "../segment/OBR.h"
#include "../segment/OBX.h"
#include "../segment/PID.h"
#include "../segment/PR1.h"
#include "../segment/PRD.h"
#include "../segment/PRT.h"
#include "../segment/PV1.h"
#include "../segment/PV2.h"
#include "../segment/RF1.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct RQA_I08_AUTHORIZATION; /* AUTHORIZATION */
struct RQA_I08_PROVIDER; /* PROVIDER */
struct RQA_I08_GUARANTOR_INSURANCE; /* GUARANTOR_INSURANCE */
struct RQA_I08_PROCEDURE; /* PROCEDURE */
struct RQA_I08_OBSERVATION; /* OBSERVATION */
struct RQA_I08_VISIT; /* VISIT */
struct RQA_I08_INSURANCE; /* INSURANCE */
struct RQA_I08_RESULTS; /* RESULTS */
struct RQA_I08_AUTHORIZATION; /* AUTHORIZATION */

/* AUTHORIZATION */
struct RQA_I08_AUTHORIZATION : public HL7Group {
  RQA_I08_AUTHORIZATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_AUT_1,
    RQA_I08_CTD_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_AUTHORIZATION"; }
  RQA_I08_AUTHORIZATION* create() const { return new RQA_I08_AUTHORIZATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.AUTHORIZATION");
    addObject<AUT>(RQA_I08_AUT_1, "AUT.1", HL7::optional, HL7::repetition_on);
    addObject<CTD>(RQA_I08_CTD_2, "CTD.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  AUT* getAUT_1(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RQA_I08_AUT_1);
  }
  CTD* getCTD_2(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_2);
  }

  /* Checker list */
  bool isAUT_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUT_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_AUTHORIZATION */

/* PROVIDER */
struct RQA_I08_PROVIDER : public HL7Group {
  RQA_I08_PROVIDER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_CTD_1,
    RQA_I08_PRD_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_PROVIDER"; }
  RQA_I08_PROVIDER* create() const { return new RQA_I08_PROVIDER(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.PROVIDER");
    addObject<CTD>(RQA_I08_CTD_1, "CTD.1", HL7::optional, HL7::repetition_on);
    addObject<PRD>(RQA_I08_PRD_2, "PRD.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CTD* getCTD_1(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_1);
  }
  PRD* getPRD_2(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQA_I08_PRD_2);
  }

  /* Checker list */
  bool isCTD_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PRD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_PROVIDER */

/* GUARANTOR_INSURANCE */
struct RQA_I08_GUARANTOR_INSURANCE : public HL7Group {
  RQA_I08_GUARANTOR_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_GT1_1,
    RQA_I08_RQA_I08_INSURANCE_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_GUARANTOR_INSURANCE"; }
  RQA_I08_GUARANTOR_INSURANCE* create() const { return new RQA_I08_GUARANTOR_INSURANCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.GUARANTOR_INSURANCE");
    addObject<GT1>(RQA_I08_GT1_1, "GT1.1", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_INSURANCE>(RQA_I08_RQA_I08_INSURANCE_2, "RQA_I08_INSURANCE.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  GT1* getGT1_1(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQA_I08_GT1_1);
  }
  RQA_I08_INSURANCE* getRQA_I08_INSURANCE_2(size_t index = 0) {
    return (RQA_I08_INSURANCE*)this->getObjectSafe(index, RQA_I08_RQA_I08_INSURANCE_2);
  }

  /* Checker list */
  bool isGT1_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_GT1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQA_I08_INSURANCE_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RQA_I08_INSURANCE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_GUARANTOR_INSURANCE */

/* PROCEDURE */
struct RQA_I08_PROCEDURE : public HL7Group {
  RQA_I08_PROCEDURE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_PR1_1,
    RQA_I08_RQA_I08_AUTHORIZATION_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_PROCEDURE"; }
  RQA_I08_PROCEDURE* create() const { return new RQA_I08_PROCEDURE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.PROCEDURE");
    addObject<PR1>(RQA_I08_PR1_1, "PR1.1", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_AUTHORIZATION>(RQA_I08_RQA_I08_AUTHORIZATION_2, "RQA_I08_AUTHORIZATION.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PR1* getPR1_1(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RQA_I08_PR1_1);
  }
  RQA_I08_AUTHORIZATION* getRQA_I08_AUTHORIZATION_2(size_t index = 0) {
    return (RQA_I08_AUTHORIZATION*)this->getObjectSafe(index, RQA_I08_RQA_I08_AUTHORIZATION_2);
  }

  /* Checker list */
  bool isPR1_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PR1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQA_I08_AUTHORIZATION_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RQA_I08_AUTHORIZATION_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_PROCEDURE */

/* OBSERVATION */
struct RQA_I08_OBSERVATION : public HL7Group {
  RQA_I08_OBSERVATION() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_NTE_1,
    RQA_I08_OBR_2,
    RQA_I08_RQA_I08_RESULTS_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_OBSERVATION"; }
  RQA_I08_OBSERVATION* create() const { return new RQA_I08_OBSERVATION(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.OBSERVATION");
    addObject<NTE>(RQA_I08_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBR>(RQA_I08_OBR_2, "OBR.2", HL7::optional, HL7::repetition_on);
    addObject<RQA_I08_RESULTS>(RQA_I08_RQA_I08_RESULTS_3, "RQA_I08_RESULTS.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_1);
  }
  OBR* getOBR_2(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RQA_I08_OBR_2);
  }
  RQA_I08_RESULTS* getRQA_I08_RESULTS_3(size_t index = 0) {
    return (RQA_I08_RESULTS*)this->getObjectSafe(index, RQA_I08_RQA_I08_RESULTS_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBR_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRQA_I08_RESULTS_3(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RQA_I08_RESULTS_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_OBSERVATION */

/* VISIT */
struct RQA_I08_VISIT : public HL7Group {
  RQA_I08_VISIT() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_PV1_1,
    RQA_I08_PV2_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_VISIT"; }
  RQA_I08_VISIT* create() const { return new RQA_I08_VISIT(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.VISIT");
    addObject<PV1>(RQA_I08_PV1_1, "PV1.1", HL7::optional, HL7::repetition_on);
    addObject<PV2>(RQA_I08_PV2_2, "PV2.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  PV1* getPV1_1(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RQA_I08_PV1_1);
  }
  PV2* getPV2_2(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RQA_I08_PV2_2);
  }

  /* Checker list */
  bool isPV1_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_VISIT */

/* INSURANCE */
struct RQA_I08_INSURANCE : public HL7Group {
  RQA_I08_INSURANCE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_IN1_1,
    RQA_I08_IN2_2,
    RQA_I08_IN3_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_INSURANCE"; }
  RQA_I08_INSURANCE* create() const { return new RQA_I08_INSURANCE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.INSURANCE");
    addObject<IN1>(RQA_I08_IN1_1, "IN1.1", HL7::optional, HL7::repetition_on);
    addObject<IN2>(RQA_I08_IN2_2, "IN2.2", HL7::optional, HL7::repetition_on);
    addObject<IN3>(RQA_I08_IN3_3, "IN3.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  IN1* getIN1_1(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RQA_I08_IN1_1);
  }
  IN2* getIN2_2(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RQA_I08_IN2_2);
  }
  IN3* getIN3_3(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RQA_I08_IN3_3);
  }

  /* Checker list */
  bool isIN1_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN2_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_3(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN3_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_INSURANCE */

/* RESULTS */
struct RQA_I08_RESULTS : public HL7Group {
  RQA_I08_RESULTS() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_NTE_1,
    RQA_I08_OBX_2,
    RQA_I08_PRT_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08_RESULTS"; }
  RQA_I08_RESULTS* create() const { return new RQA_I08_RESULTS(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08.RESULTS");
    addObject<NTE>(RQA_I08_NTE_1, "NTE.1", HL7::optional, HL7::repetition_on);
    addObject<OBX>(RQA_I08_OBX_2, "OBX.2", HL7::optional, HL7::repetition_on);
    addObject<PRT>(RQA_I08_PRT_3, "PRT.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NTE* getNTE_1(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_1);
  }
  OBX* getOBX_2(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RQA_I08_OBX_2);
  }
  PRT* getPRT_3(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RQA_I08_PRT_3);
  }

  /* Checker list */
  bool isNTE_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBX_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_3(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PRT_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_RESULTS */

/* RQA_I08 */
struct RQA_I08 : public HL7Message {
  RQA_I08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RQA_I08_MSH_1,
    RQA_I08_SFT_2,
    RQA_I08_UAC_3,
    RQA_I08_RF1_4,
    RQA_I08_PID_7,
    RQA_I08_NK1_8,
    RQA_I08_ACC_10,
    RQA_I08_DG1_11,
    RQA_I08_DRG_12,
    RQA_I08_AL1_13,
    RQA_I08_NTE_17,
    RQA_I08_AUT_18,
    RQA_I08_CTD_19,
    RQA_I08_GT1_20,
    RQA_I08_IN1_22,
    RQA_I08_IN2_23,
    RQA_I08_IN3_24,
    RQA_I08_OBR_25,
    RQA_I08_NTE_26,
    RQA_I08_OBX_28,
    RQA_I08_PRT_29,
    RQA_I08_NTE_30,
    RQA_I08_PR1_31,
    RQA_I08_AUT_33,
    RQA_I08_CTD_34,
    RQA_I08_PRD_35,
    RQA_I08_CTD_36,
    RQA_I08_PV1_37,
    RQA_I08_PV2_38,
    FIELD_ID_MAX
  };

  const char* className() const { return "RQA_I08"; }
  RQA_I08* create() const { return new RQA_I08(); }

 private:
  /* Initialize object */
  void init() {
    setName("RQA_I08");
    addObject<MSH>(RQA_I08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RQA_I08_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RQA_I08_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<RF1>(RQA_I08_RF1_4, "RF1.4", HL7::optional, HL7::repetition_off);
    addObject<PID>(RQA_I08_PID_7, "PID.7", HL7::initialized, HL7::repetition_off);
    addObject<NK1>(RQA_I08_NK1_8, "NK1.8", HL7::optional, HL7::repetition_on);
    addObject<ACC>(RQA_I08_ACC_10, "ACC.10", HL7::optional, HL7::repetition_off);
    addObject<DG1>(RQA_I08_DG1_11, "DG1.11", HL7::optional, HL7::repetition_on);
    addObject<DRG>(RQA_I08_DRG_12, "DRG.12", HL7::optional, HL7::repetition_on);
    addObject<AL1>(RQA_I08_AL1_13, "AL1.13", HL7::optional, HL7::repetition_on);
    addObject<NTE>(RQA_I08_NTE_17, "NTE.17", HL7::optional, HL7::repetition_on);
    addObject<AUT>(RQA_I08_AUT_18, "AUT.18", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RQA_I08_CTD_19, "CTD.19", HL7::optional, HL7::repetition_off);
    addObject<GT1>(RQA_I08_GT1_20, "GT1.20", HL7::optional, HL7::repetition_off);
    addObject<IN1>(RQA_I08_IN1_22, "IN1.22", HL7::initialized, HL7::repetition_off);
    addObject<IN2>(RQA_I08_IN2_23, "IN2.23", HL7::optional, HL7::repetition_off);
    addObject<IN3>(RQA_I08_IN3_24, "IN3.24", HL7::optional, HL7::repetition_off);
    addObject<OBR>(RQA_I08_OBR_25, "OBR.25", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(RQA_I08_NTE_26, "NTE.26", HL7::optional, HL7::repetition_off);
    addObject<OBX>(RQA_I08_OBX_28, "OBX.28", HL7::initialized, HL7::repetition_off);
    addObject<PRT>(RQA_I08_PRT_29, "PRT.29", HL7::optional, HL7::repetition_off);
    addObject<NTE>(RQA_I08_NTE_30, "NTE.30", HL7::optional, HL7::repetition_off);
    addObject<PR1>(RQA_I08_PR1_31, "PR1.31", HL7::initialized, HL7::repetition_off);
    addObject<AUT>(RQA_I08_AUT_33, "AUT.33", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RQA_I08_CTD_34, "CTD.34", HL7::optional, HL7::repetition_off);
    addObject<PRD>(RQA_I08_PRD_35, "PRD.35", HL7::initialized, HL7::repetition_off);
    addObject<CTD>(RQA_I08_CTD_36, "CTD.36", HL7::optional, HL7::repetition_off);
    addObject<PV1>(RQA_I08_PV1_37, "PV1.37", HL7::initialized, HL7::repetition_off);
    addObject<PV2>(RQA_I08_PV2_38, "PV2.38", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RQA_I08_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RQA_I08_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RQA_I08_UAC_3);
  }
  RF1* getRF1_4(size_t index = 0) {
    return (RF1*)this->getObjectSafe(index, RQA_I08_RF1_4);
  }
  PID* getPID_7(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RQA_I08_PID_7);
  }
  NK1* getNK1_8(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RQA_I08_NK1_8);
  }
  ACC* getACC_10(size_t index = 0) {
    return (ACC*)this->getObjectSafe(index, RQA_I08_ACC_10);
  }
  DG1* getDG1_11(size_t index = 0) {
    return (DG1*)this->getObjectSafe(index, RQA_I08_DG1_11);
  }
  DRG* getDRG_12(size_t index = 0) {
    return (DRG*)this->getObjectSafe(index, RQA_I08_DRG_12);
  }
  AL1* getAL1_13(size_t index = 0) {
    return (AL1*)this->getObjectSafe(index, RQA_I08_AL1_13);
  }
  NTE* getNTE_17(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_17);
  }
  AUT* getAUT_18(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RQA_I08_AUT_18);
  }
  CTD* getCTD_19(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_19);
  }
  GT1* getGT1_20(size_t index = 0) {
    return (GT1*)this->getObjectSafe(index, RQA_I08_GT1_20);
  }
  IN1* getIN1_22(size_t index = 0) {
    return (IN1*)this->getObjectSafe(index, RQA_I08_IN1_22);
  }
  IN2* getIN2_23(size_t index = 0) {
    return (IN2*)this->getObjectSafe(index, RQA_I08_IN2_23);
  }
  IN3* getIN3_24(size_t index = 0) {
    return (IN3*)this->getObjectSafe(index, RQA_I08_IN3_24);
  }
  OBR* getOBR_25(size_t index = 0) {
    return (OBR*)this->getObjectSafe(index, RQA_I08_OBR_25);
  }
  NTE* getNTE_26(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_26);
  }
  OBX* getOBX_28(size_t index = 0) {
    return (OBX*)this->getObjectSafe(index, RQA_I08_OBX_28);
  }
  PRT* getPRT_29(size_t index = 0) {
    return (PRT*)this->getObjectSafe(index, RQA_I08_PRT_29);
  }
  NTE* getNTE_30(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, RQA_I08_NTE_30);
  }
  PR1* getPR1_31(size_t index = 0) {
    return (PR1*)this->getObjectSafe(index, RQA_I08_PR1_31);
  }
  AUT* getAUT_33(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, RQA_I08_AUT_33);
  }
  CTD* getCTD_34(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_34);
  }
  PRD* getPRD_35(size_t index = 0) {
    return (PRD*)this->getObjectSafe(index, RQA_I08_PRD_35);
  }
  CTD* getCTD_36(size_t index = 0) {
    return (CTD*)this->getObjectSafe(index, RQA_I08_CTD_36);
  }
  PV1* getPV1_37(size_t index = 0) {
    return (PV1*)this->getObjectSafe(index, RQA_I08_PV1_37);
  }
  PV2* getPV2_38(size_t index = 0) {
    return (PV2*)this->getObjectSafe(index, RQA_I08_PV2_38);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isRF1_4(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_RF1_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_7(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PID_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_8(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NK1_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isACC_10(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_ACC_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDG1_11(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_DG1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDRG_12(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_DRG_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAL1_13(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AL1_13) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_17(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_17) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_18(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUT_18) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_19(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_19) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isGT1_20(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_GT1_20) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN1_22(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN1_22) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN2_23(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN2_23) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIN3_24(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_IN3_24) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBR_25(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBR_25) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_26(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_26) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isOBX_28(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_OBX_28) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRT_29(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PRT_29) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_30(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_NTE_30) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPR1_31(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PR1_31) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_33(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_AUT_33) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_34(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_34) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRD_35(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PRD_35) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCTD_36(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_CTD_36) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV1_37(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV1_37) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPV2_38(size_t index = 0) {
    try {
      return this->getObject(index, RQA_I08_PV2_38) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RQA_I08_ */
} /* namespace HL7_281 */
#endif /*  __RQA_I08__281_H__ */
