/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:07:21 CEST 2020
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


#ifndef __RTB_Knn__281_H__
#define __RTB_Knn__281_H__

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

/* RTB_Knn */
struct RTB_Knn : public HL7Message {
  RTB_Knn() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RTB_Knn_MSH_1,
    RTB_Knn_SFT_2,
    RTB_Knn_UAC_3,
    RTB_Knn_MSA_4,
    RTB_Knn_ERR_5,
    RTB_Knn_QAK_6,
    RTB_Knn_QPD_7,
    RTB_Knn_Hxx_8,
    RTB_Knn_DSC_9,
    FIELD_ID_MAX
  };

  const char* className() const { return "RTB_Knn"; }
  RTB_Knn* create() const { return new RTB_Knn(); }

 private:
  /* Initialize object */
  void init() {
    setName("RTB_Knn");
    addObject<MSH>(RTB_Knn_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RTB_Knn_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RTB_Knn_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RTB_Knn_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RTB_Knn_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RTB_Knn_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RTB_Knn_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<Hxx>(RTB_Knn_Hxx_8, "Hxx.8", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RTB_Knn_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RTB_Knn_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RTB_Knn_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RTB_Knn_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RTB_Knn_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RTB_Knn_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RTB_Knn_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RTB_Knn_QPD_7);
  }
  Hxx* getHxx_8(size_t index = 0) {
    return (Hxx*)this->getObjectSafe(index, RTB_Knn_Hxx_8);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RTB_Knn_DSC_9);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isHxx_8(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_Hxx_8) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RTB_Knn_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RTB_Knn_ */
} /* namespace HL7_281 */
#endif /*  __RTB_Knn__281_H__ */
