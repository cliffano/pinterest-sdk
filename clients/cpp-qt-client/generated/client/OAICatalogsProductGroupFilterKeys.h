/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.4.1
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICatalogsProductGroupFilterKeys.h
 *
 * 
 */

#ifndef OAICatalogsProductGroupFilterKeys_H
#define OAICatalogsProductGroupFilterKeys_H

#include <QJsonObject>

#include "OAIAvailabilityFilter.h"
#include "OAIBrandFilter.h"
#include "OAICatalogsProductGroupCurrencyCriteria.h"
#include "OAICatalogsProductGroupMultipleStringCriteria.h"
#include "OAICatalogsProductGroupMultipleStringListCriteria.h"
#include "OAICatalogsProductGroupPricingCriteria.h"
#include "OAIConditionFilter.h"
#include "OAICurrencyFilter.h"
#include "OAICustomLabel0Filter.h"
#include "OAICustomLabel1Filter.h"
#include "OAICustomLabel2Filter.h"
#include "OAICustomLabel3Filter.h"
#include "OAICustomLabel4Filter.h"
#include "OAIGenderFilter.h"
#include "OAIGoogleProductCategory0Filter.h"
#include "OAIGoogleProductCategory1Filter.h"
#include "OAIGoogleProductCategory2Filter.h"
#include "OAIGoogleProductCategory3Filter.h"
#include "OAIGoogleProductCategory4Filter.h"
#include "OAIGoogleProductCategory5Filter.h"
#include "OAIGoogleProductCategory6Filter.h"
#include "OAIItemGroupIdFilter.h"
#include "OAIItemIdFilter.h"
#include "OAIMaxPriceFilter.h"
#include "OAIMinPriceFilter.h"
#include "OAIProductType0Filter.h"
#include "OAIProductType1Filter.h"
#include "OAIProductType2Filter.h"
#include "OAIProductType3Filter.h"
#include "OAIProductType4Filter.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAICatalogsProductGroupFilterKeys : public OAIObject {
public:
    OAICatalogsProductGroupFilterKeys();
    OAICatalogsProductGroupFilterKeys(QString json);
    ~OAICatalogsProductGroupFilterKeys() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupPricingCriteria getMinPrice() const;
    void setMinPrice(const OAICatalogsProductGroupPricingCriteria &min_price);
    bool is_min_price_Set() const;
    bool is_min_price_Valid() const;

    OAICatalogsProductGroupPricingCriteria getMaxPrice() const;
    void setMaxPrice(const OAICatalogsProductGroupPricingCriteria &max_price);
    bool is_max_price_Set() const;
    bool is_max_price_Valid() const;

    OAICatalogsProductGroupCurrencyCriteria getCurrency() const;
    void setCurrency(const OAICatalogsProductGroupCurrencyCriteria &currency);
    bool is_currency_Set() const;
    bool is_currency_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getItemId() const;
    void setItemId(const OAICatalogsProductGroupMultipleStringCriteria &item_id);
    bool is_item_id_Set() const;
    bool is_item_id_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getAvailability() const;
    void setAvailability(const OAICatalogsProductGroupMultipleStringCriteria &availability);
    bool is_availability_Set() const;
    bool is_availability_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getBrand() const;
    void setBrand(const OAICatalogsProductGroupMultipleStringCriteria &brand);
    bool is_brand_Set() const;
    bool is_brand_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCondition() const;
    void setCondition(const OAICatalogsProductGroupMultipleStringCriteria &condition);
    bool is_condition_Set() const;
    bool is_condition_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel0() const;
    void setCustomLabel0(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_0);
    bool is_custom_label_0_Set() const;
    bool is_custom_label_0_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel1() const;
    void setCustomLabel1(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_1);
    bool is_custom_label_1_Set() const;
    bool is_custom_label_1_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel2() const;
    void setCustomLabel2(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_2);
    bool is_custom_label_2_Set() const;
    bool is_custom_label_2_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel3() const;
    void setCustomLabel3(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_3);
    bool is_custom_label_3_Set() const;
    bool is_custom_label_3_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getCustomLabel4() const;
    void setCustomLabel4(const OAICatalogsProductGroupMultipleStringCriteria &custom_label_4);
    bool is_custom_label_4_Set() const;
    bool is_custom_label_4_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getItemGroupId() const;
    void setItemGroupId(const OAICatalogsProductGroupMultipleStringCriteria &item_group_id);
    bool is_item_group_id_Set() const;
    bool is_item_group_id_Valid() const;

    OAICatalogsProductGroupMultipleStringCriteria getGender() const;
    void setGender(const OAICatalogsProductGroupMultipleStringCriteria &gender);
    bool is_gender_Set() const;
    bool is_gender_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType4() const;
    void setProductType4(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_4);
    bool is_product_type_4_Set() const;
    bool is_product_type_4_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType3() const;
    void setProductType3(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_3);
    bool is_product_type_3_Set() const;
    bool is_product_type_3_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType2() const;
    void setProductType2(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_2);
    bool is_product_type_2_Set() const;
    bool is_product_type_2_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType1() const;
    void setProductType1(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_1);
    bool is_product_type_1_Set() const;
    bool is_product_type_1_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType0() const;
    void setProductType0(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_0);
    bool is_product_type_0_Set() const;
    bool is_product_type_0_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory6() const;
    void setGoogleProductCategory6(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_6);
    bool is_google_product_category_6_Set() const;
    bool is_google_product_category_6_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory5() const;
    void setGoogleProductCategory5(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_5);
    bool is_google_product_category_5_Set() const;
    bool is_google_product_category_5_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory4() const;
    void setGoogleProductCategory4(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_4);
    bool is_google_product_category_4_Set() const;
    bool is_google_product_category_4_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory3() const;
    void setGoogleProductCategory3(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_3);
    bool is_google_product_category_3_Set() const;
    bool is_google_product_category_3_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory2() const;
    void setGoogleProductCategory2(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_2);
    bool is_google_product_category_2_Set() const;
    bool is_google_product_category_2_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory1() const;
    void setGoogleProductCategory1(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_1);
    bool is_google_product_category_1_Set() const;
    bool is_google_product_category_1_Valid() const;

    OAICatalogsProductGroupMultipleStringListCriteria getGoogleProductCategory0() const;
    void setGoogleProductCategory0(const OAICatalogsProductGroupMultipleStringListCriteria &google_product_category_0);
    bool is_google_product_category_0_Set() const;
    bool is_google_product_category_0_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupPricingCriteria min_price;
    bool m_min_price_isSet;
    bool m_min_price_isValid;

    OAICatalogsProductGroupPricingCriteria max_price;
    bool m_max_price_isSet;
    bool m_max_price_isValid;

    OAICatalogsProductGroupCurrencyCriteria currency;
    bool m_currency_isSet;
    bool m_currency_isValid;

    OAICatalogsProductGroupMultipleStringCriteria item_id;
    bool m_item_id_isSet;
    bool m_item_id_isValid;

    OAICatalogsProductGroupMultipleStringCriteria availability;
    bool m_availability_isSet;
    bool m_availability_isValid;

    OAICatalogsProductGroupMultipleStringCriteria brand;
    bool m_brand_isSet;
    bool m_brand_isValid;

    OAICatalogsProductGroupMultipleStringCriteria condition;
    bool m_condition_isSet;
    bool m_condition_isValid;

    OAICatalogsProductGroupMultipleStringCriteria custom_label_0;
    bool m_custom_label_0_isSet;
    bool m_custom_label_0_isValid;

    OAICatalogsProductGroupMultipleStringCriteria custom_label_1;
    bool m_custom_label_1_isSet;
    bool m_custom_label_1_isValid;

    OAICatalogsProductGroupMultipleStringCriteria custom_label_2;
    bool m_custom_label_2_isSet;
    bool m_custom_label_2_isValid;

    OAICatalogsProductGroupMultipleStringCriteria custom_label_3;
    bool m_custom_label_3_isSet;
    bool m_custom_label_3_isValid;

    OAICatalogsProductGroupMultipleStringCriteria custom_label_4;
    bool m_custom_label_4_isSet;
    bool m_custom_label_4_isValid;

    OAICatalogsProductGroupMultipleStringCriteria item_group_id;
    bool m_item_group_id_isSet;
    bool m_item_group_id_isValid;

    OAICatalogsProductGroupMultipleStringCriteria gender;
    bool m_gender_isSet;
    bool m_gender_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria product_type_4;
    bool m_product_type_4_isSet;
    bool m_product_type_4_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria product_type_3;
    bool m_product_type_3_isSet;
    bool m_product_type_3_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria product_type_2;
    bool m_product_type_2_isSet;
    bool m_product_type_2_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria product_type_1;
    bool m_product_type_1_isSet;
    bool m_product_type_1_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria product_type_0;
    bool m_product_type_0_isSet;
    bool m_product_type_0_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_6;
    bool m_google_product_category_6_isSet;
    bool m_google_product_category_6_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_5;
    bool m_google_product_category_5_isSet;
    bool m_google_product_category_5_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_4;
    bool m_google_product_category_4_isSet;
    bool m_google_product_category_4_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_3;
    bool m_google_product_category_3_isSet;
    bool m_google_product_category_3_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_2;
    bool m_google_product_category_2_isSet;
    bool m_google_product_category_2_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_1;
    bool m_google_product_category_1_isSet;
    bool m_google_product_category_1_isValid;

    OAICatalogsProductGroupMultipleStringListCriteria google_product_category_0;
    bool m_google_product_category_0_isSet;
    bool m_google_product_category_0_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICatalogsProductGroupFilterKeys)

#endif // OAICatalogsProductGroupFilterKeys_H
