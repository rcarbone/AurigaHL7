/*
 * hacca - C Toolkit and Applications for the HL7 2.x Protocols
 *           http://github.com/rcarbone/hacca
 *           http://hub.docker.com/repository/docker/roccocarbone/hacca
 *
 * Warning: This file was automatically generated, please do not edit.
 *
 * R. Carbone (rocco@tecsiel.it)
 * Jul 2020
 *
 * SPDX-License-Identifier: BSD-2-Clause-FreeBSD
 */


#ifndef __ILT_v29_H__
#define __ILT_v29_H__

#include "../../common/Util.h"
#include "../datatype/CWE.h"
#include "../datatype/DTM.h"
#include "../datatype/MO.h"
#include "../datatype/NM.h"
#include "../datatype/SI.h"
#include "../datatype/ST.h"

namespace HL7_29 {

/* ILT */
class ILT : public HL7Segment {
 public:
  ILT() { this->init(); }

 private:
  /* */
  enum FIELD_ID {
    ILT_1,
    ILT_2,
    ILT_3,
    ILT_4,
    ILT_5,
    ILT_6,
    ILT_7,
    ILT_8,
    ILT_9,
    ILT_10,
    FIELD_ID_MAX
  };

 public:
  const char* className() const { return "ILT"; }
  ILT* create() const { return new ILT(); }

 private:
  void init() {
    setName("ILT");
    /* Init members */
    addObject<SI>(ILT_1, "ILT.1", HL7::initialized, HL7::repetition_off);
    addObject<ST>(ILT_2, "ILT.2", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ILT_3, "ILT.3", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ILT_4, "ILT.4", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ILT_5, "ILT.5", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ILT_6, "ILT.6", HL7::initialized, HL7::repetition_off);
    addObject<MO>(ILT_7, "ILT.7", HL7::initialized, HL7::repetition_off);
    addObject<DTM>(ILT_8, "ILT.8", HL7::initialized, HL7::repetition_off);
    addObject<NM>(ILT_9, "ILT.9", HL7::initialized, HL7::repetition_off);
    addObject<CWE>(ILT_10, "ILT.10", HL7::initialized, HL7::repetition_off);
  }

 public:
  /* Getters */
  /****************************************
   * Set Id - ILT
   */

  SI* getILT_1(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ILT_1);
  }

  SI* getSetIdILT(size_t index = 0) {
    return (SI*)this->getObjectSafe(index, ILT_1);
  }

  bool isILT_1(size_t index = 0) {
    try {
      return this->getObject(index, ILT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isSetIdILT(size_t index = 0) {
    try {
      return this->getObject(index, ILT_1) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Lot Number
   */

  ST* getILT_2(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ILT_2);
  }

  ST* getInventoryLotNumber(size_t index = 0) {
    return (ST*)this->getObjectSafe(index, ILT_2);
  }

  bool isILT_2(size_t index = 0) {
    try {
      return this->getObject(index, ILT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryLotNumber(size_t index = 0) {
    try {
      return this->getObject(index, ILT_2) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Expiration Date
   */

  DTM* getILT_3(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_3);
  }

  DTM* getInventoryExpirationDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_3);
  }

  bool isILT_3(size_t index = 0) {
    try {
      return this->getObject(index, ILT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryExpirationDate(size_t index = 0) {
    try {
      return this->getObject(index, ILT_3) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Date
   */

  DTM* getILT_4(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_4);
  }

  DTM* getInventoryReceivedDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_4);
  }

  bool isILT_4(size_t index = 0) {
    try {
      return this->getObject(index, ILT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedDate(size_t index = 0) {
    try {
      return this->getObject(index, ILT_4) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Quantity
   */

  NM* getILT_5(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ILT_5);
  }

  NM* getInventoryReceivedQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ILT_5);
  }

  bool isILT_5(size_t index = 0) {
    try {
      return this->getObject(index, ILT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedQuantity(size_t index = 0) {
    try {
      return this->getObject(index, ILT_5) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Quantity Unit
   */

  CWE* getILT_6(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ILT_6);
  }

  CWE* getInventoryReceivedQuantityUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ILT_6);
  }

  bool isILT_6(size_t index = 0) {
    try {
      return this->getObject(index, ILT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedQuantityUnit(size_t index = 0) {
    try {
      return this->getObject(index, ILT_6) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory Received Item Cost
   */

  MO* getILT_7(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, ILT_7);
  }

  MO* getInventoryReceivedItemCost(size_t index = 0) {
    return (MO*)this->getObjectSafe(index, ILT_7);
  }

  bool isILT_7(size_t index = 0) {
    try {
      return this->getObject(index, ILT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryReceivedItemCost(size_t index = 0) {
    try {
      return this->getObject(index, ILT_7) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Date
   */

  DTM* getILT_8(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_8);
  }

  DTM* getInventoryOnHandDate(size_t index = 0) {
    return (DTM*)this->getObjectSafe(index, ILT_8);
  }

  bool isILT_8(size_t index = 0) {
    try {
      return this->getObject(index, ILT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandDate(size_t index = 0) {
    try {
      return this->getObject(index, ILT_8) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Quantity
   */

  NM* getILT_9(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ILT_9);
  }

  NM* getInventoryOnHandQuantity(size_t index = 0) {
    return (NM*)this->getObjectSafe(index, ILT_9);
  }

  bool isILT_9(size_t index = 0) {
    try {
      return this->getObject(index, ILT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandQuantity(size_t index = 0) {
    try {
      return this->getObject(index, ILT_9) != NULL;
    } catch (...) {
    }
    return false;
  }

  /****************************************
   * Inventory On Hand Quantity Unit
   */

  CWE* getILT_10(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ILT_10);
  }

  CWE* getInventoryOnHandQuantityUnit(size_t index = 0) {
    return (CWE*)this->getObjectSafe(index, ILT_10);
  }

  bool isILT_10(size_t index = 0) {
    try {
      return this->getObject(index, ILT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

  bool isInventoryOnHandQuantityUnit(size_t index = 0) {
    try {
      return this->getObject(index, ILT_10) != NULL;
    } catch (...) {
    }
    return false;
  }

}; /* End of ILT */

} /* End of namespace HL7_29 */
#endif /* __ILT_v29_H__ */
