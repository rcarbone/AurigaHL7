/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:06:53 CEST 2020
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


#ifndef __RSP_K22__281_H__
#define __RSP_K22__281_H__

#include "../../common/Util.h"
#include "../segment/DSC.h"
#include "../segment/ERR.h"
#include "../segment/MSA.h"
#include "../segment/MSH.h"
#include "../segment/NK1.h"
#include "../segment/PD1.h"
#include "../segment/PID.h"
#include "../segment/QAK.h"
#include "../segment/QPD.h"
#include "../segment/QRI.h"
#include "../segment/SFT.h"
#include "../segment/UAC.h"

namespace HL7_281 {

/* Internal structures/groups */
struct RSP_K22_QUERY_RESPONSE; /* QUERY_RESPONSE */

/* QUERY_RESPONSE */
struct RSP_K22_QUERY_RESPONSE : public HL7Group {
  RSP_K22_QUERY_RESPONSE() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K22_NK1_1,
    RSP_K22_PD1_2,
    RSP_K22_PID_3,
    RSP_K22_QRI_4,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K22_QUERY_RESPONSE"; }
  RSP_K22_QUERY_RESPONSE* create() const { return new RSP_K22_QUERY_RESPONSE(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K22.QUERY_RESPONSE");
    addObject<NK1>(RSP_K22_NK1_1, "NK1.1", HL7::optional, HL7::repetition_on);
    addObject<PD1>(RSP_K22_PD1_2, "PD1.2", HL7::optional, HL7::repetition_on);
    addObject<PID>(RSP_K22_PID_3, "PID.3", HL7::optional, HL7::repetition_on);
    addObject<QRI>(RSP_K22_QRI_4, "QRI.4", HL7::optional, HL7::repetition_on);
  }

 public:
  /* Getters list */
  NK1* getNK1_1(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_K22_NK1_1);
  }
  PD1* getPD1_2(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K22_PD1_2);
  }
  PID* getPID_3(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K22_PID_3);
  }
  QRI* getQRI_4(size_t index = 0) {
    return (QRI*)this->getObjectSafe(index, RSP_K22_QRI_4);
  }

  /* Checker list */
  bool isNK1_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_NK1_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_PD1_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_PID_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRI_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_QRI_4) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K22_QUERY_RESPONSE */

/* RSP_K22 */
struct RSP_K22 : public HL7Message {
  RSP_K22() { this->init(); }
  /* Fields ID  */
  enum FIELD_ID {
    RSP_K22_MSH_1,
    RSP_K22_SFT_2,
    RSP_K22_UAC_3,
    RSP_K22_MSA_4,
    RSP_K22_ERR_5,
    RSP_K22_QAK_6,
    RSP_K22_QPD_7,
    RSP_K22_DSC_9,
    RSP_K22_PID_10,
    RSP_K22_PD1_11,
    RSP_K22_NK1_12,
    RSP_K22_QRI_13,
    FIELD_ID_MAX
  };

  const char* className() const { return "RSP_K22"; }
  RSP_K22* create() const { return new RSP_K22(); }

 private:
  /* Initialize object */
  void init() {
    setName("RSP_K22");
    addObject<MSH>(RSP_K22_MSH_1, "MSH.1", HL7::initialized, HL7::repetition_off);
    addObject<SFT>(RSP_K22_SFT_2, "SFT.2", HL7::optional, HL7::repetition_on);
    addObject<UAC>(RSP_K22_UAC_3, "UAC.3", HL7::optional, HL7::repetition_off);
    addObject<MSA>(RSP_K22_MSA_4, "MSA.4", HL7::initialized, HL7::repetition_off);
    addObject<ERR>(RSP_K22_ERR_5, "ERR.5", HL7::optional, HL7::repetition_off);
    addObject<QAK>(RSP_K22_QAK_6, "QAK.6", HL7::initialized, HL7::repetition_off);
    addObject<QPD>(RSP_K22_QPD_7, "QPD.7", HL7::initialized, HL7::repetition_off);
    addObject<DSC>(RSP_K22_DSC_9, "DSC.9", HL7::optional, HL7::repetition_off);
    addObject<PID>(RSP_K22_PID_10, "PID.10", HL7::initialized, HL7::repetition_off);
    addObject<PD1>(RSP_K22_PD1_11, "PD1.11", HL7::optional, HL7::repetition_off);
    addObject<NK1>(RSP_K22_NK1_12, "NK1.12", HL7::optional, HL7::repetition_off);
    addObject<QRI>(RSP_K22_QRI_13, "QRI.13", HL7::optional, HL7::repetition_off);
  }

 public:
  /* Getters list */
  MSH* getMSH_1(size_t index = 0) {
    return (MSH*)this->getObjectSafe(index, RSP_K22_MSH_1);
  }
  SFT* getSFT_2(size_t index = 0) {
    return (SFT*)this->getObjectSafe(index, RSP_K22_SFT_2);
  }
  UAC* getUAC_3(size_t index = 0) {
    return (UAC*)this->getObjectSafe(index, RSP_K22_UAC_3);
  }
  MSA* getMSA_4(size_t index = 0) {
    return (MSA*)this->getObjectSafe(index, RSP_K22_MSA_4);
  }
  ERR* getERR_5(size_t index = 0) {
    return (ERR*)this->getObjectSafe(index, RSP_K22_ERR_5);
  }
  QAK* getQAK_6(size_t index = 0) {
    return (QAK*)this->getObjectSafe(index, RSP_K22_QAK_6);
  }
  QPD* getQPD_7(size_t index = 0) {
    return (QPD*)this->getObjectSafe(index, RSP_K22_QPD_7);
  }
  DSC* getDSC_9(size_t index = 0) {
    return (DSC*)this->getObjectSafe(index, RSP_K22_DSC_9);
  }
  PID* getPID_10(size_t index = 0) {
    return (PID*)this->getObjectSafe(index, RSP_K22_PID_10);
  }
  PD1* getPD1_11(size_t index = 0) {
    return (PD1*)this->getObjectSafe(index, RSP_K22_PD1_11);
  }
  NK1* getNK1_12(size_t index = 0) {
    return (NK1*)this->getObjectSafe(index, RSP_K22_NK1_12);
  }
  QRI* getQRI_13(size_t index = 0) {
    return (QRI*)this->getObjectSafe(index, RSP_K22_QRI_13);
  }

  /* Checker list */
  bool isMSH_1(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_MSH_1) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isSFT_2(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_SFT_2) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isUAC_3(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_UAC_3) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isMSA_4(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_MSA_4) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isERR_5(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_ERR_5) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQAK_6(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_QAK_6) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQPD_7(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_QPD_7) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isDSC_9(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_DSC_9) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPID_10(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_PID_10) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isPD1_11(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_PD1_11) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isNK1_12(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_NK1_12) != NULL;
    } catch (...) {
    }
    return false;
  }
  bool isQRI_13(size_t index = 0) {
    try {
      return this->getObject(index, RSP_K22_QRI_13) != NULL;
    } catch (...) {
    }
    return false;
  }
}; /* RSP_K22_ */
} /* namespace HL7_281 */
#endif /*  __RSP_K22__281_H__ */
