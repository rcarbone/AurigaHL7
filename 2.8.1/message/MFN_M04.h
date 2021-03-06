/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:33 CEST 2020
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


#ifndef __MFN_M04__281_H__
#define __MFN_M04__281_H__

#include "../../common/Util.h"
#include "../segment/CDM.h"
#include "../segment/MFE.h"
#include "../segment/MFI.h"
#include "../segment/MSH.h"
#include "../segment/NTE.h"
#include "../segment/PRC.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct MFN_M04_MF_CDM; /* MF_CDM */

/* MF_CDM */
struct MFN_M04_MF_CDM : public HL7Group {
  MFN_M04_MF_CDM() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M04_CDM_1,
    MFN_M04_MFE_2,
    MFN_M04_NTE_3,
    MFN_M04_PRC_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M04_MF_CDM"; }
  MFN_M04_MF_CDM* create() const { return new MFN_M04_MF_CDM(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M04.MF_CDM");
    addObject<CDM>(MFN_M04_CDM_1, "CDM.1", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M04_MFE_2, "MFE.2", HL7::optional, HL7::repetition_on);
    addObject<NTE>(MFN_M04_NTE_3, "NTE.3", HL7::optional, HL7::repetition_on);
    addObject<PRC>(MFN_M04_PRC_4, "PRC.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  CDM* getCDM_1(size_t index = 0) {
    return (CDM*)this->getObjectSafe(index, MFN_M04_CDM_1);
  }
  MFE* getMFE_2(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M04_MFE_2);
  }
  NTE* getNTE_3(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_NTE_3);
  }
  PRC* getPRC_4(size_t index = 0) {
    return (PRC*)this->getObjectSafe(index, MFN_M04_PRC_4);
  }

  /* Checker list */
  bool isCDM_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_CDM_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFE_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_NTE_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRC_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_PRC_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M04_MF_CDM */

/* MFN_M04 */
struct MFN_M04 : public HL7Message {
  MFN_M04() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    MFN_M04_MSH_1,
    MFN_M04_SFT_2,
    MFN_M04_UAC_3,
    MFN_M04_MFI_4,
    MFN_M04_NTE_5,
    MFN_M04_MFE_7,
    MFN_M04_NTE_8,
    MFN_M04_CDM_9,
    MFN_M04_NTE_10,
    MFN_M04_PRC_11,
    FIELD_ID_MAX
  };

  const char* className() const { return "MFN_M04"; }
  MFN_M04* create() const { return new MFN_M04(); }

 private:
  /* Initialize object */
  void init() {
    setName("MFN_M04");
    addObject<MSH>(MFN_M04_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(MFN_M04_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(MFN_M04_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MFI>(MFN_M04_MFI_4, "MFI.4", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M04_NTE_5, "NTE.5", HL7::optional, HL7::repetition_on);
    addObject<MFE>(MFN_M04_MFE_7, "MFE.7", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M04_NTE_8, "NTE.8", HL7::optional, HL7::repetition_off);
    addObject<CDM>(MFN_M04_CDM_9, "CDM.9", HL7::initialized, HL7::repetition_off);
    addObject<NTE>(MFN_M04_NTE_10, "NTE.10", HL7::optional, HL7::repetition_off);
    addObject<PRC>(MFN_M04_PRC_11, "PRC.11", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, MFN_M04_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, MFN_M04_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, MFN_M04_UAC_3);
  }
  MFI* getMFI_4(size_t index = 0) {
    return (MFI*)this->getObjectSafe(index, MFN_M04_MFI_4);
  }
  NTE* getNTE_5(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_NTE_5);
  }
  MFE* getMFE_7(size_t index = 0) {
    return (MFE*)this->getObjectSafe(index, MFN_M04_MFE_7);
  }
  NTE* getNTE_8(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_NTE_8);
  }
  CDM* getCDM_9(size_t index = 0) {
    return (CDM*)this->getObjectSafe(index, MFN_M04_CDM_9);
  }
  NTE* getNTE_10(size_t index = 0) {
    return (NTE*)this->getObjectSafe(index, MFN_M04_NTE_10);
  }
  PRC* getPRC_11(size_t index = 0) {
    return (PRC*)this->getObjectSafe(index, MFN_M04_PRC_11);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFI_4(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_5(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_NTE_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMFE_7(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_MFE_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_8(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_NTE_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isCDM_9(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_CDM_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNTE_10(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_NTE_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPRC_11(size_t index = 0) {
    try {
      return this->getObject(index, MFN_M04_PRC_11) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* MFN_M04_ */
} /* namespace HL7_281 */
#endif /*  __MFN_M04__281_H__ */
