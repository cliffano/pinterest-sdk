/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.3.0
 * Contact: pinterest-api@pinterest.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.4.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * CatalogsProductGroupFilterKeys.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupFilterKeys_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupFilterKeys_H_


#include "ModelBase.h"

#include "model/ConditionFilter.h"
#include "model/CatalogsProductGroupMultipleStringCriteria.h"
#include "model/GoogleProductCategory4Filter.h"
#include "model/GoogleProductCategory1Filter.h"
#include "model/BrandFilter.h"
#include "model/CustomLabel3Filter.h"
#include "model/CatalogsProductGroupMultipleStringListCriteria.h"
#include "model/CustomLabel0Filter.h"
#include "model/ProductType4Filter.h"
#include "model/CatalogsProductGroupCurrencyCriteria.h"
#include "model/GoogleProductCategory6Filter.h"
#include "model/ProductType1Filter.h"
#include "model/CurrencyFilter.h"
#include "model/CustomLabel1Filter.h"
#include "model/GoogleProductCategory0Filter.h"
#include "model/GoogleProductCategory3Filter.h"
#include "model/CatalogsProductGroupPricingCriteria.h"
#include "model/ItemIdFilter.h"
#include "model/ProductType2Filter.h"
#include "model/GenderFilter.h"
#include "model/GoogleProductCategory5Filter.h"
#include "model/ItemGroupIdFilter.h"
#include "model/GoogleProductCategory2Filter.h"
#include "model/CustomLabel4Filter.h"
#include "model/MinPriceFilter.h"
#include "model/AvailabilityFilter.h"
#include "model/CustomLabel2Filter.h"
#include "model/ProductType3Filter.h"
#include "model/ProductType0Filter.h"
#include "model/MaxPriceFilter.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  CatalogsProductGroupFilterKeys
    : public ModelBase
{
public:
    CatalogsProductGroupFilterKeys();
    virtual ~CatalogsProductGroupFilterKeys();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CatalogsProductGroupFilterKeys members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupPricingCriteria> getMINPRICE() const;
    bool mINPRICEIsSet() const;
    void unsetMIN_PRICE();

    void setMINPRICE(const std::shared_ptr<CatalogsProductGroupPricingCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupPricingCriteria> getMAXPRICE() const;
    bool mAXPRICEIsSet() const;
    void unsetMAX_PRICE();

    void setMAXPRICE(const std::shared_ptr<CatalogsProductGroupPricingCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupCurrencyCriteria> getCURRENCY() const;
    bool cURRENCYIsSet() const;
    void unsetCURRENCY();

    void setCURRENCY(const std::shared_ptr<CatalogsProductGroupCurrencyCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupCurrencyCriteria> getITEMID() const;
    bool iTEMIDIsSet() const;
    void unsetITEM_ID();

    void setITEMID(const std::shared_ptr<CatalogsProductGroupCurrencyCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getAVAILABILITY() const;
    bool aVAILABILITYIsSet() const;
    void unsetAVAILABILITY();

    void setAVAILABILITY(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getBRAND() const;
    bool bRANDIsSet() const;
    void unsetBRAND();

    void setBRAND(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCONDITION() const;
    bool cONDITIONIsSet() const;
    void unsetCONDITION();

    void setCONDITION(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL0() const;
    bool cUSTOMLABEL0IsSet() const;
    void unsetCUSTOM_LABEL_0();

    void setCUSTOMLABEL0(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL1() const;
    bool cUSTOMLABEL1IsSet() const;
    void unsetCUSTOM_LABEL_1();

    void setCUSTOMLABEL1(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL2() const;
    bool cUSTOMLABEL2IsSet() const;
    void unsetCUSTOM_LABEL_2();

    void setCUSTOMLABEL2(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL3() const;
    bool cUSTOMLABEL3IsSet() const;
    void unsetCUSTOM_LABEL_3();

    void setCUSTOMLABEL3(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getCUSTOMLABEL4() const;
    bool cUSTOMLABEL4IsSet() const;
    void unsetCUSTOM_LABEL_4();

    void setCUSTOMLABEL4(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getITEMGROUPID() const;
    bool iTEMGROUPIDIsSet() const;
    void unsetITEM_GROUP_ID();

    void setITEMGROUPID(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> getGENDER() const;
    bool gENDERIsSet() const;
    void unsetGENDER();

    void setGENDER(const std::shared_ptr<CatalogsProductGroupMultipleStringCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE4() const;
    bool pRODUCTTYPE4IsSet() const;
    void unsetPRODUCT_TYPE_4();

    void setPRODUCTTYPE4(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE3() const;
    bool pRODUCTTYPE3IsSet() const;
    void unsetPRODUCT_TYPE_3();

    void setPRODUCTTYPE3(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE2() const;
    bool pRODUCTTYPE2IsSet() const;
    void unsetPRODUCT_TYPE_2();

    void setPRODUCTTYPE2(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE1() const;
    bool pRODUCTTYPE1IsSet() const;
    void unsetPRODUCT_TYPE_1();

    void setPRODUCTTYPE1(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getPRODUCTTYPE0() const;
    bool pRODUCTTYPE0IsSet() const;
    void unsetPRODUCT_TYPE_0();

    void setPRODUCTTYPE0(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY6() const;
    bool gOOGLEPRODUCTCATEGORY6IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_6();

    void setGOOGLEPRODUCTCATEGORY6(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY5() const;
    bool gOOGLEPRODUCTCATEGORY5IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_5();

    void setGOOGLEPRODUCTCATEGORY5(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY4() const;
    bool gOOGLEPRODUCTCATEGORY4IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_4();

    void setGOOGLEPRODUCTCATEGORY4(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY3() const;
    bool gOOGLEPRODUCTCATEGORY3IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_3();

    void setGOOGLEPRODUCTCATEGORY3(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY2() const;
    bool gOOGLEPRODUCTCATEGORY2IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_2();

    void setGOOGLEPRODUCTCATEGORY2(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY1() const;
    bool gOOGLEPRODUCTCATEGORY1IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_1();

    void setGOOGLEPRODUCTCATEGORY1(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> getGOOGLEPRODUCTCATEGORY0() const;
    bool gOOGLEPRODUCTCATEGORY0IsSet() const;
    void unsetGOOGLE_PRODUCT_CATEGORY_0();

    void setGOOGLEPRODUCTCATEGORY0(const std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria>& value);


protected:
    std::shared_ptr<CatalogsProductGroupPricingCriteria> m_MIN_PRICE;
    bool m_MIN_PRICEIsSet;
    std::shared_ptr<CatalogsProductGroupPricingCriteria> m_MAX_PRICE;
    bool m_MAX_PRICEIsSet;
    std::shared_ptr<CatalogsProductGroupCurrencyCriteria> m_CURRENCY;
    bool m_CURRENCYIsSet;
    std::shared_ptr<CatalogsProductGroupCurrencyCriteria> m_ITEM_ID;
    bool m_ITEM_IDIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_AVAILABILITY;
    bool m_AVAILABILITYIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_BRAND;
    bool m_BRANDIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CONDITION;
    bool m_CONDITIONIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_0;
    bool m_CUSTOM_LABEL_0IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_1;
    bool m_CUSTOM_LABEL_1IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_2;
    bool m_CUSTOM_LABEL_2IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_3;
    bool m_CUSTOM_LABEL_3IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_CUSTOM_LABEL_4;
    bool m_CUSTOM_LABEL_4IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_ITEM_GROUP_ID;
    bool m_ITEM_GROUP_IDIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringCriteria> m_GENDER;
    bool m_GENDERIsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_4;
    bool m_PRODUCT_TYPE_4IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_3;
    bool m_PRODUCT_TYPE_3IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_2;
    bool m_PRODUCT_TYPE_2IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_1;
    bool m_PRODUCT_TYPE_1IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_PRODUCT_TYPE_0;
    bool m_PRODUCT_TYPE_0IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_6;
    bool m_GOOGLE_PRODUCT_CATEGORY_6IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_5;
    bool m_GOOGLE_PRODUCT_CATEGORY_5IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_4;
    bool m_GOOGLE_PRODUCT_CATEGORY_4IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_3;
    bool m_GOOGLE_PRODUCT_CATEGORY_3IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_2;
    bool m_GOOGLE_PRODUCT_CATEGORY_2IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_1;
    bool m_GOOGLE_PRODUCT_CATEGORY_1IsSet;
    std::shared_ptr<CatalogsProductGroupMultipleStringListCriteria> m_GOOGLE_PRODUCT_CATEGORY_0;
    bool m_GOOGLE_PRODUCT_CATEGORY_0IsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_CatalogsProductGroupFilterKeys_H_ */
