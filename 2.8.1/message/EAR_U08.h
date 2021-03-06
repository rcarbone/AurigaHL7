/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:02:56 CEST 2020
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


#ifndef __EAR_U08__281_H__
#define __EAR_U08__281_H__

#include "../../common/Util.h"
#include "../segment/ECD.h"
#include "../segment/ECR.h"
#include "../segment/EQU.h"
#include "../segment/MSH.h"
#include "../segment/SAC.h"
#include "../segment/SFT.h"
#include "../segment/SPM.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EAR_U08_COMMAND_RESPONSE; /* COMMAND_RESPONSE */
struct EAR_U08_SPECIMEN_CONTAINER; /* SPECIMEN_CONTAINER */

/* COMMAND_RESPONSE */
struct EAR_U08_COMMAND_RESPONSE : public HL7Group {
  EAR_U08_COMMAND_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAR_U08_EAR_U08_SPECIMEN_CONTAINER_1,
    EAR_U08_ECD_2,
    EAR_U08_ECR_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAR_U08_COMMAND_RESPONSE"; }
  EAR_U08_COMMAND_RESPONSE* create() const { return new EAR_U08_COMMAND_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAR_U08.COMMAND_RESPONSE");
    addObject<EAR_U08_SPECIMEN_CONTAINER>(EAR_U08_EAR_U08_SPECIMEN_CONTAINER_1, "EAR_U08_SPECIMEN_CONTAINER.1", HL7::optional, HL7::repetition_on);
    addObject<ECD>(EAR_U08_ECD_2, "ECD.2", HL7::optional, HL7::repetition_on);
    addObject<ECR>(EAR_U08_ECR_3, "ECR.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  EAR_U08_SPECIMEN_CONTAINER* getEAR_U08_SPECIMEN_CONTAINER_1(size_t index = 0) {
    return (EAR_U08_SPECIMEN_CONTAINER*)this->getObjectSafe(index, EAR_U08_EAR_U08_SPECIMEN_CONTAINER_1);
  }
  ECD* getECD_2(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAR_U08_ECD_2);
  }
  ECR* getECR_3(size_t index = 0) {
    return (ECR*)this->getObjectSafe(index, EAR_U08_ECR_3);
  }

  /* Checker list */
  bool isEAR_U08_SPECIMEN_CONTAINER_1(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EAR_U08_SPECIMEN_CONTAINER_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_2(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECD_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECR_3(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECR_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_COMMAND_RESPONSE */

/* SPECIMEN_CONTAINER */
struct EAR_U08_SPECIMEN_CONTAINER : public HL7Group {
  EAR_U08_SPECIMEN_CONTAINER() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAR_U08_SAC_1,
    EAR_U08_SPM_2,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAR_U08_SPECIMEN_CONTAINER"; }
  EAR_U08_SPECIMEN_CONTAINER* create() const { return new EAR_U08_SPECIMEN_CONTAINER(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAR_U08.SPECIMEN_CONTAINER");
    addObject<SAC>(EAR_U08_SAC_1, "SAC.1", HL7::optional, HL7::repetition_on);
    addObject<SPM>(EAR_U08_SPM_2, "SPM.2", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  SAC* getSAC_1(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAR_U08_SAC_1);
  }
  SPM* getSPM_2(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, EAR_U08_SPM_2);
  }

  /* Checker list */
  bool isSAC_1(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SAC_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_2(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SPM_2) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_SPECIMEN_CONTAINER */

/* EAR_U08 */
struct EAR_U08 : public HL7Message {
  EAR_U08() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EAR_U08_MSH_1,
    EAR_U08_SFT_2,
    EAR_U08_UAC_3,
    EAR_U08_EQU_4,
    EAR_U08_ECD_6,
    EAR_U08_ECR_8,
    EAR_U08_SAC_9,
    EAR_U08_SPM_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "EAR_U08"; }
  EAR_U08* create() const { return new EAR_U08(); }

 private:
  /* Initialize object */
  void init() {
    setName("EAR_U08");
    addObject<MSH>(EAR_U08_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EAR_U08_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EAR_U08_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<EQU>(EAR_U08_EQU_4, "EQU.4", HL7::initialized, HL7::repetition_off);
    addObject<ECD>(EAR_U08_ECD_6, "ECD.6", HL7::initialized, HL7::repetition_off);
    addObject<ECR>(EAR_U08_ECR_8, "ECR.8", HL7::initialized, HL7::repetition_off);
    addObject<SAC>(EAR_U08_SAC_9, "SAC.9", HL7::initialized, HL7::repetition_off);
    addObject<SPM>(EAR_U08_SPM_10, "SPM.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EAR_U08_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EAR_U08_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EAR_U08_UAC_3);
  }
  EQU* getEQU_4(size_t index = 0) {
    return (EQU*)this->getObjectSafe(index, EAR_U08_EQU_4);
  }
  ECD* getECD_6(size_t index = 0) {
    return (ECD*)this->getObjectSafe(index, EAR_U08_ECD_6);
  }
  ECR* getECR_8(size_t index = 0) {
    return (ECR*)this->getObjectSafe(index, EAR_U08_ECR_8);
  }
  SAC* getSAC_9(size_t index = 0) {
    return (SAC*)this->getObjectSafe(index, EAR_U08_SAC_9);
  }
  SPM* getSPM_10(size_t index = 0) {
    return (SPM*)this->getObjectSafe(index, EAR_U08_SPM_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isEQU_4(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_EQU_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECD_6(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECD_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isECR_8(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_ECR_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSAC_9(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SAC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSPM_10(size_t index = 0) {
    try {
      return this->getObject(index, EAR_U08_SPM_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EAR_U08_ */
} /* namespace HL7_281 */
#endif /*  __EAR_U08__281_H__ */
