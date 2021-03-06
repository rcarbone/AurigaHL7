/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:20 CEST 2020
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


#ifndef __RSP_Znn__281_H__
#define __RSP_Znn__281_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/Hxx.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* RSP_Znn */
struct RSP_Znn : public HL7Message {
  RSP_Znn() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_Znn_MSH_1,
    RSP_Znn_SFT_2,
    RSP_Znn_UAC_3,
    RSP_Znn_MSA_4,
    RSP_Znn_ERR_5,
    RSP_Znn_QAK_6,
    RSP_Znn_QPD_7,
    RSP_Znn_Hxx_8,
    RSP_Znn_DSC_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_Znn"; }
  RSP_Znn* create() const { return new RSP_Znn(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_Znn");
    addObject<MSH>(RSP_Znn_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_Znn_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_Znn_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_Znn_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_Znn_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_Znn_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_Znn_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<Hxx>(RSP_Znn_Hxx_8, "Hxx.8", HL7::optional, HL7::repetition_off);
    addObject<DSC>(RSP_Znn_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_Znn_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_Znn_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_Znn_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_Znn_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_Znn_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_Znn_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_Znn_QPD_7);
  }
  Hxx* getHxx_8(size_t index = 0) {
    return (Hxx*)this->getObjectSafe(index, RSP_Znn_Hxx_8);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_Znn_DSC_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isHxx_8(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_Hxx_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_Znn_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_Znn_ */
} /* namespace HL7_281 */
#endif /*  __RSP_Znn__281_H__ */
