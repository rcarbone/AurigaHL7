/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:22 CEST 2020
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


#ifndef __SDR_S31__281_H__
#define __SDR_S31__281_H__

#include "../../common/Util.h"
#include "../segment/MSH.h"
#include "../segment/SCD.h"
#include "../segment/SDD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* SDR_S31 */
struct SDR_S31 : public HL7Message {
  SDR_S31() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    SDR_S31_MSH_1,
    SDR_S31_SFT_2,
    SDR_S31_UAC_3,
    SDR_S31_SDD_4,
    SDR_S31_SCD_5,
    FIELD_ID_MAX
  };

  const char* className() const { return "SDR_S31"; }
  SDR_S31* create() const { return new SDR_S31(); }

 private:
  /* Initialize object */
  void init() {
    setName("SDR_S31");
    addObject<MSH>(SDR_S31_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(SDR_S31_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(SDR_S31_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<SDD>(SDR_S31_SDD_4, "SDD.4", HL7::initialized, HL7::repetition_off);
    addObject<SCD>(SDR_S31_SCD_5, "SCD.5", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, SDR_S31_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, SDR_S31_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, SDR_S31_UAC_3);
  }
  SDD* getSDD_4(size_t index = 0) {
    return (SDD*)this->getObjectSafe(index, SDR_S31_SDD_4);
  }
  SCD* getSCD_5(size_t index = 0) {
    return (SCD*)this->getObjectSafe(index, SDR_S31_SCD_5);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, SDR_S31_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, SDR_S31_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, SDR_S31_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSDD_4(size_t index = 0) {
    try {
      return this->getObject(index, SDR_S31_SDD_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSCD_5(size_t index = 0) {
    try {
      return this->getObject(index, SDR_S31_SCD_5) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* SDR_S31_ */
} /* namespace HL7_281 */
#endif /*  __SDR_S31__281_H__ */