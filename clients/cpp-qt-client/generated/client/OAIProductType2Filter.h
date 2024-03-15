/**
 * Pinterest REST API
 * Pinterest's REST API
 *
 * The version of the OpenAPI document: 5.12.0
 * Contact: blah+oapicf@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIProductType2Filter.h
 *
 * 
 */

#ifndef OAIProductType2Filter_H
#define OAIProductType2Filter_H

#include <QJsonObject>

#include "OAICatalogsProductGroupMultipleStringListCriteria.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIProductType2Filter : public OAIObject {
public:
    OAIProductType2Filter();
    OAIProductType2Filter(QString json);
    ~OAIProductType2Filter() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAICatalogsProductGroupMultipleStringListCriteria getProductType2() const;
    void setProductType2(const OAICatalogsProductGroupMultipleStringListCriteria &product_type_2);
    bool is_product_type_2_Set() const;
    bool is_product_type_2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAICatalogsProductGroupMultipleStringListCriteria m_product_type_2;
    bool m_product_type_2_isSet;
    bool m_product_type_2_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIProductType2Filter)

#endif // OAIProductType2Filter_H
