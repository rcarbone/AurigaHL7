/*
 * hacca - C Toolkit for the HL7 Protocol
 *
 * Warning: This file was automatically generated by [hawk], please do not edit.
 *          Thu 25 Jun 19:00:00 CEST 2020
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


#ifndef __PDC_v281_H__
#define __PDC_v281_H__

#include "../../common/Util.h"
#include "../datatype/CQ.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/ID.h"
#include "../datatype/ST.h"
#include "../datatype/XON.h"

namespace HL7_281 {

/* Product Detail Country */
class PDC : public HL7Segment {
 public:
  PDC() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    PDC_1,
    PDC_2,
    PDC_3,
    PDC_4,
    PDC_5,
    PDC_6,
    PDC_7,
    PDC_8,
    PDC_9,
    PDC_10,
    PDC_11,
    PDC_12,
    PDC_13,
    PDC_14,
    PDC_15,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "PDC"; }
  PDC* create() const { return new PDC(); }

 private:
  void init() {
    setName("PDC");
    /* Init members */
    addObject<XON>(PDC_1, "PDC.1", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PDC_2, "PDC.2", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_3, "PDC.3", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_4, "PDC.4", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PDC_5, "PDC.5", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_6, "PDC.6", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_7, "PDC.7", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_8, "PDC.8", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(PDC_9, "PDC.9", HL7::initialized, HL7::repetition_off);
    addObject<ID>(PDC_10, "PDC.10", HL7::initialized, HL7::repetition_off);
    addObject<ST>(PDC_11, "PDC.11", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(PDC_12, "PDC.12", HL7::initialized, HL7::repetition_off);
    addObject<CQ>(PDC_13, "PDC.13", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PDC_14, "PDC.14", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(PDC_15, "PDC.15", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Manufacturer/Distributor
   */

  XON* getPDC_1(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PDC_1);
  }

  XON* getManufacturerDistributor(size_t index = 0) {
    return (XON*)this->getObjectSafe(index, PDC_1);
  }

  bool isPDC_1(size_t index = 0) {
    try {
      return this->getObject(index, PDC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isManufacturerDistributor(size_t index = 0) {
    try {
      return this->getObject(index, PDC_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Country
   */

  CWE* getPDC_2(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_2);
  }

  CWE* getCountry(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_2);
  }

  bool isPDC_2(size_t index = 0) {
    try {
      return this->getObject(index, PDC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCountry(size_t index = 0) {
    try {
      return this->getObject(index, PDC_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Brand Name
   */

  ST* getPDC_3(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_3);
  }

  ST* getBrandName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_3);
  }

  bool isPDC_3(size_t index = 0) {
    try {
      return this->getObject(index, PDC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isBrandName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Device Family Name
   */

  ST* getPDC_4(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_4);
  }

  ST* getDeviceFamilyName(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_4);
  }

  bool isPDC_4(size_t index = 0) {
    try {
      return this->getObject(index, PDC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDeviceFamilyName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Generic Name
   */

  CWE* getPDC_5(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_5);
  }

  CWE* getGenericName(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_5);
  }

  bool isPDC_5(size_t index = 0) {
    try {
      return this->getObject(index, PDC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isGenericName(size_t index = 0) {
    try {
      return this->getObject(index, PDC_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Model Identifier
   */

  ST* getPDC_6(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_6);
  }

  ST* getModelIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_6);
  }

  bool isPDC_6(size_t index = 0) {
    try {
      return this->getObject(index, PDC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isModelIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Catalogue Identifier
   */

  ST* getPDC_7(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_7);
  }

  ST* getCatalogueIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_7);
  }

  bool isPDC_7(size_t index = 0) {
    try {
      return this->getObject(index, PDC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isCatalogueIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Other Identifier
   */

  ST* getPDC_8(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_8);
  }

  ST* getOtherIdentifier(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_8);
  }

  bool isPDC_8(size_t index = 0) {
    try {
      return this->getObject(index, PDC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isOtherIdentifier(size_t index = 0) {
    try {
      return this->getObject(index, PDC_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Product Code
   */

  CWE* getPDC_9(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_9);
  }

  CWE* getProductCode(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, PDC_9);
  }

  bool isPDC_9(size_t index = 0) {
    try {
      return this->getObject(index, PDC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isProductCode(size_t index = 0) {
    try {
      return this->getObject(index, PDC_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marketing Basis
   */

  ID* getPDC_10(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDC_10);
  }

  ID* getMarketingBasis(size_t index = 0) {
    return (ID*)this->getObjectSafe(index, PDC_10);
  }

  bool isPDC_10(size_t index = 0) {
    try {
      return this->getObject(index, PDC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMarketingBasis(size_t index = 0) {
    try {
      return this->getObject(index, PDC_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Marketing Approval ID
   */

  ST* getPDC_11(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_11);
  }

  ST* getMarketingApprovalID(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, PDC_11);
  }

  bool isPDC_11(size_t index = 0) {
    try {
      return this->getObject(index, PDC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isMarketingApprovalID(size_t index = 0) {
    try {
      return this->getObject(index, PDC_11) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Labeled Shelf Life
   */

  CQ* getPDC_12(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_12);
  }

  CQ* getLabeledShelfLife(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_12);
  }

  bool isPDC_12(size_t index = 0) {
    try {
      return this->getObject(index, PDC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isLabeledShelfLife(size_t index = 0) {
    try {
      return this->getObject(index, PDC_12) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Expected Shelf Life
   */

  CQ* getPDC_13(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_13);
  }

  CQ* getExpectedShelfLife(size_t index = 0) {
    return (CQ*)this->getObjectSafe(index, PDC_13);
  }

  bool isPDC_13(size_t index = 0) {
    try {
      return this->getObject(index, PDC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isExpectedShelfLife(size_t index = 0) {
    try {
      return this->getObject(index, PDC_13) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date First Marketed
   */

  DTM* getPDC_14(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDC_14);
  }

  DTM* getDateFirstMarketed(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDC_14);
  }

  bool isPDC_14(size_t index = 0) {
    try {
      return this->getObject(index, PDC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateFirstMarketed(size_t index = 0) {
    try {
      return this->getObject(index, PDC_14) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Date Last Marketed
   */

  DTM* getPDC_15(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDC_15);
  }

  DTM* getDateLastMarketed(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, PDC_15);
  }

  bool isPDC_15(size_t index = 0) {
    try {
      return this->getObject(index, PDC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isDateLastMarketed(size_t index = 0) {
    try {
      return this->getObject(index, PDC_15) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of PDC */

} /* End of namespace HL7_281 */
#endif /* __PDC_v281_H__ */
