/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:03:28 CEST 2020
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


#ifndef __EHC_E24__281_H__
#define __EHC_E24__281_H__

#include "../../common/Util.h"
#include "../segment/ADJ.h"
#include "../segment/AUT.h"
#include "../segment/ERR.h"
#include "../segment/IVC.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/PSL.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct EHC_E24_PSL_ITEM_INFO; /* PSL_ITEM_INFO */

/* PSL_ITEM_INFO */
struct EHC_E24_PSL_ITEM_INFO : public HL7Group {
  EHC_E24_PSL_ITEM_INFO() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E24_ADJ_1,
    EHC_E24_AUT_2,
    EHC_E24_PSL_3,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E24_PSL_ITEM_INFO"; }
  EHC_E24_PSL_ITEM_INFO* create() const { return new EHC_E24_PSL_ITEM_INFO(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E24.PSL_ITEM_INFO");
    addObject<ADJ>(EHC_E24_ADJ_1, "ADJ.1", HL7::optional, HL7::repetition_on);
    addObject<AUT>(EHC_E24_AUT_2, "AUT.2", HL7::optional, HL7::repetition_on);
    addObject<PSL>(EHC_E24_PSL_3, "PSL.3", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  ADJ* getADJ_1(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E24_ADJ_1);
  }
  AUT* getAUT_2(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E24_AUT_2);
  }
  PSL* getPSL_3(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E24_PSL_3);
  }

  /* Checker list */
  bool isADJ_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_ADJ_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_AUT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_PSL_3) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E24_PSL_ITEM_INFO */

/* EHC_E24 */
struct EHC_E24 : public HL7Message {
  EHC_E24() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    EHC_E24_MSH_1,
    EHC_E24_SFT_2,
    EHC_E24_UAC_3,
    EHC_E24_MSA_4,
    EHC_E24_ERR_5,
    EHC_E24_IVC_6,
    EHC_E24_PSL_8,
    EHC_E24_AUT_9,
    EHC_E24_ADJ_10,
    FIELD_ID_MAX
  };

  const char* className() const { return "EHC_E24"; }
  EHC_E24* create() const { return new EHC_E24(); }

 private:
  /* Initialize object */
  void init() {
    setName("EHC_E24");
    addObject<MSH>(EHC_E24_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(EHC_E24_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(EHC_E24_UAC_3, "UAC.3", HL7::optional, HL7::repetition_on);
    addObject<MSA>(EHC_E24_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(EHC_E24_ERR_5, "ERR.5", HL7::optional, HL7::repetition_on);
    addObject<IVC>(EHC_E24_IVC_6, "IVC.6", HL7::initialized, HL7::repetition_off);
    addObject<PSL>(EHC_E24_PSL_8, "PSL.8", HL7::initialized, HL7::repetition_off);
    addObject<AUT>(EHC_E24_AUT_9, "AUT.9", HL7::optional, HL7::repetition_off);
    addObject<ADJ>(EHC_E24_ADJ_10, "ADJ.10", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, EHC_E24_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, EHC_E24_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, EHC_E24_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, EHC_E24_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, EHC_E24_ERR_5);
  }
  IVC* getIVC_6(size_t index = 0) {
    return (IVC*)this->getObjectSafe(index, EHC_E24_IVC_6);
  }
  PSL* getPSL_8(size_t index = 0) {
    return (PSL*)this->getObjectSafe(index, EHC_E24_PSL_8);
  }
  AUT* getAUT_9(size_t index = 0) {
    return (AUT*)this->getObjectSafe(index, EHC_E24_AUT_9);
  }
  ADJ* getADJ_10(size_t index = 0) {
    return (ADJ*)this->getObjectSafe(index, EHC_E24_ADJ_10);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isIVC_6(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_IVC_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPSL_8(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_PSL_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isAUT_9(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_AUT_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isADJ_10(size_t index = 0) {
    try {
      return this->getObject(index, EHC_E24_ADJ_10) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* EHC_E24_ */
} /* namespace HL7_281 */
#endif /*  __EHC_E24__281_H__ */